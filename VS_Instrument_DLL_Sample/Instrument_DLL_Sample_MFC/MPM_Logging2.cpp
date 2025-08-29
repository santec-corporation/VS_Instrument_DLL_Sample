// MPM_Logging2.cpp : 实现文件
//

#include "stdafx.h"
#include "Instrument_DLL_Sample_MFC.h"
#include "MPM_Logging2.h"
#include "afxdialogex.h"


// MPM_Logging2 对话框

IMPLEMENT_DYNAMIC(MPM_Logging2, CDialog)

MPM_Logging2::MPM_Logging2(CWnd* pParent /*=NULL*/)
	: CDialog(MPM_Logging2_Form, pParent)
{

}

MPM_Logging2::~MPM_Logging2()
{
}

void MPM_Logging2::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(MPM_Logging2, CDialog)
	ON_BN_CLICKED(MPMbtnGetParameter, &MPM_Logging2::OnBnClickedbtngetparameter)
END_MESSAGE_MAP()


// MPM_Logging2 消息处理程序


void MPM_Logging2::OnBnClickedbtngetparameter()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{
		typedef void(*pFunc)(char* &, char*&, char*&, char*&, char*&, char*&, char*&, char*&, char*&, char*&, char*&);
		pFunc FuncMPM_GetParameter = (pFunc)GetProcAddress(hInst, "MPM_GetParameter");
		if (FuncMPM_GetParameter)
		{
			char* rangemode;
			char* log_mode;
			char* ave;
			char* point;
			char* wavelength;	
			char* tinmode;
			char* settingrange;
			char* startwave;
			char* stopwave;
			char* wavestep;
			char* speed;

			FuncMPM_GetParameter(rangemode, log_mode, ave, point, wavelength, tinmode, settingrange, startwave, stopwave, wavestep, speed);
			GetDlgItem(MPMtxtg_rangemode)->SetWindowText(rangemode);
			GetDlgItem(MPMtxtlog_mode)->SetWindowText(log_mode);
			GetDlgItem(MPMtxtg_ave)->SetWindowText(ave);
			GetDlgItem(MPMtxtg_point)->SetWindowText(point);
			GetDlgItem(MPMtxtg_wavelength)->SetWindowText(wavelength);
			GetDlgItem(MPMtxtg_tinmode)->SetWindowText(tinmode);
			GetDlgItem(MPMtxtg_settingrange)->SetWindowText(settingrange);
			GetDlgItem(MPMtxtg_statwave)->SetWindowText(startwave);
			GetDlgItem(MPMtxtg_stopwave)->SetWindowText(stopwave);
			GetDlgItem(MPMtxtg_stepwave)->SetWindowText(wavestep);
			GetDlgItem(MPMtxtg_speed)->SetWindowText(speed);

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
