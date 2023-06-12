// MPM_Normal_function.cpp : 实现文件
//

#include "stdafx.h"
#include "Instrument_DLL_Sample_MFC.h"
#include "MPM_Normal_function.h"
#include "afxdialogex.h"


// MPM_Normal_function 对话框

IMPLEMENT_DYNAMIC(MPM_Normal_function, CDialog)

MPM_Normal_function::MPM_Normal_function(CWnd* pParent /*=NULL*/)
	: CDialog(MPM_Normal_function_Form, pParent)
{

}

MPM_Normal_function::~MPM_Normal_function()
{
}

void MPM_Normal_function::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(MPM_Normal_function, CDialog)
	ON_BN_CLICKED(MPMbtnSetRangeMode, &MPM_Normal_function::OnBnClickedbtnsetrangemode)
	ON_BN_CLICKED(MPMbtnSetWavelength, &MPM_Normal_function::OnBnClickedbtnsetwavelength)
	ON_BN_CLICKED(MPMbtnSetAveraging, &MPM_Normal_function::OnBnClickedbtnsetaveraging)
	ON_BN_CLICKED(MPMbtnSetRangeAll, &MPM_Normal_function::OnBnClickedbtnsetrangeall)
	ON_BN_CLICKED(MPMbtnSetUnit, &MPM_Normal_function::OnBnClickedbtnsetunit)
	ON_BN_CLICKED(MPMbtnSetSlot, &MPM_Normal_function::OnBnClickedbtnsetslot)
	ON_BN_CLICKED(MPMbtnGet, &MPM_Normal_function::OnBnClickedbtnget)
	ON_BN_CLICKED(MPMbtnSlot_Ch_Range, &MPM_Normal_function::OnBnClickedChRange)
	ON_BN_CLICKED(MPMbtnSlot_Ch_Power, &MPM_Normal_function::OnBnClickedChPower)
	ON_BN_CLICKED(MPMbtnSlot_Power, &MPM_Normal_function::OnBnClickedPower)
	ON_BN_CLICKED(MPMbtnZeroing, &MPM_Normal_function::OnBnClickedbtnzeroing)
	ON_BN_CLICKED(MPMbtnGetWavelength, &MPM_Normal_function::OnBnClickedbtngetwavelength)
	ON_BN_CLICKED(MPMbtnGetError, &MPM_Normal_function::OnBnClickedbtngeterror)
	ON_BN_CLICKED(MPM_btnGetIP, &MPM_Normal_function::OnBnClickedbtngetip)
	ON_BN_CLICKED(MPM_btnGetPort, &MPM_Normal_function::OnBnClickedbtngetport)
END_MESSAGE_MAP()


// MPM_Normal_function 消息处理程序


