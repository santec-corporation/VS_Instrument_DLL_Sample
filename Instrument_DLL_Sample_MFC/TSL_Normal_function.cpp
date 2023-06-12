// TSL_Normal_function.cpp : 实现文件
//

#include "stdafx.h"
#include "Instrument_DLL_Sample_MFC.h"
#include "TSL_Normal_function.h"
#include "afxdialogex.h"


// TSL_Normal_function 对话框

IMPLEMENT_DYNAMIC(TSL_Normal_function, CDialog)

TSL_Normal_function::TSL_Normal_function(CWnd* pParent /*=NULL*/)
	: CDialog(TSL_Normal_function_Form, pParent)
{

}

TSL_Normal_function::~TSL_Normal_function()
{
}

void TSL_Normal_function::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(TSL_Normal_function, CDialog)
	ON_BN_CLICKED(TSLBtn_SetFrequency, &TSL_Normal_function::OnBnClickedSetfrequency)
	ON_BN_CLICKED(TSLBtnCoh_OFF, &TSL_Normal_function::OnBnClickedCohOff)
	ON_BN_CLICKED(TSLBtnShutter_Open, &TSL_Normal_function::OnBnClickedOpen)
	ON_BN_CLICKED(TSLBtnShutter_Close, &TSL_Normal_function::OnBnClickedClose)
	ON_BN_CLICKED(TSLBtnAPC, &TSL_Normal_function::OnBnClickedBtnapc)
	ON_BN_CLICKED(TSLBtnACC, &TSL_Normal_function::OnBnClickedBtnacc)
	ON_BN_CLICKED(TSLBtndBm, &TSL_Normal_function::OnBnClickedBtndbm)
	ON_BN_CLICKED(TSLBtnmW, &TSL_Normal_function::OnBnClickedBtnmw)
	ON_BN_CLICKED(TSLBtn_SetATT, &TSL_Normal_function::OnBnClickedSetatt)
	ON_BN_CLICKED(TSLBtn_SetdBm, &TSL_Normal_function::OnBnClickedSetdbm)
	ON_BN_CLICKED(TSLBtn_SetmW, &TSL_Normal_function::OnBnClickedSetmw)
	ON_BN_CLICKED(TSLBtn_SetWavelenth, &TSL_Normal_function::OnBnClickedSetwavelenth)
	ON_BN_CLICKED(TSLBtn_SetFinetuning, &TSL_Normal_function::OnBnClickedSetfinetuning)
	ON_BN_CLICKED(TSLBtn_Wavelenth, &TSL_Normal_function::OnBnClickedWavelenth)
	ON_BN_CLICKED(TSLBtn_Frequency, &TSL_Normal_function::OnBnClickedFrequency)
	ON_BN_CLICKED(TSLBtn_Fine, &TSL_Normal_function::OnBnClickedFine)
	ON_BN_CLICKED(TSLBtn_Busy, &TSL_Normal_function::OnBnClickedBusy)
	ON_BN_CLICKED(TSLBtn_Stangby, &TSL_Normal_function::OnBnClickedStangby)
	ON_BN_CLICKED(TSLBtn_error, &TSL_Normal_function::OnBnClickederror)
	ON_BN_CLICKED(TSLbtnGetIP, &TSL_Normal_function::OnBnClickedbtngetip)
	ON_BN_CLICKED(TSLbtnGetPort, &TSL_Normal_function::OnBnClickedbtngetport)
	ON_BN_CLICKED(TSLBtn_GetLD, &TSL_Normal_function::OnBnClickedGetld)
	ON_BN_CLICKED(TSLBtnPower_mode, &TSL_Normal_function::OnBnClickedmode)
	ON_BN_CLICKED(TSLBtnCoh_Status, &TSL_Normal_function::OnBnClickedCohStatus)
	ON_BN_CLICKED(TSLBtnShutter_Status, &TSL_Normal_function::OnBnClickedStatus)
	ON_BN_CLICKED(TSLBtnUnit, &TSL_Normal_function::OnBnClickedBtnunit)
	ON_BN_CLICKED(TSLBtnAtt_value, &TSL_Normal_function::OnBnClickedvalue)
	ON_BN_CLICKED(TSLBtnPower_dBm, &TSL_Normal_function::OnBnClickedPdbm)
	ON_BN_CLICKED(TSLBtnPower_mW, &TSL_Normal_function::OnBnClickedPmw)
	ON_BN_CLICKED(TSLBtnmonitor_dBm, &TSL_Normal_function::OnBnClickeddbm)
	ON_BN_CLICKED(TSLBtnmonitor_mW, &TSL_Normal_function::OnBnClickedmw)
	ON_BN_CLICKED(TSLBtnLD_ON, &TSL_Normal_function::OnBnClickedOn)
	ON_BN_CLICKED(TSLBtnLD_OFF, &TSL_Normal_function::OnBnClickedTSLLDOff)
	ON_BN_CLICKED(TSLBtnCoh_ON, &TSL_Normal_function::OnBnClickedTSLCohOn)
