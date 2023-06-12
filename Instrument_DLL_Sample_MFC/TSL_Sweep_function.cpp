// TSL_Sweep_function.cpp : 实现文件
//

#include "stdafx.h"
#include "Instrument_DLL_Sample_MFC.h"
#include "TSL_Sweep_function.h"
#include "afxdialogex.h"
#include "TSL_Communication_Setting.h"
#include <vector>
#include <string>
using namespace std;

// TSL_Sweep_function 对话框

IMPLEMENT_DYNAMIC(TSL_Sweep_function, CDialog)

TSL_Sweep_function::TSL_Sweep_function(CWnd* pParent /*=NULL*/)
	: CDialog(TSL_Sweep_function_Form, pParent)
{

}

TSL_Sweep_function::~TSL_Sweep_function()
{
}

void TSL_Sweep_function::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, TSLcmb570_Speed, speed);
}


BEGIN_MESSAGE_MAP(TSL_Sweep_function, CDialog)
	ON_BN_CLICKED(TSLBtn_Waiting, &TSL_Sweep_function::OnBnClickedWaiting)
	ON_BN_CLICKED(TSLBtn_SetWavelength, &TSL_Sweep_function::OnBnClickedTSLSetwavelength)
	ON_BN_CLICKED(TSLBtn_Other, &TSL_Sweep_function::OnBnClickedTSLOther)
	ON_BN_CLICKED(TSLBtnGet_setting, &TSL_Sweep_function::OnBnClickedTSLsetting)
	ON_BN_CLICKED(TSLBtn_Status, &TSL_Sweep_function::OnBnClickedTSLStatus)
	ON_BN_CLICKED(TSLBtn_Minstep, &TSL_Sweep_function::OnBnClickedTSLMinstep)
	ON_BN_CLICKED(TSLbtnSpeed, &TSL_Sweep_function::OnBnClickedTSLbtnspeed)
	ON_BN_CLICKED(TSLBtn_Current, &TSL_Sweep_function::OnBnClickedCurrent)
	ON_BN_CLICKED(TSLBtn_Start, &TSL_Sweep_function::OnBnClickedTSLStart)
	ON_BN_CLICKED(TSLBtn_Stop, &TSL_Sweep_function::OnBnClickedTSLStop)
	ON_BN_CLICKED(TSLBtn_SoftwareTrigger, &TSL_Sweep_function::OnBnClickedTSLSoftwaretrigger)
	ON_BN_CLICKED(TSLBtn_Pause, &TSL_Sweep_function::OnBnClickedTSLPause)
	ON_BN_CLICKED(TSLBtn_ReStart, &TSL_Sweep_function::OnBnClickedTSLRestart)
	ON_BN_CLICKED(TSLBtn_GetLogg, &TSL_Sweep_function::OnBnClickedTSLGetlogg)
END_MESSAGE_MAP()


// TSL_Sweep_function 消息处理程序

inline vector<string> split(const string& s, const string& seperator) {
	vector<string> result;
	unsigned int posBegin = 0;
	unsigned int posSeperator = s.find(seperator);

	while (posSeperator != s.npos) {
		result.push_back(s.substr(posBegin, posSeperator - posBegin));// 
		posBegin = posSeperator + seperator.size();
		posSeperator = s.find(seperator, posBegin);

	}
	if (posBegin != s.length())
		result.push_back(s.substr(posBegin));

	return result;
}

