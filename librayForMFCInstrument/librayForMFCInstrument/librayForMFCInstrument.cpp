// 这是主 DLL 文件。

#include "stdafx.h"
#include<tchar.h>
#include "librayForMFCInstrument.h"

void Show_Error(int errordata)
{
	// ------------------------------------
	// Show error code
	// ------------------------------------
	cli::array<String^>^ errorstring = Enum::GetNames(ExceptionCode::typeid);
	cli::array<int>^ errorvale = static_cast<cli::array<int>^>(Enum::GetValues(ExceptionCode::typeid));
	int loop1;
	for (loop1 = 0; loop1 <= errorvale->Length - 1; loop1++)
	{
		if (errorvale[loop1] == errordata)
		{
			MessageBox(GetForegroundWindow(), (LPCTSTR)(void*)Marshal::StringToHGlobalAnsi(errorstring[loop1]), _T("prompt message"), MB_OK);
			break;
		}
	}
}
extern "C" __declspec(dllexport) void Get_Comportresouce(char* &Str)
{
	//----------------------------------------------
	// Get Comport on PC
	// 在PC上获取Comport
	//----------------------------------------------

	array<System::String^>^ portname = nullptr;
	portname = Communication::MainCommunication::Get_Serial_Port();
	String^ returnStr = "";

	for (int i = 0; i < portname->Length; i++)
	{
		if (i != 0)
			returnStr = returnStr + "," + portname->GetValue(i);
		else
			returnStr = returnStr + portname->GetValue(i);
	}
	Str = (char*)(void*)Marshal::StringToHGlobalAnsi(returnStr);
}

extern "C" __declspec(dllexport) void Get_resouce(char* &Str)
{
	//----------------------------------------------
	//  Get GPIB resouce
	//  获取GPIB资源
	//  This function need to instlle NIVisa.Dll
	//  这个函数需要安装NIVisa.Dll
	//----------------------------------------------

	array<System::String^>^resouce;
	resouce = Communication::MainCommunication::Get_GPIB_Resources();
	String^ returnStr = "";

	for (int i = 0; i < resouce->Length; i++)
	{
		if (i != 0)
			returnStr = returnStr + "," + resouce->GetValue(i);
		else
			returnStr = returnStr + resouce->GetValue(i);
	}
	Str = (char*)(void*)Marshal::StringToHGlobalAnsi(returnStr);
}

extern "C" __declspec(dllexport) void Get_Device_ID(char* &Str)
{
	//----------------------------------------------
	// Get PCU-100 Control device id
	// 获取PCU-100控制设备id
	//----------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	array<System::String^>^resouce;
    obj->pcu.Get_Device_ID(resouce);
	String^ returnStr = "";

	for (int i = 0; i < resouce->Length; i++)
	{
		if (i != 0)
			returnStr = returnStr + "," + resouce->GetValue(i);
		else
			returnStr = returnStr + resouce->GetValue(i);
	}
	Str = (char*)(void*)Marshal::StringToHGlobalAnsi(returnStr);
}