END_MESSAGE_MAP()


// TSL_Normal_function 消息处理程序


void TSL_Normal_function::OnBnClickedCohOff()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)();
		pFunc Func_TSL_Coh_OFF = (pFunc)GetProcAddress(hInst, "TSL_Coh_OFF");
		if (Func_TSL_Coh_OFF)
		{
			Func_TSL_Coh_OFF();
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedOpen()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)();
		pFunc Func_TSL_Shutter_Open = (pFunc)GetProcAddress(hInst, "TSL_Shutter_Open");
		if (Func_TSL_Shutter_Open)
		{
			Func_TSL_Shutter_Open();
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedClose()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)();
		pFunc Func_TSL_Shutter_Close = (pFunc)GetProcAddress(hInst, "TSL_Shutter_Close");
		if (Func_TSL_Shutter_Close)
		{
			Func_TSL_Shutter_Close();
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedBtnapc()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)();
		pFunc Func_TSL_APC = (pFunc)GetProcAddress(hInst, "TSL_APC");
		if (Func_TSL_APC)
		{
			Func_TSL_APC();
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedBtnacc()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)();
		pFunc Func_TSL_ACC = (pFunc)GetProcAddress(hInst, "TSL_ACC");
		if (Func_TSL_ACC)
		{
			Func_TSL_ACC();
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedBtndbm()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)();
		pFunc Func_TSL_dBm = (pFunc)GetProcAddress(hInst, "TSL_dBm");
		if (Func_TSL_dBm)
		{
			Func_TSL_dBm();
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedBtnmw()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)();
		pFunc Func_TSL_mW = (pFunc)GetProcAddress(hInst, "TSL_mW");
		if (Func_TSL_mW)
		{
			Func_TSL_mW();
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedSetatt()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char*);
		pFunc Func_TSL_SetATT = (pFunc)GetProcAddress(hInst, "TSL_SetATT");
		if (Func_TSL_SetATT)
		{
			CString att;
			GetDlgItem(TSLtxtatt)->GetWindowText(att);
			Func_TSL_SetATT((LPSTR)(LPCSTR)att);
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedSetdbm()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char*);
		pFunc Func_TSL_SetdBm = (pFunc)GetProcAddress(hInst, "TSL_SetdBm");
		if (Func_TSL_SetdBm)
		{
			CString pow;
			GetDlgItem(TSLtxtpow)->GetWindowText(pow);
			Func_TSL_SetdBm((LPSTR)(LPCSTR)pow);
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedSetmw()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char*);
		pFunc Func_TSL_SetmW = (pFunc)GetProcAddress(hInst, "TSL_SetmW");
		if (Func_TSL_SetmW)
		{
			CString pow;
			GetDlgItem(TSLtxtpow)->GetWindowText(pow);
			Func_TSL_SetmW((LPSTR)(LPCSTR)pow);
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedSetwavelenth()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char*);
		pFunc Func_TSL_SetWavelenth = (pFunc)GetProcAddress(hInst, "TSL_SetWavelenth");
		if (Func_TSL_SetWavelenth)
		{
			CString wave;
			GetDlgItem(TSLtxtsetwave)->GetWindowText(wave);
			Func_TSL_SetWavelenth((LPSTR)(LPCSTR)wave);
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedSetfrequency()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char*);
		pFunc Func_TSL_SetFrequency = (pFunc)GetProcAddress(hInst, "TSL_SetFrequency");
		if (Func_TSL_SetFrequency)
		{
			CString freq;
			GetDlgItem(TSLtxtsetfreq)->GetWindowText(freq);
			Func_TSL_SetFrequency((LPSTR)(LPCSTR)freq);
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}

}