BOOL TSL_Sweep_function::OnInitDialog()
{
	CDialog::OnInitDialog();
	// TODO:  在此添加额外的初始化

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void TSL_Sweep_function::OnBnClickedWaiting()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char*, char*);
		pFunc Func_TSL_Waiting = (pFunc)GetProcAddress(hInst, "TSL_Waiting");
		if (Func_TSL_Waiting)
		{
			CString wait_time;
			CString sweep_su;
			GetDlgItem(TSLtxtsw_wait)->GetWindowText(wait_time);
			GetDlgItem(TSLcmbsweep_su)->GetWindowText(sweep_su);
			Func_TSL_Waiting((LPSTR)(LPCSTR)wait_time, (LPSTR)(LPCSTR)sweep_su);
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


void TSL_Sweep_function::OnBnClickedTSLSetwavelength()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char*, char*, char*);
		pFunc Func_TSL_SetWavelength = (pFunc)GetProcAddress(hInst, "TSL_SetWavelength");
		if (Func_TSL_SetWavelength)
		{
			CString startwavelength;
			CString stopwavelength;
			CString wavestep;
			GetDlgItem(TSLtxtstart)->GetWindowText(startwavelength);
			GetDlgItem(TSLtxtstop)->GetWindowText(stopwavelength);
			GetDlgItem(TSLtxtstep)->GetWindowText(wavestep);
			Func_TSL_SetWavelength((LPSTR)(LPCSTR)startwavelength, (LPSTR)(LPCSTR)stopwavelength, (LPSTR)(LPCSTR)wavestep);
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


void TSL_Sweep_function::OnBnClickedTSLOther()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{
		typedef void(*pFunc)(char*, char*, char*);
		pFunc Func_TSL_SetOther = (pFunc)GetProcAddress(hInst, "TSL_SetOther");
		if (Func_TSL_SetOther)
		{
			CString speed;
			CString delay;
			CString cycle;
			GetDlgItem(TSLtxtspeed)->GetWindowText(speed);
			GetDlgItem(TSLtxtdelay)->GetWindowText(delay);
			GetDlgItem(TSLtxtcycle)->GetWindowText(cycle);
			Func_TSL_SetOther((LPSTR)(LPCSTR)speed, (LPSTR)(LPCSTR)delay, (LPSTR)(LPCSTR)cycle);
		}
		else
		{
			::MessageBoxA(NULL, "Get function fail.", "Fail", MB_OK);
		}
		typedef void(*pFunc1)(char*, char*, char*, char*, char*, bool);
		pFunc1 TSL_Set_Sweep_parameter = (pFunc1)GetProcAddress(hInst, "TSL_Set_Sweep_parameter");
		if (TSL_Set_Sweep_parameter)
		{
			CString Sweep_Mode;
			CString Trigger_Input_Mode;
			CString Trigger_Output_Mode;
			CString Sweep_Start_Mode;
			CString TriggerOut_Source;
			GetDlgItem(TSLcmbsm)->GetWindowTextA(Sweep_Mode);
			GetDlgItem(TSLcmbtin)->GetWindowTextA(Trigger_Input_Mode);
			GetDlgItem(TSLcmbtout)->GetWindowTextA(Trigger_Output_Mode);
			GetDlgItem(TSLcmbst_mod)->GetWindowTextA(Sweep_Start_Mode);
			GetDlgItem(TSLcmbtin)->GetWindowTextA(TriggerOut_Source);
			TSL_Set_Sweep_parameter((LPSTR)(LPCSTR)Sweep_Mode, (LPSTR)(LPCSTR)Trigger_Input_Mode, (LPSTR)(LPCSTR)Trigger_Output_Mode, (LPSTR)(LPCSTR)Sweep_Start_Mode, (LPSTR)(LPCSTR)TriggerOut_Source, ((CButton *)GetDlgItem(TSLcmbTrigger_Source))->IsWindowEnabled());
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


void TSL_Sweep_function::OnBnClickedTSLsetting()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char* &, char* &, char* &, char* &, char* &, char* &, char* &, char* &, char* &, char* &, char* &, char* &, bool);
		pFunc Func_TSL_Get_setting = (pFunc)GetProcAddress(hInst, "TSL_Get_setting");
		if (Func_TSL_Get_setting)
		{
			char* s_mode;
			char* tr_outputmode;
			char* tr_inputmode;
			char* start_mode;
			char* source;
			char* startwave;
			char* stopwave;
			char* delay;
			char* cycle;
			char* wavestep;
			char* triggerstep;
			char* speed;
			Func_TSL_Get_setting(s_mode, tr_inputmode, tr_outputmode, start_mode, startwave, stopwave, delay, cycle, wavestep, triggerstep, speed, source, ((CButton *)GetDlgItem(TSLcmbTrigger_Source))->IsWindowEnabled());
			GetDlgItem(TSLtxtg_smod)->SetWindowText(s_mode);
			GetDlgItem(TSLtxtg_tr_inp)->SetWindowText(tr_inputmode);
			GetDlgItem(TSLtxtg_tri_out)->SetWindowText(tr_outputmode);
			GetDlgItem(TSLtxtg_startmode)->SetWindowText(start_mode);
			GetDlgItem(TSLtxtg_startwave)->SetWindowText(startwave);
			GetDlgItem(TSLtxtg_stopwave)->SetWindowText(stopwave);
			GetDlgItem(TSLtxtg_delay)->SetWindowText(delay);
			GetDlgItem(TSLtxtg_cycle)->SetWindowText(cycle);
			GetDlgItem(TSLtxtg_wavestep)->SetWindowText(wavestep);
			GetDlgItem(TSLtxtg_triggerstep)->SetWindowText(triggerstep);
			GetDlgItem(TSLtxtg_speed)->SetWindowText(speed);
			GetDlgItem(TSLtxtTrigger_Source)->SetWindowText(source);
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


void TSL_Sweep_function::OnBnClickedTSLStatus()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char* &);
		pFunc Func_TSL_Get_Sweep_Status = (pFunc)GetProcAddress(hInst, "TSL_Get_Sweep_Status");
		if (Func_TSL_Get_Sweep_Status)
		{
			char*sweep_su;
			Func_TSL_Get_Sweep_Status(sweep_su);
			GetDlgItem(TSLtxtg_sweep_su)->SetWindowText(sweep_su);

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


void TSL_Sweep_function::OnBnClickedTSLMinstep()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char*);
		pFunc Func_TSL_Calcurate = (pFunc)GetProcAddress(hInst, "TSL_Calcurate");
		if (Func_TSL_Calcurate)
		{
			CString speed;
			GetDlgItem(TSLtxtminstep)->GetWindowText(speed);
			Func_TSL_Calcurate((LPSTR)(LPCSTR)speed);
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


void TSL_Sweep_function::OnBnClickedTSLbtnspeed()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(bool, char*  &);
		pFunc Func_TSLGet_SweepSpeed_table = (pFunc)GetProcAddress(hInst, "TSLGet_SweepSpeed_table");
		if (Func_TSLGet_SweepSpeed_table)
		{
			char* Str;

			Func_TSLGet_SweepSpeed_table(((CButton *)GetDlgItem(TSLcmbTrigger_Source))->IsWindowEnabled(), Str);
			string speeds = Str;
			int cnt = speeds.find(_T(","));
			if (cnt >= 0) {
				vector<string> obj = split(Str, ",");
				for (int i = 0; i < obj.size(); i++) {
					string str1 = obj.at(i);
					speed.AddString(CString(str1.c_str()));
				}
			}
			else {
				speed.AddString(Str);
			}
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


void TSL_Sweep_function::OnBnClickedCurrent()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char*  &);
		pFunc Func_TSL_Get_Sweep_Count = (pFunc)GetProcAddress(hInst, "TSL_Get_Sweep_Count");
		if (Func_TSL_Get_Sweep_Count)
		{
			char* Str;
			TSL_Communication_Setting test;

			Func_TSL_Get_Sweep_Count(Str);
			GetDlgItem(TSLtxtcurrentc)->SetWindowText(Str);

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


void TSL_Sweep_function::OnBnClickedTSLStart()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)();
		pFunc Func_TSL_Start = (pFunc)GetProcAddress(hInst, "TSL_Start");
		if (Func_TSL_Start)
		{
			Func_TSL_Start();
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


void TSL_Sweep_function::OnBnClickedTSLStop()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char*);
		pFunc Func_TSL_Stop = (pFunc)GetProcAddress(hInst, "TSL_Stop");
		if (Func_TSL_Stop)
		{
			CString productname;
			GetDlgItem(TSLlblproductname)->GetWindowText(productname);
			Func_TSL_Stop((LPSTR)(LPCSTR)productname);
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


void TSL_Sweep_function::OnBnClickedTSLSoftwaretrigger()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)();
		pFunc Func_TSL_SoftwareTrigger = (pFunc)GetProcAddress(hInst, "TSL_SoftwareTrigger");
		if (Func_TSL_SoftwareTrigger)
		{
			Func_TSL_SoftwareTrigger();
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


void TSL_Sweep_function::OnBnClickedTSLPause()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)();
		pFunc Func_TSL_Pause = (pFunc)GetProcAddress(hInst, "TSL_Pause");
		if (Func_TSL_Pause)
		{
			Func_TSL_Pause();
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


void TSL_Sweep_function::OnBnClickedTSLRestart()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)();
		pFunc Func_TSL_Restart = (pFunc)GetProcAddress(hInst, "TSL_Restart");
		if (Func_TSL_Restart)
		{
			Func_TSL_Restart();
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


void TSL_Sweep_function::OnBnClickedTSLGetlogg()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char*);
		pFunc Func_TSL_GetLoggdata = (pFunc)GetProcAddress(hInst, "TSL_GetLoggdata");
		if (Func_TSL_GetLoggdata)
		{
			CFileDialog dlg(TRUE, "csv", "data", OFN_HIDEREADONLY, NULL);
			if (dlg.DoModal() == IDOK)
			{
				CString str = dlg.GetPathName();
				char* cSelectedPath = (LPSTR)(LPCSTR)str;
				Func_TSL_GetLoggdata(cSelectedPath);
			}
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