extern "C" __declspec(dllexport) void  Get_Usb_resouce(char* &Str)
{
	// ------------------------------------------------------
	// Get usb resouce
	// 获取usb资源
	// ------------------------------------------------------
	cli::array<String^> ^usb_resource;	
	String^ returnStr = "";
	usb_resource = Santec::Communication::MainCommunication::Get_USB_Resouce();
	for (int i = 0; i < usb_resource->Length; i++) {

		if (i != 0)
			returnStr = returnStr + "," + usb_resource->GetValue(i);
		else
			returnStr = returnStr + usb_resource->GetValue(i);
	}
	Str = (char*)(void*)Marshal::StringToHGlobalAnsi(returnStr);

}
extern "C" __declspec(dllexport) void TSL_Connect(char* &Informations,char*address, char* Board, bool rdiUSB, bool rdoLAN, char* txtPort, bool rdikysightvisa, bool rdiNI488, bool rdiCr, bool rdiLf)
{
	// --------------------------------------------------------
	// connect
	// 连接
	// --------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	Santec::CommunicationTerminator terminator;
	Santec::Communication::CommunicationMethod comm_method;

	if (rdiUSB == true)
	{
		// USB Communication
		// USB通信
		comm_method = Santec::Communication::CommunicationMethod::USB;
		obj->tsl.DeviceID = UInt32::Parse(gcnew String(address));
	}
	else if (rdoLAN == true)
	{
		// LAN Communication
		// LAN 通信
		comm_method = Santec::Communication::CommunicationMethod::TCPIP;
		obj->tsl.Port = int::Parse(gcnew String(txtPort));
		obj->tsl.IPAddress = gcnew String(address);
		obj->tsl.Waittime = 20;
	}

	else
	{
		// GPIB Communication
		// GPIB通信
		comm_method = Santec::Communication::CommunicationMethod::GPIB;

		Santec::Communication::GPIBConnectType gpibmethod;
		if (rdikysightvisa == true)
			gpibmethod = Santec::Communication::GPIBConnectType::KeysightIO;
		else if (rdiNI488 == true)
			gpibmethod = Santec::Communication::GPIBConnectType::NI4882;
		else
			gpibmethod = Santec::Communication::GPIBConnectType::NIVisa;

		obj->tsl.GPIBAddress = System::Convert::ToInt32(gcnew String(address));
		obj->tsl.GPIBBoard = int::Parse(gcnew String(Board));
		obj->tsl.GPIBConnectType = gpibmethod;
	}

	// ----------------Common
	// ---------------- 常见的
	// Terminator
	// 终止符
	if (rdiCr == true)
		terminator = Santec::CommunicationTerminator::Cr;
	else if (rdiLf == true)
		terminator = Santec::CommunicationTerminator::Lf;
	else
		terminator = Santec::CommunicationTerminator::CrLf;

	obj->tsl.Terminator = terminator;
	obj->tsl.TimeOut = 2000;             // Communication timeout 2000msec//通信超时2000msec


	String^ ans;
	int errorcode;

	errorcode = obj->tsl.Connect(comm_method);

	if (errorcode != 0)
	{
		obj->tsl.DisConnect();
		Show_Error(errorcode);
		return;
	}
	// --TSL information
	// --TSL信息
	String^ Information = "";
	Information = obj->tsl.Information->ProductName + ",";
	Information = Information + obj->tsl.Information->SerialNumber + ",";
	Information = Information + obj->tsl.Information->FWversion + ",";
	Information = Information + obj->tsl.Information->MinimunWavelength + "-" + obj->tsl.Information->MaximumWavelength + ",";
	Information = Information + obj->tsl.Information->MinimunFrequency + "-" + obj->tsl.Information->MaximumFrequency + ",";
	Information = Information + obj->tsl.Information->MinimumATTValue + "-" + obj->tsl.Information->MaximumATTValue + ",";
	Information = Information + obj->tsl.Information->MinimumAPCPower_dBm + "-" + obj->tsl.Information->MaximumAPCPower_dBm + ",";
	Information = Information + obj->tsl.Information->MinimumAPCPower_mW + "-" + obj->tsl.Information->MaximumAPCPower_mW + ",";
	Information = Information + obj->tsl.Information->MinimumSpeed + "-" + obj->tsl.Information->MaximumSpeed;
	Informations = (char*)(void*)Marshal::StringToHGlobalAnsi(Information);
}
extern "C" __declspec(dllexport) void TSL_DisConnect()
{
	//-------------------------------------------------------
	//       Disconnect
	//       断开连接
	//--------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;

	errorcode = obj->tsl.DisConnect();

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
}
extern "C" __declspec(dllexport) void TSL_LD_ON()
{
	// ---------------------------------------------------
	// LD ON
	// LD 开
	// ---------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;

	errorcode = obj->tsl.Set_LD_Status(TSL::LD_Status::LD_ON);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
	}
}
extern "C" __declspec(dllexport) void TSL_LD_OFF()
{
	// ---------------------------------------------------
	// LD OFF
	// LD 关
	// ---------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;

	errorcode = obj->tsl.Set_LD_Status(TSL::LD_Status::LD_OFF);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
	}
}
extern "C" __declspec(dllexport) void TSL_Coh_ON()
{
	// -----------------------------------------------
	// Coh on
	// Coh 开
	// ----------------------------------------------------
	int errcord;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	errcord = obj->tsl.Set_Coh_Control_Status(TSL::Coh_Status::Coh_ON);
	if (errcord != 0)
		Show_Error(errcord);

}
extern "C" __declspec(dllexport) void TSL_Coh_OFF()
{
	// -----------------------------------------------
	// Coh oFF
	// Coh 关
	// ----------------------------------------------------
	int errcord;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	errcord = obj->tsl.Set_Coh_Control_Status(TSL::Coh_Status::Coh_OFF);
	if (errcord != 0)
		Show_Error(errcord);

}
extern "C" __declspec(dllexport) void TSL_Shutter_Open()
{
	// -------------------------------------------
	// shutter Open
	// 遮挡状态开启
	// -------------------------------------------
	int errcord;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	errcord = obj->tsl.Set_Shutter_Status(TSL::Shutter_Status::Shutter_Open);
	if (errcord != 0)
		Show_Error(errcord);

}
extern "C" __declspec(dllexport) void TSL_Shutter_Close()
{
	// -------------------------------------------
	// shutter Close
	// 遮挡状态关闭
	// -------------------------------------------
	int errcord;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	errcord = obj->tsl.Set_Shutter_Status(TSL::Shutter_Status::Shutter_Close);
	if (errcord != 0)
		Show_Error(errcord);
}
extern "C" __declspec(dllexport) void TSL_APC()
{
	// -----------------------------------------------
	// Set Power mode to APC
	// 设置功率模式为自动
	// ----------------------------------------------------
	int errcord;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	errcord = obj->tsl.Set_Power_Mode(TSL::Power_Mode::APC);
	if (errcord != 0)
		Show_Error(errcord);
}
extern "C" __declspec(dllexport) void TSL_ACC()
{
	// -----------------------------------------------
	// Set Power mode to ACC
	// 设置功率模式为手动
	// ----------------------------------------------------
	int errcord;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	errcord = obj->tsl.Set_Power_Mode(TSL::Power_Mode::ACC);
	if (errcord != 0)
		Show_Error(errcord);
}
extern "C" __declspec(dllexport) void TSL_dBm()
{
	// -----------------------------------------------
	// Set Power unit to dBm
	// 设置功率单位dBm
	// ----------------------------------------------------
	int errcord;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	errcord = obj->tsl.Set_Power_Unit(TSL::Power_Unit::dBm);
	if (errcord != 0)
		Show_Error(errcord);
}
extern "C" __declspec(dllexport) void TSL_mW()
{
	// -----------------------------------------------
	// Set Power unit to mW
	// 设置功率单位mW
	// ----------------------------------------------------
	int errcord;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	errcord = obj->tsl.Set_Power_Unit(TSL::Power_Unit::mW);
	if (errcord != 0)
		Show_Error(errcord);
}
extern "C" __declspec(dllexport) void TSL_SetATT(char* txtatt)
{
	// -----------------------------------------------
	// SetATT
	// 设置ATT数值
	// ----------------------------------------------------
	int errcord;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	errcord = obj->tsl.Set_ATT_Value(double::Parse(gcnew String(txtatt)));
	if (errcord != 0)
		Show_Error(errcord);
}
extern "C" __declspec(dllexport) void TSL_SetdBm(char* txtpow)
{
	// -----------------------------------------------
	// Set Power dBm
	// 设置功率（dBm）
	// ----------------------------------------------------
	int errcord;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	errcord = obj->tsl.Set_APC_Power_dBm(double::Parse(gcnew String(txtpow)));
	if (errcord != 0)
		Show_Error(errcord);
}
extern "C" __declspec(dllexport) void TSL_SetmW(char* txtpow)
{
	// -----------------------------------------------
	// Set Power mW
	// 设置功率（mW）
	// ----------------------------------------------------
	int errcord;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	errcord = obj->tsl.Set_APC_Power_mW(double::Parse(gcnew String(txtpow)));
	if (errcord != 0)
		Show_Error(errcord);
}
extern "C" __declspec(dllexport) void TSL_SetWavelenth(char* txtsetwave)
{
	// -----------------------------------------------
	// set Wavelength
	// 设置波长
	// ----------------------------------------------------
	int errcord;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	errcord = obj->tsl.Set_Wavelength(double::Parse(gcnew String(txtsetwave)));
	if (errcord != 0)
		Show_Error(errcord);
}
extern "C" __declspec(dllexport) void TSL_SetFrequency(char* txtsetfreq)
{
	// -----------------------------------------------
	// set Frequency
	// 设置频率
	// ----------------------------------------------------
	int errcord;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	errcord = obj->tsl.Set_Frequency(double::Parse(gcnew String(txtsetfreq)));
	if (errcord != 0)
		Show_Error(errcord);
}
extern "C" __declspec(dllexport) void TSL_SetFinetuning(char* ftvalue)
{
	// -----------------------------------------------
	// Set Finetuning
	// 设置微调
	// ----------------------------------------------------
	int errcord;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	errcord = obj->tsl.Set_Finetuning(double::Parse(gcnew String(ftvalue)));
	if (errcord != 0)
		Show_Error(errcord);
}
extern "C" __declspec(dllexport) void TSL_GetWavelength(double &wavelength)
{
	// -----------------------------------------------
	// Get Setting Wavelength Value
	// 获取设置波长的值
	// ----------------------------------------------------
	int errorcode;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	errorcode = obj->tsl.Get_Wavelength(wavelength);
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
}
extern "C" __declspec(dllexport) void TSL_GetFreuency(double &frequency)
{
	// -----------------------------------------------
	// Get Setting Frequency 
	// 获取设置频率
	// ----------------------------------------------------
	int errorcode;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	errorcode = obj->tsl.Get_Frequency(frequency);
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
}
extern "C" __declspec(dllexport) void TSL_GetFinetuning(double &ftval)
{
	// -----------------------------------------------
	// Get Fine tuning value
	// 获取微调值
	// ----------------------------------------------------
	int errorcode;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	errorcode = obj->tsl.Get_Finetuning(ftval);
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
}
extern "C" __declspec(dllexport) void TSL_GetBusy(bool &busy)
{
	// -----------------------------------------------
	// Get Busy status
	// 获取繁忙状态
	// ----------------------------------------------------
	int errorcode;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	errorcode = obj->tsl.Get_Busy_Status(busy);
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
}
extern "C" __declspec(dllexport) void TSL_Stangby(char* txtwait)
{
	// ------------------------------------------------------------
	// Waiting for standby until wait time
	// 等待待机直到等待时间
	// -----------------------------------------------------------
	double waittime;
	int errorcode;
	System::Diagnostics::Stopwatch st;
	double busy_time;

	waittime = double::Parse(gcnew String(txtwait));
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	st.Start();

	errorcode = obj->tsl.TSL_Busy_Check((int)(waittime));
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
	char* str = (char*)(void*)Marshal::StringToHGlobalAnsi("Busy time :" + busy_time + "ms");

	MessageBox(GetForegroundWindow(), str, _T("prompt message"), MB_OK);

}
extern "C" __declspec(dllexport) void TSL_error(char* &TSL_errors)
{
	// ----------------------------------------------------
	// Get TSL error code
	// 获取TSL错误代码
	// ----------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;
	String^ TSL_error = String::Empty;

	errorcode = obj->tsl.Get_System_Error(TSL_error);
	TSL_errors = (char*)(void*)Marshal::StringToHGlobalAnsi(TSL_error);
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
}
extern "C" __declspec(dllexport) void TSL_GetLD(bool& Status)
{
	// ------------------------------------------------
	// Get LD Status
	// 获取LD状态
	// ------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;
	TSL::LD_Status LD_status;

	errorcode = obj->tsl.Get_LD_Status(LD_status);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
	if (LD_status == TSL::LD_Status::LD_OFF)
		Status = false;
	else
		Status = true;
}
extern "C" __declspec(dllexport) void TSL_Power_mode(bool& Status)
{
	// ----------------------------------------------
	// Get Power Mode
	// 获取功率模式
	// ------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;
	TSL::Power_Mode powermode;

	errorcode = obj->tsl.Get_Power_Mode(powermode);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
	if (powermode == TSL::Power_Mode::ACC)
		Status = false;
	else
		Status = true;
}
extern "C" __declspec(dllexport) void TSL_Coh_Status(bool& Status)
{
	// ----------------------------------------------
	// Get coh Status
	// 获取coh状态
	// ------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;
	TSL::Coh_Status coh_status;

	errorcode = obj->tsl.Get_Coh_Control_Status(coh_status);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
	if (coh_status == TSL::Coh_Status::Coh_ON)
		Status = false;
	else
		Status = true;
}
extern "C" __declspec(dllexport) void TSL_Shutter_Status(bool& Status)
{
	// ----------------------------------------------
	// Get  shutter status
	// 获取遮挡状态
	// ------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;
	TSL::Shutter_Status shutter_su;

	errorcode = obj->tsl.Get_Shutter_Status(shutter_su);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
	if (shutter_su == TSL::Shutter_Status::Shutter_Open)
		Status = false;
	else
		Status = true;
}
extern "C" __declspec(dllexport) void TSL_Unit(bool& Status)
{
	// ----------------------------------------------
	// Get Unit
	// 获得单位
	// ------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;
	TSL::Power_Unit unit;

	errorcode = obj->tsl.Get_Power_Unit(unit);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
	if (unit == TSL::Power_Unit::dBm)
		Status = false;
	else
		Status = true;
}
extern "C" __declspec(dllexport) void TSL_Att_value(double& att_value)
{
	// ----------------------------------------------
	// Get Att value
	// 获取Att值
	// ------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;

	errorcode = obj->tsl.Get_ATT_Value(att_value);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
}