void TSL_Normal_function::OnBnClickedSetfinetuning()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char*);
		pFunc Func_TSL_SetFinetuning = (pFunc)GetProcAddress(hInst, "TSL_SetFinetuning");
		if (Func_TSL_SetFinetuning)
		{
			CString ftvalue;
			GetDlgItem(TSLtxtsetft)->GetWindowText(ftvalue);
			Func_TSL_SetFinetuning((LPSTR)(LPCSTR)ftvalue);
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedWavelenth()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(double &);
		pFunc Func_TSL_GetWavelength = (pFunc)GetProcAddress(hInst, "TSL_GetWavelength");
		if (Func_TSL_GetWavelength)
		{
			double wavelength;
			Func_TSL_GetWavelength(wavelength);	
			CString str;
			str.Format("%.3f", wavelength);
			GetDlgItem(TSLtxtwave)->SetWindowText(str);
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedFrequency()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(double &);
		pFunc Func_TSL_GetFreuency = (pFunc)GetProcAddress(hInst, "TSL_GetFreuency");
		if (Func_TSL_GetFreuency)
		{
			double frequency;
			Func_TSL_GetFreuency(frequency);
			CString str;
			str.Format("%.3f", frequency);
			GetDlgItem(TSLtxtfreq)->SetWindowText(str);
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedFine()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(double &);
		pFunc Func_TSL_GetFinetuning = (pFunc)GetProcAddress(hInst, "TSL_GetFinetuning");
		if (Func_TSL_GetFinetuning)
		{
			double ftval;
			Func_TSL_GetFinetuning(ftval);
			CString str;
			str.Format("%.3f", ftval);
			GetDlgItem(TSLtxtfine)->SetWindowText(str);
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedBusy()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(bool &);
		pFunc Func_TSL_GetBusy = (pFunc)GetProcAddress(hInst, "TSL_GetBusy");
		if (Func_TSL_GetBusy)
		{
			bool busy;
			Func_TSL_GetBusy(busy);

			if (busy == true)
				GetDlgItem(txtbusy)->SetWindowText("Busy");
			else
				GetDlgItem(txtbusy)->SetWindowText("Standby");
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedStangby()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char*);
		pFunc Func_TSL_Stangby = (pFunc)GetProcAddress(hInst, "TSL_Stangby");
		if (Func_TSL_Stangby)
		{
			CString str;
			GetDlgItem(TSLtxtwait)->GetWindowText(str);

			Func_TSL_Stangby((LPSTR)(LPCSTR)str);

		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickederror()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char* &);
		pFunc Func_TSL_error = (pFunc)GetProcAddress(hInst, "TSL_error");
		if (Func_TSL_error)
		{
			char* error;
			Func_TSL_error(error);
			GetDlgItem(TSLtxttsl_err)->SetWindowText(error);

		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}

void TSL_Normal_function::OnBnClickedbtngetip()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char* &);
		pFunc Func_TSLGet_IP = (pFunc)GetProcAddress(hInst, "TSLGet_IP");
		if (Func_TSLGet_IP)
		{
			char* IP;
			Func_TSLGet_IP(IP);			
			GetDlgItem(TSLtxtip_add)->SetWindowText(IP);

		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedbtngetport()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char*&);
		pFunc Func_TSLGet_Port = (pFunc)GetProcAddress(hInst, "TSLGet_Port");
		if (Func_TSLGet_Port)
		{
			char* port;
			Func_TSLGet_Port(port);
			GetDlgItem(TSLtxtlan_port)->SetWindowText(port);
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedGetld()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(bool &);
		pFunc Func_TSL_GetLD = (pFunc)GetProcAddress(hInst, "TSL_GetLD");
		if (Func_TSL_GetLD)
		{
			bool Status;
			Func_TSL_GetLD(Status);
			if (Status) 
				GetDlgItem(TSLtxtlds)->SetWindowText("ON");
			else
				GetDlgItem(TSLtxtlds)->SetWindowText("OFF");
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedmode()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(bool &);
		pFunc Func_TSL_Power_mode = (pFunc)GetProcAddress(hInst, "TSL_Power_mode");
		if (Func_TSL_Power_mode)
		{
			bool Status;
			Func_TSL_Power_mode(Status);
			if (Status)
				GetDlgItem(TSLtxtpms)->SetWindowText("APC");
			else
				GetDlgItem(TSLtxtpms)->SetWindowText("ACC");
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedCohStatus()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(bool &);
		pFunc Func_TSL_Coh_Status = (pFunc)GetProcAddress(hInst, "TSL_Coh_Status");
		if (Func_TSL_Coh_Status)
		{
			bool Status;
			Func_TSL_Coh_Status(Status);
			if (Status)
				GetDlgItem(TSLtxtcoh)->SetWindowText("OFF");
			else
				GetDlgItem(TSLtxtcoh)->SetWindowText("ON");
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedStatus()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(bool &);
		pFunc Func_TSL_Shutter_Status = (pFunc)GetProcAddress(hInst, "TSL_Shutter_Status");
		if (Func_TSL_Shutter_Status)
		{
			bool Status;
			Func_TSL_Shutter_Status(Status);
			if (Status)
				GetDlgItem(TSLtxtshutter_su)->SetWindowText("Close");
			else
				GetDlgItem(TSLtxtshutter_su)->SetWindowText("Open");
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedBtnunit()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(bool &);
		pFunc Func_TSL_Unit = (pFunc)GetProcAddress(hInst, "TSL_Unit");
		if (Func_TSL_Unit)
		{
			bool Status;
			Func_TSL_Unit(Status);
			if (Status)
				GetDlgItem(TSLtxtunit)->SetWindowText("mW");
			else
				GetDlgItem(TSLtxtunit)->SetWindowText("dBm");
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedvalue()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(double &);
		pFunc Func_TSL_Att_value = (pFunc)GetProcAddress(hInst, "TSL_Att_value");
		if (Func_TSL_Att_value)
		{
			double value;
			Func_TSL_Att_value(value);
			CString str;
			str.Format("%.3f", value);
			GetDlgItem(TSLtxtreadatt)->SetWindowText(str);
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedPdbm()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(double &);
		pFunc Func_TSL_Power_dBm = (pFunc)GetProcAddress(hInst, "TSL_Power_dBm");
		if (Func_TSL_Power_dBm)
		{
			double value;
			Func_TSL_Power_dBm(value);
			CString str;
			str.Format("%.3f", value);
			GetDlgItem(TSLtxtreadpow)->SetWindowText(str);
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedPmw()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(double &);
		pFunc Func_TSL_Power_mW = (pFunc)GetProcAddress(hInst, "TSL_Power_mW");
		if (Func_TSL_Power_mW)
		{
			double value;
			Func_TSL_Power_mW(value);
			CString str;
			str.Format("%.3f", value);
			GetDlgItem(TSLtxtreadmw)->SetWindowText(str);
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickeddbm()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(double &);
		pFunc Func_TSL_Monitor_dBm = (pFunc)GetProcAddress(hInst, "TSL_Monitor_dBm");
		if (Func_TSL_Monitor_dBm)
		{
			double value;
			Func_TSL_Monitor_dBm(value);
			CString str;
			str.Format("%.3f", value);
			GetDlgItem(TSLtxtreadmoni)->SetWindowText(str);
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedmw()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(double &);
		pFunc Func_TSL_Monitor_mW = (pFunc)GetProcAddress(hInst, "TSL_Monitor_mW");
		if (Func_TSL_Monitor_mW)
		{
			double value;
			Func_TSL_Monitor_mW(value);
			CString str;
			str.Format("%.3f", value);
			GetDlgItem(TSLtxtradmoni_mw)->SetWindowText(str);
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedOn()
{
	// ---------------------------------------------------
	// LD ON
	// LD 开
	// ---------------------------------------------------
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)();
		pFunc Func_TSL_LD_ON = (pFunc)GetProcAddress(hInst, "TSL_LD_ON");
		if (Func_TSL_LD_ON)
		{
			Func_TSL_LD_ON();
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedTSLLDOff()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)();
		pFunc Func_TSL_LD_OFF = (pFunc)GetProcAddress(hInst, "TSL_LD_OFF");
		if (Func_TSL_LD_OFF)
		{
			Func_TSL_LD_OFF();
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}


void TSL_Normal_function::OnBnClickedTSLCohOn()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)();
		pFunc Func_TSL_Coh_ON = (pFunc)GetProcAddress(hInst, "TSL_Coh_ON");
		if (Func_TSL_Coh_ON)
		{
			Func_TSL_Coh_ON();
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		//free library
		FreeLibrary(hInst);
		hInst = nullptr;
	}
	else
	{
		::MessageBoxA(NULL, "Load dll fail.", "Fail", MB_OK);
	}
}