void MPM_Normal_function::OnBnClickedbtnsetrangemode()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char*);
		pFunc Func_MPM_SetRangeMode = (pFunc)GetProcAddress(hInst, "MPM_SetRangeMode");
		if (Func_MPM_SetRangeMode)
		{
			CString str;
			GetDlgItem(MPMcmbset_rangemode)->GetWindowText(str);
			Func_MPM_SetRangeMode((LPSTR)(LPCSTR)str);
			if (str == "Auto")
			{
				GetDlgItem(MPMtxtsetrange)->EnableWindow(false);
				GetDlgItem(MPMtxte_range)->EnableWindow(false);
				GetDlgItem(MPMtxtr_slot)->EnableWindow(false);
				GetDlgItem(MPMtxtr_ch)->EnableWindow(false);
			}
			else
			{
				GetDlgItem(MPMtxtsetrange)->EnableWindow(true);
				GetDlgItem(MPMtxte_range)->EnableWindow(true);
				GetDlgItem(MPMtxtr_slot)->EnableWindow(true);
				GetDlgItem(MPMtxtr_ch)->EnableWindow(true);
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


void MPM_Normal_function::OnBnClickedbtnsetwavelength()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char*);
		pFunc Func_MPM_SetWavelength = (pFunc)GetProcAddress(hInst, "MPM_SetWavelength");
		if (Func_MPM_SetWavelength)
		{
			CString str;
			GetDlgItem(MPMtxtsetwave)->GetWindowText(str);
			Func_MPM_SetWavelength((LPSTR)(LPCSTR)str);
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


void MPM_Normal_function::OnBnClickedbtnsetaveraging()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char*);
		pFunc Func_MPM_SetAveraging = (pFunc)GetProcAddress(hInst, "MPM_SetAveraging");
		if (Func_MPM_SetAveraging)
		{
			CString str;
			GetDlgItem(MPMtxtsetavg)->GetWindowText(str);
			Func_MPM_SetAveraging((LPSTR)(LPCSTR)str);
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


void MPM_Normal_function::OnBnClickedbtnsetrangeall()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char*);
		pFunc Func_MPM_SetRangeAll = (pFunc)GetProcAddress(hInst, "MPM_SetRangeAll");
		if (Func_MPM_SetRangeAll)
		{
			CString str;
			GetDlgItem(MPMtxtsetrange)->GetWindowText(str);
			Func_MPM_SetRangeAll((LPSTR)(LPCSTR)str);
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


void MPM_Normal_function::OnBnClickedbtnsetunit()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char*);
		pFunc Func_MPM_SetUnit = (pFunc)GetProcAddress(hInst, "MPM_SetUnit");
		if (Func_MPM_SetUnit)
		{
			CString str;
			GetDlgItem(MPMcmbunit)->GetWindowText(str);
			Func_MPM_SetUnit((LPSTR)(LPCSTR)str);
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


void MPM_Normal_function::OnBnClickedbtnsetslot()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char*, char*, char*);
		pFunc Func_MPM_SetSlot = (pFunc)GetProcAddress(hInst, "MPM_SetSlot");
		if (Func_MPM_SetSlot)
		{
			CString slot;
			CString ch;
			CString range;

			GetDlgItem(MPMtxtr_slot)->GetWindowText(slot);
			GetDlgItem(MPMtxtr_ch)->GetWindowText(ch);
			GetDlgItem(MPMtxte_range)->GetWindowText(range);

			Func_MPM_SetSlot((LPSTR)(LPCSTR)slot, (LPSTR)(LPCSTR)ch, (LPSTR)(LPCSTR)range);
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


void MPM_Normal_function::OnBnClickedbtnget()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{
		typedef void(*pFunc)(char* &, char*&, char*&, char*&, char*&);
		pFunc Func_MPM_Get = (pFunc)GetProcAddress(hInst, "MPM_Get");
		if (Func_MPM_Get)
		{
			char* rangemode;
			char* wavelength;
			char* averaging_time;
			char* range;
			char* unit;
			Func_MPM_Get(rangemode, range, wavelength, averaging_time, unit);
			GetDlgItem(MPMtxtgetrmode)->SetWindowText(rangemode);
			GetDlgItem(MPMtxtgetrang)->SetWindowText(range);
			GetDlgItem(MPMtxtget_wave)->SetWindowText(wavelength);
			GetDlgItem(MPMtxtget_avg)->SetWindowText(averaging_time);
			GetDlgItem(MPMtxtget_unit)->SetWindowText(unit);
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


void MPM_Normal_function::OnBnClickedChRange()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{
		typedef void(*pFunc)(char* , char*, char*&);
		pFunc Func_MPM_GetSlot_Ch_Range = (pFunc)GetProcAddress(hInst, "MPM_GetSlot_Ch_Range");
		if (Func_MPM_GetSlot_Ch_Range)
		{
			CString slot;
			CString ch;
			GetDlgItem(MPMtxtget_rangeslot)->GetWindowText(slot);
			GetDlgItem(MPMtxtget_rangech)->GetWindowText(ch);
			char* range;
			Func_MPM_GetSlot_Ch_Range((LPSTR)(LPCSTR)slot, (LPSTR)(LPCSTR)ch, range);
			GetDlgItem(MPMtxtget_erange)->SetWindowText(range);
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


void MPM_Normal_function::OnBnClickedChPower()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{
		typedef void(*pFunc)(char*, char*, char*&);
		pFunc Func_MPM_GetSlot_Ch_Power = (pFunc)GetProcAddress(hInst, "MPM_GetSlot_Ch_Power");
		if (Func_MPM_GetSlot_Ch_Power)
		{
			CString slot;
			CString ch;
			GetDlgItem(MPMtxtread_slot)->GetWindowText(slot);
			GetDlgItem(MPMtxtread_ch)->GetWindowText(ch);
			char* power;
			Func_MPM_GetSlot_Ch_Power((LPSTR)(LPCSTR)slot, (LPSTR)(LPCSTR)ch, power);
			GetDlgItem(MPMtxt_readp_ch)->SetWindowText(power);
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


void MPM_Normal_function::OnBnClickedPower()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{
		typedef void(*pFunc)(char*, char*&);
		pFunc Func_MPM_GetSlot_Power = (pFunc)GetProcAddress(hInst, "MPM_GetSlot_Power");
		if (Func_MPM_GetSlot_Power)
		{
			CString slot;
			GetDlgItem(MPMtxtread_slotall)->GetWindowText(slot);
			char* pow_string;
			Func_MPM_GetSlot_Power((LPSTR)(LPCSTR)slot, pow_string);
			GetDlgItem(MPMtxtreadp_all)->SetWindowText(pow_string);
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


void MPM_Normal_function::OnBnClickedbtnzeroing()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{
		typedef void(*pFunc)();
		pFunc Func_MPM_Zeroing = (pFunc)GetProcAddress(hInst, "MPM_Zeroing");
		if (Func_MPM_Zeroing)
		{
			Func_MPM_Zeroing();
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


void MPM_Normal_function::OnBnClickedbtngetwavelength()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{
		typedef void(*pFunc)(char*, char*, char*);
		pFunc Func_MPM_GetWavelength = (pFunc)GetProcAddress(hInst, "MPM_GetWavelength");
		if (Func_MPM_GetWavelength)
		{
			CString slot;
			CString ch;
			GetDlgItem(MPMtxtwave_slot)->GetWindowText(slot);
			GetDlgItem(MPMtxtwave_ch)->GetWindowText(ch);
			CFileDialog dlg(TRUE, "csv", "", OFN_HIDEREADONLY, NULL);
			if (dlg.DoModal() == IDOK)
			{
				CString str = dlg.GetPathName();
				char* cSelectedPath = (LPSTR)(LPCSTR)str;
				Func_MPM_GetWavelength((LPSTR)(LPCSTR)slot, (LPSTR)(LPCSTR)ch, cSelectedPath);
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


void MPM_Normal_function::OnBnClickedbtngeterror()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{
		typedef void(*pFunc)( char*&);
		pFunc Func_MPM_GetError = (pFunc)GetProcAddress(hInst, "MPM_GetError");
		if (Func_MPM_GetError)
		{
			char* error_string;
			Func_MPM_GetError(error_string);
			GetDlgItem(MPMtxtsyst_error)->SetWindowText(error_string);
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


void MPM_Normal_function::OnBnClickedbtngetip()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{
		typedef void(*pFunc)(char*&);
		pFunc Func_MPM_GetIP = (pFunc)GetProcAddress(hInst, "MPM_GetIP");
		if (Func_MPM_GetIP)
		{
			char* ip;
			Func_MPM_GetIP(ip);
			GetDlgItem(MPMtxtipaddress)->SetWindowText(ip);
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


void MPM_Normal_function::OnBnClickedbtngetport()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{
		typedef void(*pFunc)(char*&);
		pFunc Func_MPM_GetPort = (pFunc)GetProcAddress(hInst, "MPM_GetPort");
		if (Func_MPM_GetPort)
		{
			char* port;
			Func_MPM_GetPort(port);
			GetDlgItem(MPM_txtlan_port)->SetWindowText(port);
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