extern "C" __declspec(dllexport) void TSL_Power_dBm(double& set_pow)
{
	// ----------------------------------------------
	// Get Setting power dBm
	// 获取设置功率（dBm）
	// ------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;

	errorcode = obj->tsl.Get_Setting_Power_dBm(set_pow);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
}
extern "C" __declspec(dllexport) void TSL_Power_mW(double& set_pow)
{
	// ----------------------------------------------
	// Get Setting power mW
	// 获取设置功率（mW）
	// ------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;

	errorcode = obj->tsl.Get_Setting_Power_mW(set_pow);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
}
extern "C" __declspec(dllexport) void TSL_Monitor_dBm(double& moni_pow)
{
	// ----------------------------------------------
	// Get Monitor power dBm
	// 读取现在的监控功率（ｄBm）
	// ------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;

	errorcode = obj->tsl.Get_Monitor_Power_dBm(moni_pow);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
}
extern "C" __declspec(dllexport) void TSL_Monitor_mW(double& moni_pow)
{
	// ----------------------------------------------
	// Get Monitor power mW
	// 读取现在的监控功率（mW）
	// ------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;

	errorcode = obj->tsl.Get_Monitor_Power_mW(moni_pow);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
}
extern "C" __declspec(dllexport) void TSL_SetWavelength(char* txtstart, char* txtstop, char* txtstep)
{
	// ----------------------------------------------------------------------
	// set Sweep  Wavelength parameters
	// 设置扫描波长参数
	// ----------------------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	double startwavelength;
	double stopwavelength;
	double wavestep;
	int errorcode;
	// -----Set wavelength
	// ----- 设置波长
	startwavelength = double::Parse(gcnew String(txtstart));
	stopwavelength = double::Parse(gcnew String(txtstop));

	errorcode = obj->tsl.Set_Sweep_Wavelength(startwavelength, stopwavelength);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
	// ------Trigger & wavelength Step
	// ------触发和波长步长
	wavestep = double::Parse(gcnew String(txtstep));

	errorcode = obj->tsl.Set_Trigger_Step(wavestep);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	errorcode = obj->tsl.Set_Wavelength_Step(wavestep);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

}
extern "C" __declspec(dllexport) void TSL_SetOther(char* txtspeed, char* txtdelay, char* txtcycle)
{
	// --------------------------------------------------------
	// Set Sweep Parameters
	// 设置扫描参数
	// --------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;

	// -----Set Speed 
	// -----设定的速度
	double speed;
	speed = double::Parse(gcnew String(txtspeed));

	errorcode = obj->tsl.Set_Sweep_Speed(speed);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
	// ----Set Sweep Delay
	// ----设置扫描延时
	double delay;

	delay = double::Parse(gcnew String(txtdelay));

	errorcode = obj->tsl.Set_Sweep_Delay(delay);
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}


	// -----Set Sweep cycle 
	// -----设置扫描周期
	double cycle;
	cycle = double::Parse(gcnew String(txtcycle));

	errorcode = obj->tsl.Set_Sweep_Cycle((int)cycle);
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

}
extern "C" __declspec(dllexport) void TSL_Set_Sweep_parameter(char* cmbsm, char* cmbtin, char* cmbtout, char* cmbst_mod, char* cmbTrigger_Source, bool rdo570)
{
	// ---------------------------------------------------------
	// Set Sweep parameters 
	// 设置扫描参数
	// ---------------------------------------------------------
	TSL::Sweep_Mode smode;
	TSL::Trigger_Input_Mode tr_inp_mode;
	TSL::Trigger_Output_Mode tr_out_mode;
	TSL::Sweep_Start_Mode start_mode;
	TSL::TriggerOut_Source source;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	if ((gcnew String(cmbsm) == "") | (gcnew String(cmbtin) == "") | (gcnew String(cmbtout) == "") | (gcnew String(cmbst_mod) == ""))
	{
		MessageBox(GetForegroundWindow(), "Please enter the value", _T("prompt message"), MB_OK);
		return;
	}

	// ---Sweep mode
	// --- 扫描模式
	if (gcnew String(cmbsm) == "Step one way") {
		smode = TSL::Sweep_Mode::Step_Oneway;

	}
	else if (gcnew String(cmbsm) == "Continuous one way") {
		smode = TSL::Sweep_Mode::Continuous_Oneway;

	}
	else if (gcnew String(cmbsm) == "Step round trip") {
		smode = TSL::Sweep_Mode::Step_Twoway;

	}
	else if (gcnew String(cmbsm) == "Continuous round trip") {
		smode = TSL::Sweep_Mode::Continuous_Twoway;

	}

	// ----Trigger input mode
	// ----触发输入模式
	if (gcnew String(cmbtin) == "Disable")
		tr_inp_mode = TSL::Trigger_Input_Mode::Disable;
	else
		tr_inp_mode = TSL::Trigger_Input_Mode::Enable;

	// -----Trigger output mode
	// -----触发输出模式
	if (gcnew String(cmbtout) == "None") {
		tr_out_mode = TSL::Trigger_Output_Mode::None;

	}
	else if (gcnew String(cmbtout) == "Stop") {
		tr_out_mode = TSL::Trigger_Output_Mode::Stop;

	}
	else if (gcnew String(cmbtout) == "Start") {
		tr_out_mode = TSL::Trigger_Output_Mode::Start;

	}
	else if (gcnew String(cmbtout) == "Step") {
		tr_out_mode = TSL::Trigger_Output_Mode::Step;

	}

	// ----Startmode
	// ---- 启动模式

	if (gcnew String(cmbst_mod) == "Normal")
		start_mode = TSL::Sweep_Start_Mode::Normal;
	else
		start_mode = TSL::Sweep_Start_Mode::WaitingforTrigger;
	int errorcode;

	errorcode = obj->tsl.Set_Sweep_Mode_Parameters(smode, tr_out_mode, tr_inp_mode, start_mode);

	if (errorcode != 0)
		Show_Error(errorcode);
	if (gcnew String(cmbTrigger_Source) == "Wavelength")
		source = TSL::TriggerOut_Source::Wavelength;
	else
		source = TSL::TriggerOut_Source::Time;

	if (rdo570 == true)
	{
		errorcode = obj->tsl.Set_TriggerOutput_Source(source);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}
	}
}
extern "C" __declspec(dllexport) void TSL_Get_setting(char* &txtg_smod, char* &txtg_tr_inp, char* &txtg_tri_out, char* &txtg_startmode, char* &txtg_startwave, char* &txtg_stopwave, char* &txtg_delay, char* &txtg_cycle, char* &txtg_wavestep, char* &txtg_triggerstep, char* &txtg_speed, char* &txtTrigger_Source, bool rdo570)
{
	// -----------------------------------------------
	// get sweep paremters
	// 获取扫描参数
	// -----------------------------------------------
	TSL::Sweep_Mode s_mode;
	TSL::Trigger_Output_Mode tr_outputmode;
	TSL::Trigger_Input_Mode tr_inputmode;
	TSL::Sweep_Start_Mode start_mode;
	TSL::TriggerOut_Source source;
	int errorcode;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();


	// ----get Sweep mode
	// ----获取扫描模式
	errorcode = obj->tsl.Get_Sweep_Mode(s_mode);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	if (s_mode == TSL::Sweep_Mode::Continuous_Oneway)
		txtg_smod = "Continuous Oneway";
	else if (s_mode == TSL::Sweep_Mode::Continuous_Twoway)
		txtg_smod = "Continuous Round trip";
	else if (s_mode == TSL::Sweep_Mode::Step_Oneway)
		txtg_smod = "Step Oneway";
	else
		txtg_smod = "Step Round trip";

	// ---Trigger input mode 
	// ---触发输入模式
	errorcode = obj->tsl.Get_Input_Trigger_Mode(tr_inputmode);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	if (tr_inputmode == TSL::Trigger_Input_Mode::Disable)
		txtg_tr_inp = "Disable";
	else
		txtg_tr_inp = "Enable";

	// ----Trigger output mode 
	// ----触发输出模式
	errorcode = obj->tsl.Get_Trigger_Output_Mode(tr_outputmode);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	if (tr_outputmode == TSL::Trigger_Output_Mode::None)
		txtg_tri_out = "None";
	else if (tr_outputmode == TSL::Trigger_Output_Mode::Start)
		txtg_tri_out = "Start";
	else if (tr_outputmode == TSL::Trigger_Output_Mode::Step)
		txtg_tri_out = "Step";
	else
		txtg_tri_out = "Stop";


	// ----start mode
	// ---- 启动模式

	errorcode = obj->tsl.Get_Sweep_Start_Mode(start_mode);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	if (start_mode == TSL::Sweep_Start_Mode::Normal)
		txtg_startmode = "Normal";
	else
		txtg_startmode = "Waiting for trigger";


	// ----Stop& Start wavelength
	// ----Stop& Start波长
	double startwave;
	double stopwave;

	errorcode = obj->tsl.Get_Sweep_Wavelength(startwave, stopwave);
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	txtg_startwave = (char*)(void*)Marshal::StringToHGlobalAnsi(startwave.ToString());
	txtg_stopwave = (char*)(void*)Marshal::StringToHGlobalAnsi(stopwave.ToString());

	// ---Sweep delay
	// --- 扫描延迟
	double delay;

	errorcode = obj->tsl.Get_Sweep_Delay(delay);
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	txtg_delay = (char*)(void*)Marshal::StringToHGlobalAnsi(delay.ToString());

	// -----Sweep Cycle
	// ----- 扫描周期
	int cycle;

	errorcode = obj->tsl.Get_Sweep_Cycle(cycle);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	txtg_cycle = (char*)(void*)Marshal::StringToHGlobalAnsi(cycle.ToString());

	// ----wavelength Step 
	// ---- 波长的步长
	double wavestep;

	errorcode = obj->tsl.Get_Wavelength_Step(wavestep);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	txtg_wavestep = (char*)(void*)Marshal::StringToHGlobalAnsi(wavestep.ToString());


	// -----Trigger step 
	// ----- 触发步长

	errorcode = obj->tsl.Get_Trigger_Step(wavestep);
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	txtg_triggerstep = (char*)(void*)Marshal::StringToHGlobalAnsi(wavestep.ToString());

	// ----Sweep Speed 
	// ---- 扫描速度
	double speed;

	errorcode = obj->tsl.Get_Sweep_Speed(speed);
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	txtg_speed = (char*)(void*)Marshal::StringToHGlobalAnsi(speed.ToString());

	if (rdo570 == true)
	{
		errorcode = obj->tsl.Get_TriggerOutput_Source(source);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}
		if (source == TSL::TriggerOut_Source::Wavelength)
			txtTrigger_Source = "Wavelength";
		else
			txtTrigger_Source = "Time";
	}
	else {
		txtTrigger_Source = "";

	}

}

extern "C" __declspec(dllexport) void TSL_Get_Sweep_Count(char* &txtcurrentc)
{
	// ----------------------------------------------
	// Sweep Start
	// 扫描开始
	// ------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;
	int cycles;
	errorcode = obj->tsl.Get_Sweep_Count(cycles);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
	txtcurrentc = (char*)(void*)Marshal::StringToHGlobalAnsi(cycles.ToString());
}

