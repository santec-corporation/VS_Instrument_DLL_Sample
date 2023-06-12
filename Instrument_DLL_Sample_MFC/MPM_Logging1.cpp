// MPM_Logging1.cpp : 实现文件
//

#include "stdafx.h"
#include "Instrument_DLL_Sample_MFC.h"
#include "MPM_Logging1.h"
#include "afxdialogex.h"


// MPM_Logging1 对话框

IMPLEMENT_DYNAMIC(MPM_Logging1, CDialog)

MPM_Logging1::MPM_Logging1(CWnd* pParent /*=NULL*/)
	: CDialog(MPM_Logging1_Form, pParent)
{

}

MPM_Logging1::~MPM_Logging1()
{
}

void MPM_Logging1::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(MPM_Logging1, CDialog)
	ON_BN_CLICKED(MPMbtnSetConst, &MPM_Logging1::OnBnClickedbtnsetconst)
	ON_BN_CLICKED(MPMbtnSetSweep, &MPM_Logging1::OnBnClickedbtnsetsweep)
	ON_BN_CLICKED(MPMbtnSetFreerun, &MPM_Logging1::OnBnClickedbtnsetfreerun)
	ON_BN_CLICKED(MPMbtnStart, &MPM_Logging1::OnBnClickedbtnstart)
	ON_BN_CLICKED(MPMbtnStatus, &MPM_Logging1::OnBnClickedbtnstatus)
	ON_BN_CLICKED(MPMbtnStop, &MPM_Logging1::OnBnClickedbtnstop)
	ON_BN_CLICKED(MPMbtnGetch, &MPM_Logging1::OnBnClickedbtngetch)
	ON_BN_CLICKED(MPMbtnGetSlot, &MPM_Logging1::OnBnClickedbtngetslot)
END_MESSAGE_MAP()


// MPM_Logging1 消息处理程序