extern "C" __declspec(dllexport) void TSL_Start()
{
	// ----------------------------------------------
	// Sweep Start
	// 扫描开始
	// ------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;

	errorcode = obj->tsl.Sweep_Start();

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
}
extern "C" __declspec(dllexport) void TSL_Pause()
{
	// ----------------------------------------------
	// Sweep Pause
	// 扫描暂停
	// ------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;

	errorcode = obj->tsl.Sweep_Pause();

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
}
extern "C" __declspec(dllexport) void TSL_Restart()
{
	// ----------------------------------------------
	// Sweep Restart
	// 扫描继续
	// ------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;

	errorcode = obj->tsl.Sweep_Restart();

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
}
extern "C" __declspec(dllexport) void TSL_Stop(char* lblproductname)
{
	// ----------------------------------------------
	// Sweep Stop
	// 扫描停止
	// ------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;
	String ^productname = gcnew String(lblproductname);
	if (productname->IndexOf("TSL-570") > -1)
	{
		TSL::Sweep_Status Status;
		System::Threading::Thread::Sleep(50);
		obj->tsl.Get_Sweep_Status(Status);
		if (Status != TSL::Sweep_Status::Standby)
		{
			errorcode = obj->tsl.Sweep_Stop();
			if (errorcode != 0)
				Show_Error(errorcode);
		}
	}
	else
	{
		errorcode = obj->tsl.Sweep_Pause();

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		errorcode = obj->tsl.Sweep_Stop();

		if (errorcode != 0)
			Show_Error(errorcode);
	}
}
extern "C" __declspec(dllexport) void TSL_SoftwareTrigger()
{
	// ----------------------------------------------
	// software trigger
	// 软件触发
	// ------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;

	errorcode = obj->tsl.Set_Software_Trigger();

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
}
extern "C" __declspec(dllexport) void TSL_Getcycles(char* &txtcurrentc)
{
	// ----------------------------------------------
	// Get current cycles
	// 获取当前周期
	// ------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;
	int cycles;

	errorcode = obj->tsl.Get_Sweep_Count(cycles);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
	txtcurrentc = (char*)(void*)Marshal::StringToHGlobalAnsi(cycles.ToString());
}
extern "C" __declspec(dllexport) void TSL_GetLoggdata(char* fpath)
{
	// ----------------------------------------------
	// Get Sweep Loggdata
	// 获取测试数据
	// ------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcord;
	int logcount;
	cli::array<double>^ logdata;

	errorcord = obj->tsl.Get_Logging_Data(logcount, logdata);

	if (errorcord != 0)
	{
		Show_Error(errorcord);
		return;
	}

	System::IO::StreamWriter^ writer;
	int loop1;
	writer = gcnew System::IO::StreamWriter(gcnew String(fpath));

	for (loop1 = 0; loop1 <= logdata->GetUpperBound(0); loop1++)
		writer->WriteLine(logdata[loop1]);

	writer->Close();
	MessageBox(GetForegroundWindow(), "Logg data read completed.", _T("prompt message"), MB_OK);
}
extern "C" __declspec(dllexport) void TSL_Calcurate(char*  txtminstep)
{
	// ----------------------------------------------
	// Calcurate Trigger minimum step form sweep speed
	// 从扫描速度计算触发最小步长
	// ------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	double tr_step;
	double speed;
	int errorcode;

	speed = double::Parse(gcnew String(txtminstep));

	errorcode = obj->tsl.Cal_MinimumTriggerStep_from_SweepSpeed(speed, tr_step, true);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
	MessageBox(GetForegroundWindow(), (char*)(void*)Marshal::StringToHGlobalAnsi("Minimum trigger step = " + System::Convert::ToString(tr_step) + "nm"), _T("prompt message"), MB_OK);
}
extern "C" __declspec(dllexport) void TSL_Waiting(char*  txtsw_wait, char*  cmbsweep_su)
{
	// -----------------------------------------------------------
	// Waititng for sweep status
	// 等待扫描状态
	// -----------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	int errorcode;
	TSL::Sweep_Status sweep_su;
	int wait_time;
	System::Diagnostics::Stopwatch st;
	double timed;

	wait_time = int::Parse(gcnew String(txtsw_wait));


	if (gcnew String(cmbsweep_su) == "Standby")
		sweep_su = TSL::Sweep_Status::Standby;
	else if (gcnew String(cmbsweep_su) == "Running")
		sweep_su = TSL::Sweep_Status::Running;
	else if (gcnew String(cmbsweep_su) == "Pausing")
		sweep_su = TSL::Sweep_Status::Pausing;
	else if (gcnew String(cmbsweep_su) == "WaitingforTrigger")
		sweep_su = TSL::Sweep_Status::WaitingforTrigger;
	else
		sweep_su = TSL::Sweep_Status::Returning;


	st.Start();
	errorcode = obj->tsl.Waiting_For_Sweep_Status(wait_time, sweep_su);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	timed = st.ElapsedMilliseconds;	
	MessageBox(GetForegroundWindow(), (char*)(void*)Marshal::StringToHGlobalAnsi("waiting time:" + Convert::ToString(timed) + "msec"), _T("prompt message"), MB_OK);
}
extern "C" __declspec(dllexport) void TSL_Get_Sweep_Status(char*  &txtg_sweep_su)
{
	// -----------------------------------------------------------
	// Get Sweep status
	// 获取扫描状态
	// -----------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;
	TSL::Sweep_Status sweep_su;

	errorcode = obj->tsl.Get_Sweep_Status(sweep_su);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	if (sweep_su == TSL::Sweep_Status::Pausing)
		txtg_sweep_su = "Pause";
	else if (sweep_su == TSL::Sweep_Status::Returning)
		txtg_sweep_su = "Returning";
	else if (sweep_su == TSL::Sweep_Status::Running)
		txtg_sweep_su = "Runing";
	else if (sweep_su == TSL::Sweep_Status::Standby)
		txtg_sweep_su = "Standby";
	else
		txtg_sweep_su = "Waiting for Trigger";
}
extern "C" __declspec(dllexport) void Split(char*  cmbgpib_resouce, char*  &txtboad, char*  &txtaddressnum)
{
	// -----------------------------------------------------------
	//  Split Visa resouce string 
	//  将字符串分割
	// -----------------------------------------------------------
	if (gcnew String(cmbgpib_resouce) == "")
	{
		MessageBox(GetForegroundWindow(), "Please enter the visa string for GPIB resouce commbbox", _T("prompt message"), MB_OK);
		return;
	}
	array<System::String^>^sp = nullptr;
	int board_number;
	int address;
	array<wchar_t>^ c = { ':',':' };
	String ^gpib_resouce = gcnew String(cmbgpib_resouce);
	sp = gpib_resouce->Split(c);

	board_number = Convert::ToInt32(sp[0]->Substring(4));
	address = Convert::ToInt32(sp[2]);

	txtboad = (char*)(void*)Marshal::StringToHGlobalAnsi(board_number.ToString());
	txtaddressnum = (char*)(void*)Marshal::StringToHGlobalAnsi(address.ToString());
}
extern "C" __declspec(dllexport) void TSLGet_SweepSpeed_table(bool rdo570, char*  &returnStrs)
{
	// -----------------------------------------------------------
	// Get SweepSpeed table
	// 获取SweepSpeed表
	// -----------------------------------------------------------
	int errorcode;
	array<System::Double>^table = nullptr;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	String ^returnStr;
	if (rdo570 == true)
	{
		errorcode = obj->tsl.Get_Sweep_Speed_table(table);
		int loop1;
		for (int i = 0; i < table->Length; i++) {

			if (i != 0)
				returnStr = returnStr + "," + table->GetValue(i);
			else
				returnStr = returnStr + table->GetValue(i);
		}
		returnStrs= (char*)(void*)Marshal::StringToHGlobalAnsi(returnStr);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

	}
}


extern "C" __declspec(dllexport) void TSLGet_IP(char*  &txtaddress)
{
	// -----------------------------------------------------------
	// Get IP Address
	// this function only support for TSL-570
	// 获取IP地址
	// 这个功能只支持TSL-570
	// -----------------------------------------------------------
	int errorcode;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	String^ ip = String::Empty;

	errorcode = obj->tsl.Get_IPAddress(ip);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
	txtaddress = (char*)(void*)Marshal::StringToHGlobalAnsi(ip);

}

extern "C" __declspec(dllexport) void TSLGet_Port(char* &txtPort)
{
	// -----------------------------------------------------------
	// Get Port
	// this function only support for TSL-570
	// 获取端口
	// 这个功能只支持TSL-570
	// -----------------------------------------------------------
	int errorcode;

	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int port;
	errorcode = obj->tsl.Get_LAN_Portnumber(port);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
	txtPort = (char*)(void*)Marshal::StringToHGlobalAnsi(port.ToString());

}
extern "C" __declspec(dllexport) void MPM_Connect(char* &Informations, char*address, char* Board, bool rdo232C, bool rdoLAN, char* txtPort, bool rdikysightvisa,bool rdiNI488,char* &lbl_types, char* &lbl_sns, char* &lbl_versions)
{
	// --------------------------------------------------------
	// connect
	// 连接
	// --------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	Santec::Communication::CommunicationMethod communication_method;               // Communication　method //通信方法
	Santec::Communication::GPIBConnectType gpib_type;                              // GPIB type //GPIB类型
	 // ----GPIB Connection
	// ----GPIB连接

	if (rdo232C == true)
	{
		// ------232C Communication
		// ------ 232 c通信
		communication_method = Santec::Communication::CommunicationMethod::C232C;
		obj->mpm.ComPort = gcnew String(address);
		obj->mpm.BaudRate = 115200;

		// 232C communication can't use Logging mode
		// 232C通信不能使用测量模式
		//TabPage3->Enabled = false;
		//TabPage4->Enabled = false;

	}
	else if (rdoLAN == true)
	{
		// LAN Communication
		// LAN 通信
		communication_method = Santec::Communication::CommunicationMethod::TCPIP;
		obj->mpm.Port = int::Parse(gcnew String(txtPort));
		obj->mpm.IPAddress = gcnew String(address);
		obj->mpm.Waittime = 20;
		//TabPage3->Enabled = true;
		//TabPage4->Enabled = true;
	}
	else
	{
		// GPIB Communication
		// GPIB通信
		communication_method = Santec::Communication::CommunicationMethod::GPIB;

		Santec::Communication::GPIBConnectType gpibmethod;
		if (rdikysightvisa == true)
			gpib_type = Santec::Communication::GPIBConnectType::KeysightIO;
		else if (rdiNI488 == true)
			gpib_type = Santec::Communication::GPIBConnectType::NI4882;
		else
			gpib_type = Santec::Communication::GPIBConnectType::NIVisa;

		obj->mpm.GPIBAddress = System::Convert::ToInt32(gcnew String(address));
		obj->mpm.GPIBBoard = int::Parse(gcnew String(Board));
		obj->mpm.GPIBConnectType = gpib_type;
	}


	// -----Connect 
	// -----连接
	int errorcode;                // errorcode //错误代码 
	String^ ans = String::Empty; // return string //返回字符串

	errorcode = obj->mpm.Connect(communication_method);

	if (errorcode != 0)
	{			
		// show errorcord
		// 显示错误信息
		obj->mpm.DisConnect();
		Show_Error(errorcode);
		return;
	}
	// -----show information 
	// -----显示信息
	String^ Information = "";
	Information = obj->mpm.Information->ProductName + ",";
	Information = Information + obj->mpm.Information->SerialNumber + ",";
	Information = Information + obj->mpm.Information->FWversion + ",";
	Information = Information + obj->mpm.Information->NumberofModule;
	Informations = (char*)(void*)Marshal::StringToHGlobalAnsi(Information);

	int loop1;                   // loop counter //循环计数
	String^ lbl_type; 
	String^ lbl_sn;
	String^ lbl_version;
	for (loop1 = 0; loop1 <= 4; loop1++)
	{
		if (loop1 != 0) 
		{
			lbl_type = lbl_type + "," + obj->mpm.Information->ModuleType[loop1];
			lbl_sn = lbl_sn + "," + obj->mpm.Information->ModuelSerial[loop1];
			lbl_version = lbl_version + "," + obj->mpm.Information->ModuleFW[loop1];
		}
		else 
		{
			lbl_type = lbl_type + obj->mpm.Information->ModuleType[loop1];
			lbl_sn = lbl_sn + obj->mpm.Information->ModuelSerial[loop1];
			lbl_version = lbl_version  + obj->mpm.Information->ModuleFW[loop1];
		}
	}	
	lbl_types = (char*)(void*)Marshal::StringToHGlobalAnsi(lbl_type);   // Module type //模块类型 
	lbl_sns = (char*)(void*)Marshal::StringToHGlobalAnsi(lbl_sn);   // Module type //模块类型 
	lbl_versions = (char*)(void*)Marshal::StringToHGlobalAnsi(lbl_version);   // Module type //模块类型 
}
extern "C" __declspec(dllexport) void MPM_DisConnect()
{
	//-------------------------------------------------------
	//       Disconnect
	//       断开连接
	//--------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;

	errorcode = obj->mpm.DisConnect();

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
	//// -----Clear Information
	//// -----清除信息
	//lblproduct->Text = "";
	//lblserial->Text = "";
	//lblversion->Text = "";
	//lblmodulecount->Text = "";

	//int loop1;

	//for (loop1 = 0; loop1 <= 4; loop1++)
	//{
	//	lbl_sn[loop1]->Text = "";
	//	lbl_type[loop1]->Text = "";
	//	lbl_version[loop1]->Text = "";
	//}

	//// ----Tab page show
	//// ----页签显示
	//TabPage3->Enabled = true;
	//TabPage4->Enabled = true;

}

extern "C" __declspec(dllexport) void MPM_SetRangeMode(char* cmbset_rangemode)
{
	//-------------------------------------------------------
	//       Disconnect
	//       断开连接
	//--------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;
	MPM::READ_Range_Mode range_mode;
	if (gcnew String(cmbset_rangemode) == "Auto")
	{
		// Auto Range
		// 自动调整范围
		range_mode = MPM::READ_Range_Mode::Auto;
		//txtsetrange->Enabled = false;
		//txte_range->Enabled = false;
		//txtr_slot->Enabled = false;
		//txtr_ch->Enabled = false;
	}
	else
	{
		// Manual range
		// 手动调整范围
		range_mode = MPM::READ_Range_Mode::Manual;
		//txtsetrange->Enabled = true;
		//txte_range->Enabled = true;
		//txtr_slot->Enabled = true;
		//txtr_ch->Enabled = true;
	}

	errorcode = obj->mpm.Set_READ_Range_Mode(range_mode);     // set Range mode for all slot //设置所有模块的范围模式

	if (errorcode != 0)
		Show_Error(errorcode);
}
extern "C" __declspec(dllexport) void MPM_SetWavelength(char* txtsetwave)
{
	//-------------------------------------------------------
	// Set Wavelength(nm)
	// 设置波长(nm)
	//--------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;
	double wavelength;
	wavelength = double::Parse(gcnew String(txtsetwave));

	errorcode = obj->mpm.Set_Wavelength(wavelength);    

	if (errorcode != 0)
		Show_Error(errorcode);
}
extern "C" __declspec(dllexport) void MPM_SetAveraging(char* txtsetavg)
{
	// ------------------------------------------------------------------
	// Set Averaging Time(mse)
	// MPM can set 0.01msec～10000msec
	// 设置平均时间(mse)
	// MPM可设置0.01 ~10000msec
	//--------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;
	double ave_time;
	ave_time = double::Parse(gcnew String(txtsetavg));

	errorcode = obj->mpm.Set_Averaging_Time(ave_time);   

	if (errorcode != 0)
		Show_Error(errorcode);
}
extern "C" __declspec(dllexport) void MPM_SetRangeAll(char* txtsetrange)
{
	// ------------------------------------------------------------------
	// Set range for munal range
	// MPM-211/212 : 1～5 MPM213 : 1～4　　MPM215 : Nothing　　
	// 设置munal范围
	// mpm -211: 1~5 MPM213: 1~4 MPM215:无
	//--------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;
	int range;
	range = int::Parse(gcnew String(txtsetrange));

	errorcode = obj->mpm.Set_Range(range);

	if (errorcode != 0)
		Show_Error(errorcode);
}
extern "C" __declspec(dllexport) void MPM_SetUnit(char* cmbunit)
{
	// ------------------------------------------------------------------
	// Set Power unit
	// 设置功率单位
	//--------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;
	MPM::Power_Unit unit;

	if (gcnew String(cmbunit) == "dBm")
		unit = MPM::Power_Unit::dBm;
	else
		unit = MPM::Power_Unit::mA;


	errorcode = obj->mpm.Set_Unit(unit);

	if (errorcode != 0)
		Show_Error(errorcode);
}
extern "C" __declspec(dllexport) void MPM_SetSlot(char* txtr_slot, char* txtr_ch, char* txte_range)
{
	// ------------------------------------------------------------------
	// Set Range for each ch
	// 为每个通道设置范围
	//--------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int slot;
	int ch;
	int errorcode;
	int range;
	// Slot number 0 ～4//槽位号0 ~4
	slot = int::Parse(gcnew String(txtr_slot)); 
	ch = int::Parse(gcnew String(txtr_ch));
	range = int::Parse(gcnew String(txte_range));

	errorcode = obj->mpm.Set_Range_Each_Channel(slot, ch, range);

	if (errorcode != 0)
		Show_Error(errorcode);
}
extern "C" __declspec(dllexport) void MPM_Get(char* &txtgetrmode, char* &txtgetrang, char* &txtget_wave, char* &txtget_avg, char* &txtget_unit)
{
	// ------------------------------------------------------------------
	// Get normal function parameter
	// 获取正常模式的函数参数
	//--------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	MPM::READ_Range_Mode rangemode;
	int range;
	double wavelength;
	double averaging_time;
	int errorcode;
	MPM::Power_Unit unit;

	// ---get "READ"range mode
	// ---获取Range模式
	errorcode = obj->mpm.Get_READ_Range_Mode(rangemode);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	if (rangemode == MPM::READ_Range_Mode::Auto)
		txtgetrmode = "Auto";
	else
		txtgetrmode = "Manual";

	// -----get setting range for all slot
	// -----获取所有槽位的设置范围
	errorcode = obj->mpm.Get_Range(range);
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	txtgetrang = (char*)(void*)Marshal::StringToHGlobalAnsi(range.ToString());

	// ---get setting wavelength(nm)
	// ---获取设置波长
	errorcode = obj->mpm.Get_Wavelength(wavelength);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	txtget_wave = (char*)(void*)Marshal::StringToHGlobalAnsi(wavelength.ToString());

	// ---get setting averaging time(msec)
	// ---获取设置平均时间
	errorcode = obj->mpm.Get_Averaging_Time(averaging_time);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	txtget_avg= (char*)(void*)Marshal::StringToHGlobalAnsi(averaging_time.ToString());

	// ----get setting unit
	// ----获取设置单位
	errorcode = obj->mpm.Get_Unit(unit);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	if (unit == MPM::Power_Unit::dBm | unit == MPM::Power_Unit::dBmA)
		txtget_unit = "dBm";
	else
		txtget_unit = "mW";
}
extern "C" __declspec(dllexport) void MPM_GetSlot_Ch_Range(char* txtget_rangeslot, char* txtget_rangech, char* &txtget_erange)
{
	// ------------------------------------------------------------------
	// Get Range for each ch
	// 获取每个通道的范围
	// ----------------------------------------------------------
	int slot;                 // Slot 0～
	int ch;                   // Ch 1～
	int range;
	int errorcode = 0;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	slot = int::Parse(gcnew String(txtget_rangeslot));   // Slot 0～
	ch = int::Parse(gcnew String(txtget_rangech));

	errorcode = obj->mpm.Get_Range_Each_Channel(slot, ch, range);
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	txtget_erange = (char*)(void*)Marshal::StringToHGlobalAnsi(range.ToString());
}