void MPM_Logging1::OnBnClickedbtnsetconst()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{
		typedef void(*pFunc)(char* , char* , char* , char* ,  char* );
		pFunc Func_MPM_SetConst = (pFunc)GetProcAddress(hInst, "MPM_SetConst");
		if (Func_MPM_SetConst)
		{
			CString ave;
			CString point;
			CString wave;
			CString trigger_input_mode;
			CString logg_mode;
			CString range;

			GetDlgItem(MPMcmbcon_rangemode)->GetWindowText(logg_mode);
			GetDlgItem(MPMtxtcon_ave)->GetWindowText(ave);
			GetDlgItem(MPMtxtcon_point)->GetWindowText(point);
			GetDlgItem(MPMtxtcon_wave)->GetWindowText(wave);
			GetDlgItem(MPMtxtcon_range)->GetWindowText(range);
			Func_MPM_SetConst((LPSTR)(LPCSTR)logg_mode, (LPSTR)(LPCSTR)ave, (LPSTR)(LPCSTR)point, (LPSTR)(LPCSTR)wave,  (LPSTR)(LPCSTR)range);
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


void MPM_Logging1::OnBnClickedbtnsetsweep()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{
		typedef void(*pFunc)(char*, char*, char*, char*, char*, char*);
		pFunc Func_MPM_SetSweep = (pFunc)GetProcAddress(hInst, "MPM_SetSweep");
		if (Func_MPM_SetSweep)
		{
			CString startwave;
			CString stopwave;
			CString wavestep;
			CString speed;
			CString logg_mode;
			CString range;

			GetDlgItem(MPMcmbsm_rangemode)->GetWindowText(logg_mode);
			GetDlgItem(MPMtxtstartwave)->GetWindowText(startwave);
			GetDlgItem(MPMtxtstopwave)->GetWindowText(stopwave);
			GetDlgItem(MPMtxtwavestep)->GetWindowText(wavestep);
			GetDlgItem(MPMtxtspeed)->GetWindowText(speed);
			GetDlgItem(MPMtxtsm_range)->GetWindowText(range);
			Func_MPM_SetSweep((LPSTR)(LPCSTR)logg_mode, (LPSTR)(LPCSTR)startwave, (LPSTR)(LPCSTR)stopwave, (LPSTR)(LPCSTR)wavestep, (LPSTR)(LPCSTR)speed, (LPSTR)(LPCSTR)range);
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


void MPM_Logging1::OnBnClickedbtnsetfreerun()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{
		typedef void(*pFunc)(char*, char*, char*, char*, char*);
		pFunc Func_MPM_SetFreerun = (pFunc)GetProcAddress(hInst, "MPM_SetFreerun");
		if (Func_MPM_SetFreerun)
		{
			CString ave;
			CString point;
			CString wave;
			CString range;
			CString t_inmode;

			GetDlgItem(MPMtxtfr_ave)->GetWindowText(ave);
			GetDlgItem(MPMtxtfr_point)->GetWindowText(point);
			GetDlgItem(MPMtxtfr_wave)->GetWindowText(wave);
			GetDlgItem(MPMcmbfr_tin_mode)->GetWindowText(t_inmode);
			GetDlgItem(MPMtxtfr_range)->GetWindowText(range);
			Func_MPM_SetFreerun((LPSTR)(LPCSTR)range, (LPSTR)(LPCSTR)ave, (LPSTR)(LPCSTR)point, (LPSTR)(LPCSTR)wave, (LPSTR)(LPCSTR)t_inmode);
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


void MPM_Logging1::OnBnClickedbtnstart()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{
		typedef void(*pFunc)();
		pFunc Func_MPM_Start = (pFunc)GetProcAddress(hInst, "MPM_Start");
		if (Func_MPM_Start)
		{
			Func_MPM_Start();
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


void MPM_Logging1::OnBnClickedbtnstatus()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{
		typedef void(*pFunc)(char*&);
		pFunc Func_MPM_Status = (pFunc)GetProcAddress(hInst, "MPM_Status");
		if (Func_MPM_Status)
		{
			char* status;
			Func_MPM_Status(status);
			GetDlgItem(MPMtxtlog_status)->SetWindowText(status);
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


void MPM_Logging1::OnBnClickedbtnstop()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{
		typedef void(*pFunc)();
		pFunc FuncMPM_Stop = (pFunc)GetProcAddress(hInst, "MPM_Stop");
		if (FuncMPM_Stop)
		{
			FuncMPM_Stop();
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


void MPM_Logging1::OnBnClickedbtngetch()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{
		typedef void(*pFunc)(char*, char*, char*);
		pFunc Func_MPM_GetchLogging = (pFunc)GetProcAddress(hInst, "MPM_GetchLogging");
		if (Func_MPM_GetchLogging)
		{
			CString slot;
			CString ch;
			GetDlgItem(MPMtxtlog_slot)->GetWindowText(slot);
			GetDlgItem(MPMtxtlog_ch)->GetWindowText(ch);
			CFileDialog dlg(TRUE, "csv", "", OFN_HIDEREADONLY, NULL);
			if (dlg.DoModal() == IDOK)
			{
				CString str = dlg.GetPathName();
				char* cSelectedPath = (LPSTR)(LPCSTR)str;
				Func_MPM_GetchLogging((LPSTR)(LPCSTR)slot, (LPSTR)(LPCSTR)ch, cSelectedPath);
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


void MPM_Logging1::OnBnClickedbtngetslot()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{
		typedef void(*pFunc)(char*, char*);
		pFunc Func_MPM_GetchLogging = (pFunc)GetProcAddress(hInst, "MPM_GetchLogging");
		if (Func_MPM_GetchLogging)
		{
			CString slot;
			GetDlgItem(MPMtxte_slot)->GetWindowText(slot);
			CFileDialog dlg(TRUE, "csv", "", OFN_HIDEREADONLY, NULL);
			if (dlg.DoModal() == IDOK)
			{
				CString str = dlg.GetPathName();
				char* cSelectedPath = (LPSTR)(LPCSTR)str;
				Func_MPM_GetchLogging((LPSTR)(LPCSTR)slot, cSelectedPath);
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