extern "C" __declspec(dllexport) void MPM_GetSlot_Ch_Power(char* txtread_slot, char* txtread_ch, char* &txt_readp_ch)
{
	// -----------------------------------------------------------
	// Read Power for each ch
	// 读取每个通道的功率
	// -----------------------------------------------------------
	int slot;                         // Slot 0 ～4//槽位号0 ~4
	int ch;                           // ch 1～4 // 通道 1 ~ 4
	double power;
	int errorcode;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	slot = int::Parse(gcnew String(txtread_slot));   // Slot 0～
	ch = int::Parse(gcnew String(txtread_ch));

	errorcode = obj->mpm.Get_READ_Power_Channel(slot, ch,  power);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
	txt_readp_ch = (char*)(void*)Marshal::StringToHGlobalAnsi(power.ToString());

}
extern "C" __declspec(dllexport) void MPM_GetSlot_Power(char* txtread_slotall,  char* &txtreadp_all)
{
	// ------------------------------------------------------------------
	// Read Power for Slot
	// 读取槽位功率
	// ----------------------------------------------------------
	int slot;                 // Slot 0～
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	cli::array<System::Double>^power = nullptr;

	int errorcode;
	int loop1;
	String^ pow_string = String::Empty;

	slot = int::Parse(gcnew String(txtread_slotall));   // Slot 0～

	errorcode = obj->mpm.Get_READ_Power_for_Module(slot, power);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	for (loop1 = 0; loop1 <= power->GetUpperBound(0); loop1++)
	{
		if (loop1 == 0)
			pow_string = Convert::ToString(power[loop1]);
		else
			pow_string = pow_string + "," + Convert::ToString(power[loop1]);
	}

	txtreadp_all = (char*)(void*)Marshal::StringToHGlobalAnsi(pow_string);
}
extern "C" __declspec(dllexport) void MPM_Zeroing()
{
	// ------------------------------------------------------------------
	// Zeroing function
	// 归零功能
	// -----------------------------------------------------
	int errorcode;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	errorcode = obj->mpm.Zeroing();

	if (errorcode != 0)
		Show_Error(errorcode);
}

extern "C" __declspec(dllexport) void MPM_GetWavelength(char* txtwave_slot, char* txtwave_ch, char* filepath)
{
	// ------------------------------------------------------------------
	// Get Wavelength Sencitvity data for each ch
	// 获取每个通道的波长灵敏度数据
	// -----------------------------------------------------
	int slot;
	int ch;
	cli::array<float>^sence_data = nullptr;
	cli::array<System::Double>^wave_data = nullptr;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;

	slot = int::Parse(gcnew String(txtwave_slot));   // Slot 0～
	ch = int::Parse(gcnew String(txtwave_ch));

	errorcode = obj->mpm.Get_Wavelength_Senctivity_Data(slot, ch, wave_data, sence_data);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
	System::IO::StreamWriter^ writer;          // writer

	writer = gcnew System::IO::StreamWriter(gcnew String(filepath));

	writer->WriteLine("Wavelength,Senctivity");

	for (int loop1 = 0; loop1 <= wave_data->GetUpperBound(0); loop1++)
		writer->WriteLine(Convert::ToString(wave_data[loop1]) + "," + Convert::ToString(sence_data[loop1]));

	writer->Close();
}

extern "C" __declspec(dllexport) void MPM_GetError( char* &txtsyst_error)
{
	// ------------------------------------------------------------------
	// Get MPM System Error
	// 获取MPM系统错误
	// ----------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	String^ error_string = String::Empty;
	int errorcode;

	errorcode = obj->mpm.Get_System_Error(error_string);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
	txtsyst_error = (char*)(void*)Marshal::StringToHGlobalAnsi(error_string);
}
extern "C" __declspec(dllexport) void MPM_GetIP(char* &txtipaddress)
{
	// ------------------------------------------------------------------
	// Get MPM IP Address
	// 获取MPM IP地址
	// ----------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	String^ ip = String::Empty;
	int errorcode;

	errorcode = obj->mpm.Get_IPAddress(ip);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
	txtipaddress = (char*)(void*)Marshal::StringToHGlobalAnsi(ip);
}

extern "C" __declspec(dllexport) void MPM_GetPort(char* &txtlan_port)
{
	// ------------------------------------------------------------------
	// Get MPM LAN Port number
	// 获取MPM LAN端口号
	// ----------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int port;
	int errorcode;

	errorcode = obj->mpm.Get_LAN_Portnumber(port);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	txtlan_port = (char*)(void*)Marshal::StringToHGlobalAnsi(port.ToString());
}
extern "C" __declspec(dllexport) void MPM_SetConst(char* cmbcon_rangemode, char* txtcon_ave, char* txtcon_point, char* txtcon_wave,  char* txtcon_range)
{
	// ------------------------------------------------------------------
	// Set Const Mode parameter
	// 设置Const模式参数
	// ----------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	double ave;                                   // Averaging time(msec) //平均时间(毫秒)
	int point;                                // number of logging point //测试数据点个数
	double wave;                                  // wavelength(nm)//波长(nm)
	MPM::Trigger_Input_Mode trigger_input_mode;    // trigger input mode     //触发输入模式
	MPM::Measurement_Mode logg_mode;               // Logging mode  / /测试模式
	int errorcode;                            // errorcode / /错误代码
	int range;                                // Range

	// -----1.Setting for logging mode 
	// -----1.测试模式设置
	if (gcnew String(cmbcon_rangemode) == "Auto")
		// Auto range mode
		logg_mode = MPM::Measurement_Mode::AutoRangeConstant;
	else
		// manual range mode 
		logg_mode = MPM::Measurement_Mode::ManualRangeConstant;

	errorcode = obj->mpm.Set_Mode(logg_mode);
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	// -----2.Setting for averaging time (msec)
	// -----2.设置平均时间(msec)
	ave = double::Parse(gcnew String(txtcon_ave));

	errorcode = obj->mpm.Set_Averaging_Time(ave);
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	// -----3. Setting for logging number of point 
	// -----3. 设置测试点数
	point = int::Parse(gcnew String(txtcon_point));

	errorcode = obj->mpm.Set_Logging_Data_Point(point);
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	// ----4. Setting for wavelength(nm)
	// ----4. 设置波长(nm)
	wave = int::Parse(gcnew String(txtcon_wave));
	errorcode = obj->mpm.Set_Wavelength(wave);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	// ----5. Setting for range(Manual range mode )
	// ----5. 范围设置(手动范围模式)
	MPM::READ_Range_Mode rangemode;
	obj->mpm.Get_READ_Range_Mode(rangemode);
	if (rangemode == MPM::READ_Range_Mode::Manual)
	{
		range = int::Parse(gcnew String(txtcon_range));

		errorcode = obj->mpm.Set_Range(range);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}
	}

	// ----6. Setting for trigger input mode
	// ----6. 触发输入模式设置
	errorcode = obj->mpm.Set_Trigger_Input_Mode(MPM::Trigger_Input_Mode::Extarnal);
	if (errorcode != 0)
		Show_Error(errorcode);
}
extern "C" __declspec(dllexport) void MPM_SetSweep(char* cmbsm_rangemode, char* txtstartwave, char* txtstopwave, char* txtwavestep, char* txtspeed, char* txtsm_range)
{
	// ------------------------------------------------------------------
	// Set Sweep mode parameter
	// 设置扫描模式参数
	// ----------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	MPM::Measurement_Mode logg_mode;           // logging mode/ /测试模式
	double startwave;                         // start wavelength(nm) //开始波长(nm)
	double stopwave;                          // stop wavelength(nm) //停止波长(nm)
	double wavestep;                          // wavelength step(nm) //步进波长(nm)
	double speed;                             // sweep speed(nm/sec) //扫描速度(nm /秒)
	int range;                            // power range //功率范围
	int errorcode;                        // errorcode / /错误代码
	// -----1.Setting for logging mode 
	// -----1.测试模式设置
	if (gcnew String(cmbsm_rangemode) == "Auto")
		// Auto range mode
		logg_mode = MPM::Measurement_Mode::AutoRangeSweep;
	else
		// manual range mode 
		logg_mode = MPM::Measurement_Mode::ManualRangeSweep;

	errorcode = obj->mpm.Set_Mode(logg_mode);
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	// ---2.Setting for Trigger input mode to Extarnal
	// Sweep mode cant' use internal trigger mode
	// ---2.设置触发输入模式为外部触发
	// 扫描模式不能使用内部触发模式
	// -------------------------------------------------
	errorcode = obj->mpm.Set_Trigger_Input_Mode(MPM::Trigger_Input_Mode::Extarnal);
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	// ---3. Setting for wavelength parameter
	// ---3. 波长参数设置
	startwave = double::Parse(gcnew String(txtstartwave));
	stopwave = double::Parse(gcnew String(txtstopwave));
	wavestep = double::Parse(gcnew String(txtwavestep));

	errorcode = obj->mpm.Set_Sweep_Wavelength(startwave, stopwave, wavestep);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	// ----4. Setting for sweep speed 
	// ----4. 扫描速度设置
	speed = double::Parse(gcnew String(txtspeed));

	errorcode = obj->mpm.Set_Sweep_Speed(speed);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	// ----5. Setting for Range with Maunal range
	// ----5. 设置rang范围

	if (gcnew String(cmbsm_rangemode) == "Manual")
	{
		range = int::Parse(gcnew String(txtsm_range));
		errorcode = obj->mpm.Set_Range(range);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}
	}
}
extern "C" __declspec(dllexport) void MPM_SetFreerun(char* txtfr_range, char* txtfr_ave, char* txtfr_point, char* txtfr_wave, char* cmbfr_tin_mode)
{
	// ------------------------------------------------------------------
	// Set Freerun mode parameter
	// 设置Freerun模式参数
	// ----------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	double ave;                           // averaging time(msec)/ /平均时间(毫秒)
	int point;                        // number of sampling point //采样点个数
	MPM::Measurement_Mode logg_mode;       // logging mode / /测试模式
	double wave;                          // Wavelength(nm)/ /波长(nm)
	int range;                        // range
	int errorcode;                    // errorcode / /错误代码
	MPM::Trigger_Input_Mode t_inmode;      // Trigger input mode//触发输入模式
	// ----1. Setting for logging mode
	// Freerun can set only manual range mode
	// ----1. 测试模式设置
	// Freerun只能设置手动范围模式

	logg_mode = MPM::Measurement_Mode::Freerun;

	errorcode = obj->mpm.Set_Mode(logg_mode);
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	// ----2.Setting for  Range
	// ----2.设置Range
	range = int::Parse(gcnew String(txtfr_range));

	errorcode = obj->mpm.Set_Range(range);
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	// ----3.Setting for averaging time 
	// ----3.平均时间设置
	ave = double::Parse(gcnew String(txtfr_ave));
	errorcode = obj->mpm.Set_Averaging_Time(ave);
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	// ---4.Setting for number of logging point 
	// ---4.设置测试点的数量
	point = int::Parse(gcnew String(txtfr_point));

	errorcode = obj->mpm.Set_Logging_Data_Point(point);
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	// ---5.Setting for wavelength
	// ---5.设置波长
	wave = double::Parse(gcnew String(txtfr_wave));

	errorcode = obj->mpm.Set_Wavelength(wave);
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	// ----6.setting for trigger input mode
	// ----6.触发输入模式设置
	if (gcnew String(cmbfr_tin_mode) == "Internal")
		t_inmode = MPM::Trigger_Input_Mode::Internal;
	else
		t_inmode = MPM::Trigger_Input_Mode::Extarnal;

	errorcode = obj->mpm.Set_Trigger_Input_Mode(t_inmode);
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
}
extern "C" __declspec(dllexport) void MPM_Start()
{
	// ------------------------------------------------------------------
	// Logging Start
	// 测试开始
	// -----------------------------------------------------
	int errorcode;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	errorcode = obj->mpm.Logging_Start();

	if (errorcode != 0)
		Show_Error(errorcode);
}
extern "C" __declspec(dllexport) void MPM_Status(char* &txtlog_status)
{
	// ------------------------------------------------------------------
	// Get logging status
	// 获取测试状态
	// -----------------------------------------------------
	int errorcode;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int status;                   // logging status  0: not completed 1: completed -1: stopped //测试状态 0:未完成。1:已完成 -1:停止
	int count;                    // finished count of logging //完成测试计数

	errorcode = obj->mpm.Get_Logging_Status(status, count);

	if (errorcode != 0)
		Show_Error(errorcode);

	txtlog_status = (char*)(void*)Marshal::StringToHGlobalAnsi(Convert::ToString(status) + "," + Convert::ToString(count));

}
extern "C" __declspec(dllexport) void MPM_Stop()
{
	// ------------------------------------------------------------------
	// logging stop
	// 测试停止
	// -----------------------------------------------------
	int errorcode;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	errorcode = obj->mpm.Logging_Stop();

	if (errorcode != 0)
		Show_Error(errorcode);
}
extern "C" __declspec(dllexport) void MPM_GetchLogging(char* txtlog_slot, char* txtlog_ch, char* filepath)
{
	// ------------------------------------------------------------------
	// Get Logging data
	// 获取日志数据
	// -----------------------------------------------------
	int errorcode;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int slot;                         // Slot 0～
	int ch;                           // ch　1～
	cli::array<float>^logdata = nullptr;   // logging data/ /日志数据
	slot = int::Parse(gcnew String(txtlog_slot));
	ch = int::Parse(gcnew String(txtlog_ch));

	errorcode = obj->mpm.Get_Each_Channel_Logdata(slot, ch, logdata);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	// ----Save data for csv file
	// ----保存数据为csv文件
	System::IO::StreamWriter^ writer;
	int loop1;

	writer = gcnew System::IO::StreamWriter(gcnew String(filepath));

	for (loop1 = 0; loop1 <= logdata->GetUpperBound(0); loop1++)
		writer->WriteLine(logdata[loop1]);

	writer->Close();
}
extern "C" __declspec(dllexport) void MPM_GetSlotLogging(char* txte_slot, char* filepath)
{
	// ------------------------------------------------------------------
	// Get Logging data for slot
	// 获取模块的日志数据
	// -----------------------------------------------------
	int errorcode;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int slot;                         // Slot 0～
	cli::array<float, 2>^logdata = nullptr;
	slot = int::Parse(gcnew String(txte_slot));

	errorcode = obj->mpm.Get_Each_Module_Loggdata(slot, logdata);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	// ----Save data for csv file
	// ----保存数据为csv文件
	System::IO::StreamWriter^ writer;
	int numberofch;                           // number of channel//通道数
	int loop1;
	int loop2;
	String^ write_st = String::Empty;

	numberofch = logdata->GetLength(0) - 1;
	writer = gcnew System::IO::StreamWriter(gcnew String(filepath), false, System::Text::Encoding::GetEncoding("Shift-jis"));

	// heddre write
	for (loop1 = 0; loop1 <= numberofch; loop1++)
		write_st = write_st + ",Ch" + System::Convert::ToString(loop1 + 1);

	writer->WriteLine(write_st);

	for (loop1 = 0; loop1 <= logdata->GetLength(1) - 1; loop1++)
	{
		write_st = System::Convert::ToString(loop1 + 1);
		for (loop2 = 0; loop2 <= numberofch; loop2++)

			write_st = write_st + "," + System::Convert::ToString(logdata[loop2, loop1]);

		writer->WriteLine(write_st);
	}

	writer->Close();
}
extern "C" __declspec(dllexport) void MPM_GetParameter(char* &txtg_rangemode, char* &txtlog_mode, char* &txtg_ave, char* &txtg_point, char* &txtg_wavelength, char* &txtg_tinmode, char* &txtg_settingrange, char* &txtg_statwave, char* &txtg_stopwave, char* &txtg_stepwave, char* &txtg_speed)
{
	// ------------------------------------------------------------------
	// Get Logging mode parameter
	// 获取测试模式参数
	// -----------------------------------------------------
	int errorcode;
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	MPM::Measurement_Mode logmode;

	// --Get logging mode
	// --获取测试模式
	errorcode = obj->mpm.Get_Mode(logmode);
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	if (logmode == MPM::Measurement_Mode::AutoRangeConstant)
	{
		txtg_rangemode = "Auto";
		txtlog_mode= "Const2";
	}
	else if (logmode == MPM::Measurement_Mode::ManualRangeConstant)
	{
		txtg_rangemode = "Manual";
		txtlog_mode = "Const1";
	}
	else if (logmode == MPM::Measurement_Mode::AutoRangeSweep)
	{
		txtg_rangemode = "Auto";
		txtlog_mode = "Sweep2";
	}
	else if (logmode == MPM::Measurement_Mode::ManualRangeSweep)
	{
		txtlog_mode= "Sweep1";
		txtg_rangemode = "Manual";
	}
	else
	{
		txtlog_mode= "Freerun";
		txtg_rangemode = "Manual";
	}

	// ----Get averaging time(msec)
	// ----获取平均时间(msec)
	double ave;

	errorcode = obj->mpm.Get_Averaging_Time(ave);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	txtg_ave = (char*)(void*)Marshal::StringToHGlobalAnsi(ave.ToString());
	String^ log_mode = gcnew String(txtlog_mode);
	if (log_mode->IndexOf("Sweep") != -1)
		// if WMOD is Sweep , Get_Averaging_Time function is not available.
		//如果WMOD是Sweep, Get_Averaging_Time函数不可用。
		txtg_ave = "";

	// ----Get logging nubmer of point 
	// ----获取测试点数
	int point;

	errorcode = obj->mpm.Get_Logging_Data_Point(point);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	txtg_point = (char*)(void*)Marshal::StringToHGlobalAnsi(point.ToString());

	// ---Get Wavelength            
	// ---获取波长
	double wave;    // wavelength(nm)

	errorcode = obj->mpm.Get_Wavelength(wave);
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	txtg_wavelength = (char*)(void*)Marshal::StringToHGlobalAnsi(wave.ToString());

	// ----Get Trigger input mode 
	// ----获取触发器输入模式
	MPM::Trigger_Input_Mode inputmode;

	errorcode = obj->mpm.Get_Trigger_Input_Mode(inputmode);
	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}

	if (inputmode == MPM::Trigger_Input_Mode::Extarnal)
		txtg_tinmode = "Extarnal";
	else
		txtg_tinmode= "Internal";

	// ----Get Setting range 
	// ----获取设置rane
	if (txtg_rangemode == "Manual")
	{
		int range;
		errorcode = obj->mpm.Get_Range(range);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtg_settingrange  = (char*)(void*)Marshal::StringToHGlobalAnsi(range.ToString());
	}
	else
		txtg_settingrange  = "";

	// -----Sweep mode parameter 
	// -----扫描模式参数
	if (log_mode->IndexOf("Sweep") > -1)
	{
		double startwave;             // startwave (nm)
		double stopwave;               // stopwave(nm)
		double wavestep;               // wavelength step(nm)
		double speed;                  // sweep speed(nm/sec)

									   // wavelength parameter
									   // 波长参数
		errorcode = obj->mpm.Get_Sweep_Wavelength(startwave, stopwave, wavestep);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtg_statwave  = (char*)(void*)Marshal::StringToHGlobalAnsi(startwave.ToString());
		txtg_stopwave  = (char*)(void*)Marshal::StringToHGlobalAnsi(stopwave.ToString());
		txtg_stepwave  = (char*)(void*)Marshal::StringToHGlobalAnsi(wavestep.ToString());

		// sweep speed
		// 扫描速度
		errorcode = obj->mpm.Get_Sweep_Speed(speed);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtg_speed  = (char*)(void*)Marshal::StringToHGlobalAnsi(speed.ToString());
	}
	else
	{
		txtg_statwave = ""; 
		txtg_stopwave = "";
		txtg_stepwave = "";
		txtg_speed = "";

	}
}
extern "C" __declspec(dllexport) void PCU_Connect(char* &Informations, char*txtaddress, char* Board, bool rdiUSB, bool rdoLAN, char* txtPort, bool rdikysightvisa, bool rdiNI488, bool rdiCr, bool rdiLf,char* txt100controlid,bool rdo100)
{
	// --------------------------------------------------------
	// connect
	// 连接
	// --------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();

	String^ address = gcnew String(txtaddress);
	String^ port = String::Empty;
	Communication::GPIBConnectType gpib_type;
	Communication::CommunicationMethod com_method;

	if (rdiUSB == true)
	{
		// USB Communication
		// USB通信
		com_method = Santec::Communication::CommunicationMethod::USB;
		obj->pcu.DeviceID = UInt32::Parse(gcnew String(address));
		obj->pcu.TimeOut = 5000;

	}
	else if (rdoLAN == true)
	{
		// LAN Communication
		// LAN 通信
		com_method = Santec::Communication::CommunicationMethod::TCPIP;
		obj->pcu.Port = int::Parse(gcnew String(txtPort));
		obj->pcu.IPAddress = gcnew String(address);
		obj->pcu.Waittime = 20;
	}

	else
	{
		// GPIB Communication
		// GPIB通信
		com_method = Santec::Communication::CommunicationMethod::GPIB;

		Santec::Communication::GPIBConnectType gpibmethod;
		if (rdikysightvisa == true)
			gpib_type = Santec::Communication::GPIBConnectType::KeysightIO;
		else if (rdiNI488 == true)
			gpib_type = Santec::Communication::GPIBConnectType::NI4882;
		else
			gpib_type = Santec::Communication::GPIBConnectType::NIVisa;

		obj->pcu.GPIBAddress = System::Convert::ToInt32(address);
		obj->pcu.GPIBBoard = int::Parse(gcnew String(Board));;
	}

	// ----------------Common
	// ---------------- 常见的
	// Terminator
	// 终止符
	CommunicationTerminator terminator;
	if (rdo100 == true)
		// ---Target PCU-100
		// ---目标 PCU-100
		obj->pcu.DeviceName = gcnew String(txt100controlid);

	if (rdiCr == true)
		terminator = Santec::CommunicationTerminator::Cr;
	else if (rdiLf == true)
		terminator = Santec::CommunicationTerminator::Lf;
	else
		terminator = Santec::CommunicationTerminator::CrLf;

	obj->pcu.Terminator = terminator;


	String^ ans;
	int errorcode;

	errorcode = obj->pcu.Connect(com_method);

	if (errorcode != 0)
	{
		obj->tsl.DisConnect();
		Show_Error(errorcode);
		return;
	}
	// --PCU information
	// --PCU信息
	String^ Information = "";
	Information = obj->pcu.Information->ProductName + ",";
	Information = Information + obj->pcu.Information->SerialNumber + ",";
	Information = Information + obj->pcu.Information->FWversion + ",";
	Information = Information + obj->pcu.Information->Band;
	Informations = (char*)(void*)Marshal::StringToHGlobalAnsi(Information);
}
extern "C" __declspec(dllexport) void PCU_DisConnect()
{
	//-------------------------------------------------------
	//       Disconnect
	//       断开连接
	//--------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;

	errorcode = obj->pcu.DisConnect();

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
}

extern "C" __declspec(dllexport) void PCU_Set_SOP(char* cmbsop)
{
	//-------------------------------------------------------
	// Set SOP
	// 设置SOP
	//--------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;
	PCU::SOP_Stauts sop_stauts;
	String ^sop = gcnew String(cmbsop);

	if (sop == "")
	{
		MessageBox(GetForegroundWindow(), "Please enter the value.", _T("prompt message"), MB_OK);
		return;
	}
	if (sop == "LVP")
	{
		sop_stauts = PCU::SOP_Stauts::LVP;

	}
	else if (sop == "LHP")
	{
		sop_stauts = PCU::SOP_Stauts::LHP;

	}
	else if (sop == "LP45")
	{
		sop_stauts = PCU::SOP_Stauts::LP45;

	}
	else if (sop == "LN45")
	{
		sop_stauts = PCU::SOP_Stauts::LN45;

	}
	else if (sop == "RCP")
	{
		sop_stauts = PCU::SOP_Stauts::RCP;

	}
	else if (sop == "LCP")
	{
		sop_stauts = PCU::SOP_Stauts::LCP;
	}
	errorcode = obj->pcu.Set_SOP_Stauts(sop_stauts);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
}
extern "C" __declspec(dllexport) void PCU_Adjust_Range()
{
	//-------------------------------------------------------
	//  Power monitor Range adjust
	//  功率监控范围调整
	//--------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;

	errorcode = obj->pcu.Range_Adjust();

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
}
extern "C" __declspec(dllexport) void PCU_Get_Range(char* &txtcurrentrange)
{
	//-------------------------------------------------------
	//  Get Current Range
	//  获取当前范围
	//--------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;
	int range;

	errorcode = obj->pcu.Get_Power_Range(range);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
	txtcurrentrange= (char*)(void*)Marshal::StringToHGlobalAnsi(range.ToString());
}
extern "C" __declspec(dllexport) void PCU_Get_IP(char* &txtip_add)
{
	//-------------------------------------------------------
	// Get IP Address
	// this function only support for PCU-110
	// 获取IP地址
	// 这个功能只支持PCU-110
	//--------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;
	String^ address = String::Empty;

	errorcode = obj->pcu.Get_IPAddress(address);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
	txtip_add = (char*)(void*)Marshal::StringToHGlobalAnsi(address);
}
extern "C" __declspec(dllexport) void PCU_Get_Port(char* &txtlan_port)
{
	//-------------------------------------------------------
	// Get IP Address
	// this function only support for PCU-110
	// 获取IP地址
	// 这个功能只支持PCU-110
	//--------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;
	int port;

	errorcode = obj->pcu.Get_LAN_Portnumber(port);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
	txtlan_port = (char*)(void*)Marshal::StringToHGlobalAnsi(port.ToString());
}
extern "C" __declspec(dllexport) void  OSU_Load(char* &Str, char* &IDStr)
{
	// ------------------------------------------------------
	// Get usb resouce
	// 获取usb资源
	// ------------------------------------------------------
	cli::array<String^> ^usb_resource;
	String^ returnStr = "";
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	usb_resource = Santec::Communication::MainCommunication::Get_USB_Resouce();
	for (int i = 0; i < usb_resource->Length; i++) {

		if (i != 0)
			returnStr = returnStr + "," + usb_resource->GetValue(i);
		else
			returnStr = returnStr + usb_resource->GetValue(i);
	}
	Str = (char*)(void*)Marshal::StringToHGlobalAnsi(returnStr);
	cli::array<String^> ^dev;
	returnStr = "";
	int errorcord = obj->spu->Get_Device_ID(dev);

	if (errorcord != 0)
	{
		Show_Error(errorcord);
		return;
	}
	for (int i = 0; i < dev->Length; i++) {

		if (i != 0)
			returnStr = returnStr + "," + dev->GetValue(i);
		else
			returnStr = returnStr + dev->GetValue(i);
	}
	IDStr = (char*)(void*)Marshal::StringToHGlobalAnsi(returnStr);
}

extern "C" __declspec(dllexport) void OSU_Connect(char* cmbdevname, char*txtaddress, bool rdiUSB, bool rdoLAN, char* txtPort, bool rdikysightvisa, bool rdiNI488, char* cmbosu_usb, bool rdo110)
{
	// --------------------------------------------------------
	// Connect to OSU
	// 连接
	// --------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	Santec::Communication::CommunicationMethod comm_method;

	String^ address = gcnew String(txtaddress);
	String^ osu_dev = String::Empty;                // osu control device
	String^ ans = String::Empty;                    // answer for the device
	int errorcord;

	if (rdo110)
	{
		// OSU-110

		obj->osu->Terminator = CommunicationTerminator::Cr;

		if (rdiUSB== true)
		{
			// ' USB Communication
			// ' USB 通信

			if (gcnew String(cmbosu_usb) == "")
			{
				MessageBox(GetForegroundWindow(), "Please enter to the OSU USB Resource", _T("prompt message"), MB_OK);
				return;
			}

			comm_method = Santec::Communication::CommunicationMethod::USB;
			obj->osu->DeviceID = System::Convert::ToUInt32(cmbosu_usb);
		}
		else if (rdoLAN == true)
		{

			// LAN Communication
			// LAN 通信
			comm_method = Santec::Communication::CommunicationMethod::TCPIP;
			obj->osu->Port = int::Parse(gcnew String(txtPort));
			obj->osu->IPAddress =address;
		}
		else
		{
			// ' GPIB Communication
			// ' GPIB通信
			comm_method = Santec::Communication::CommunicationMethod::GPIB;

			Santec::Communication::GPIBConnectType gpibmethod;
			if (rdikysightvisa == true)
				gpibmethod = Santec::Communication::GPIBConnectType::KeysightIO;
			else if (rdiNI488 == true)
				gpibmethod = Santec::Communication::GPIBConnectType::NI4882;
			else
				gpibmethod = Santec::Communication::GPIBConnectType::NIVisa;

			obj->osu->GPIBAddress = System::Convert::ToInt32(address);
			obj->osu->GPIBBoard = 0;
			obj->osu->GPIBConnectType = gpibmethod;
		}

		errorcord = obj->osu->Connect(comm_method);
	}
	else
	{
		// OSU-100
		String^ devname = gcnew String(cmbdevname);
		if (devname == "")
		{
			MessageBox(GetForegroundWindow(), "Please enter to the OSU device Resource", _T("prompt message"), MB_OK);
			return;
		}

		obj->osu->DeviceName = devname;
		errorcord = obj->osu->Connect();
	}

	if (errorcord != 0)
	{
		Show_Error(errorcord);
		return;
	}
}
extern "C" __declspec(dllexport) void OSU_DisConnect()
{
	//-------------------------------------------------------
	//       Disconnect
	//       断开连接
	//--------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcode;

	errorcode = obj->osu->DisConnect();

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
}
extern "C" __declspec(dllexport) void OSU_Set_Switch(char* cmbch)
{
	//-------------------------------------------------------
	// switch for  OSU ch
	//--------------------------------------------------------
	librayForMFCInstrument::Class1 ^obj = librayForMFCInstrument::Class1::get_instance();
	int errorcord; // errorcord
	int ch = int();
	String ^cmbchs = gcnew String(cmbch);

	// ---check Combobox text 

	if (cmbchs == "")
	{
		MessageBox(GetForegroundWindow(), "Please enter the osu switch channel number.", _T("prompt message"), MB_OK);

		return;
	}

	if (cmbchs == L"Ch1")
	{
		ch = 1;

	}
	else if (cmbchs == L"Ch2")
	{
		ch = 2;

	}
	else if (cmbchs == L"Ch3")
	{
		ch = 3;

	}
	else if (cmbchs == L"Ch4")
	{
		ch = 4;
	}

	errorcord = obj->osu->Set_Switch(ch);

	if (errorcord != 0)
	{
		Show_Error(errorcord);
		return;
	}
}
