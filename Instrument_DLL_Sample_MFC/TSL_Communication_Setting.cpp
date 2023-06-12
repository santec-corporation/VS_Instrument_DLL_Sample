// TSL_Communication_Setting.cpp : 实现文件
//

#include "stdafx.h"
#include "Instrument_DLL_Sample_MFC.h"
#include "TSL_Communication_Setting.h"
#include "afxdialogex.h"
#include <vector>
#include <string>
using namespace std;


// TSL_Communication_Setting 对话框

IMPLEMENT_DYNAMIC(TSL_Communication_Setting, CDialog)

TSL_Communication_Setting::TSL_Communication_Setting(CWnd* pParent /*=NULL*/)
	: CDialog(TSL_Communication_Setting_Form, pParent)
{
}

TSL_Communication_Setting::~TSL_Communication_Setting()
{
}

void TSL_Communication_Setting::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, TSLcmbgpib_resouce, cmbgpib_resouces);
	DDX_Control(pDX, TSLcmbusbresouce, cmbusbresouces);
}


BEGIN_MESSAGE_MAP(TSL_Communication_Setting, CDialog)
	ON_BN_CLICKED(TSLbtnGet_Visa, &TSL_Communication_Setting::OnBnClickedVisa)
	ON_BN_CLICKED(TSLbtnSplit, &TSL_Communication_Setting::OnBnClickedbtnsplit)
	ON_BN_CLICKED(TSLbtnUsb_resouce, &TSL_Communication_Setting::OnBnClickedresouce)
	ON_BN_CLICKED(TSLBtnConnect, &TSL_Communication_Setting::OnBnClickedBtnconnect)
	ON_BN_CLICKED(TSLBtnDisConnect, &TSL_Communication_Setting::OnBnClickedBtndisconnect)
	ON_BN_CLICKED(TSLrdo550, &TSL_Communication_Setting::OnBnClickedrdo550)
	ON_CBN_SELCHANGE(TSLcmbusbresouce, &TSL_Communication_Setting::OnCbnSelchangecmbusbresouce)
	ON_BN_CLICKED(TSLrdiUSB, &TSL_Communication_Setting::OnBnClickedrdiusb)
	ON_BN_CLICKED(TSLrdoLAN, &TSL_Communication_Setting::OnBnClickedrdolan)
	ON_BN_CLICKED(TSLrdo570, &TSL_Communication_Setting::OnBnClickedrdo570)
	ON_BN_CLICKED(TSLrdiNI488, &TSL_Communication_Setting::OnBnClickedTslrdini488)
	ON_BN_CLICKED(TSLrdiNIvisa, &TSL_Communication_Setting::OnBnClickedTslrdinivisa)
	ON_BN_CLICKED(TSLrdikysightvisa, &TSL_Communication_Setting::OnBnClickedTsltslrdikysightvisa)
	ON_BN_CLICKED(TSLrdo770, &TSL_Communication_Setting::OnBnClickedTslrdo770)
END_MESSAGE_MAP()


// TSL_Communication_Setting 消息处理程序

vector<CString> SplitCString(CString strSource, CString ch)
{
	vector <CString> vecString;
	int iPos = 0;
	CString strTmp;
	strTmp = strSource.Tokenize(ch, iPos);
	while (strTmp.Trim() != _T(""))
	{
		vecString.push_back(strTmp);
		strTmp = strSource.Tokenize(ch, iPos);
	}
	return vecString;
}

void TSL_Communication_Setting::OnBnClickedVisa()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char* &);
		pFunc Func_GetVisa = (pFunc)GetProcAddress(hInst, "Get_resouce");
		if (Func_GetVisa)
		{
			char* txt = "";
			Func_GetVisa(txt);
			CString SPU = txt;
			int cnt = SPU.Find(_T(","));
			if (cnt >= 0) {
				vector<CString> obj = SplitCString(txt, ",");
				for (int i = 0; i < obj.size(); i++) {
					cmbgpib_resouces.AddString(obj.at(i));
				}
			}
			else {
				cmbgpib_resouces.AddString(txt);
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


void TSL_Communication_Setting::OnBnClickedbtnsplit()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char*, char* &, char* &);
		pFunc Func_GetSplit = (pFunc)GetProcAddress(hInst, "Split");
		if (Func_GetSplit)
		{
			CString resouce = "";
			char* boad = "";
			char* address = "";

			cmbgpib_resouces.GetLBText(cmbgpib_resouces.GetCurSel(), resouce);

			Func_GetSplit((LPSTR)(LPCSTR)resouce, boad, address);
			GetDlgItem(TSLtxtboad)->SetWindowTextA(boad);
			GetDlgItem(TSLtxtaddressnum)->SetWindowTextA(address);
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


void TSL_Communication_Setting::OnBnClickedresouce()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char* &);
		pFunc Func_GetUsb_resouce = (pFunc)GetProcAddress(hInst, "Get_Usb_resouce");
		if (Func_GetUsb_resouce)
		{
			char* txt = "";
			Func_GetUsb_resouce(txt);
			CString SPU = txt;
			int cnt = SPU.Find(_T(","));
			if (cnt >= 0) {
				vector<CString> obj = SplitCString(txt, ",");
				for (int i = 0; i < obj.size(); i++) {
					cmbusbresouces.AddString(obj.at(i));
				}
			}
			else {
				cmbusbresouces.AddString(txt);
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


void TSL_Communication_Setting::OnBnClickedBtnconnect()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char* &, char*, char*, bool, bool, char*, bool, bool, bool, bool);
		pFunc Func_TSL_Connect = (pFunc)GetProcAddress(hInst, "TSL_Connect");
		if (Func_TSL_Connect)
		{
			char* Informations = "";
			CString address;
			CString port;
			CString Board;

			GetDlgItem(TSLAddress)->GetWindowText(address);
			GetDlgItem(TSLtxtPort)->GetWindowText(port);
			GetDlgItem(TSLtxtboad)->GetWindowText(Board);
			if (Board == "")
			{
				Board = "0";
			}
			bool USB_Checked = ((CButton *)GetDlgItem(TSLrdiUSB))->GetCheck();
			bool LAN_Checked = ((CButton *)GetDlgItem(TSLrdoLAN))->GetCheck();
			bool kysightvisa_Checked = ((CButton *)GetDlgItem(TSLrdikysightvisa))->GetCheck();
			bool NI488_Checked = ((CButton *)GetDlgItem(TSLrdiNI488))->GetCheck();
			bool Cr_Checked = ((CButton *)GetDlgItem(TSLrdiCr))->GetCheck();
			bool Lf_Checked = ((CButton *)GetDlgItem(TSLrdiLf))->GetCheck();

			Func_TSL_Connect(Informations, (LPSTR)(LPCSTR)address, (LPSTR)(LPCSTR)Board, USB_Checked, LAN_Checked, (LPSTR)(LPCSTR)port, kysightvisa_Checked, NI488_Checked, Cr_Checked, Lf_Checked);
			CString SPU = Informations;
			int cnt = SPU.Find(_T(","));
			if (cnt >= 0)
			{
				vector<CString> obj = SplitCString(Informations, ",");
				GetDlgItem(TSLlblproductname)->SetWindowTextA(obj.at(0));
				GetDlgItem(TSLlblserial)->SetWindowTextA(obj.at(1));
				GetDlgItem(TSLlblfwversion)->SetWindowTextA(obj.at(2));
				GetDlgItem(TSLlblwave)->SetWindowTextA(obj.at(3));
				GetDlgItem(TSLlblfreq)->SetWindowTextA(obj.at(4));
				GetDlgItem(TSLlblATTrange)->SetWindowTextA(obj.at(5));
				GetDlgItem(TSLlblAPC1)->SetWindowTextA(obj.at(6));
				GetDlgItem(TSLlblACP2)->SetWindowTextA(obj.at(7));
				GetDlgItem(TSLlblSweepSpeed_Range)->SetWindowTextA(obj.at(8));
			}
			else
			{
				GetDlgItem(TSLlblproductname)->SetWindowTextA("");
				GetDlgItem(TSLlblserial)->SetWindowTextA("");
				GetDlgItem(TSLlblfwversion)->SetWindowTextA("");
				GetDlgItem(TSLlblwave)->SetWindowTextA("");
				GetDlgItem(TSLlblfreq)->SetWindowTextA("");
				GetDlgItem(TSLlblATTrange)->SetWindowTextA("");
				GetDlgItem(TSLlblAPC1)->SetWindowTextA("");
				GetDlgItem(TSLlblACP2)->SetWindowTextA("");
				GetDlgItem(TSLlblSweepSpeed_Range)->SetWindowTextA("");
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


void TSL_Communication_Setting::OnBnClickedBtndisconnect()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)();
		pFunc Func_TSL_DisConnect = (pFunc)GetProcAddress(hInst, "TSL_DisConnect");
		if (Func_TSL_DisConnect)
		{
			Func_TSL_DisConnect();
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


void TSL_Communication_Setting::OnBnClickedrdo550()
{
	if (((CButton *)GetDlgItem(TSLrdo550))->GetCheck())
	{
		// TSL-550 can't Control from LAN & USB			
		// TSL-550不能从LAN和USB控制
		GetDlgItem(TSLrdiUSB)->EnableWindow(FALSE);
		GetDlgItem(TSLrdoLAN)->EnableWindow(FALSE);
		GetDlgItem(TSLtxtPort)->EnableWindow(FALSE);
		Check570->GetDlgItem(TSLbtnGetIP)->EnableWindow(FALSE);
		Check570->GetDlgItem(TSLbtnGetPort)->EnableWindow(FALSE);
		SweepCheck570->GetDlgItem(TSLbtnSpeed)->EnableWindow(FALSE);
		SweepCheck570->GetDlgItem(TSLBtn_Pause)->EnableWindow(TRUE);
		SweepCheck570->GetDlgItem(TSLBtn_ReStart)->EnableWindow(TRUE);
		SweepCheck570->GetDlgItem(TSLcmbTrigger_Source)->EnableWindow(FALSE);
	}
}


void TSL_Communication_Setting::OnCbnSelchangecmbusbresouce()
{
	// -------------------------------------------------------
	// Select usb  resouce & Show deveice number
	// 选择usb资源并显示设备号
	// -------------------------------------------------------
	CString resouce = "";
	cmbusbresouces.GetLBText(cmbusbresouces.GetCurSel(), resouce);

	if (resouce == "")
		return;
	GetDlgItem(TSLtxtdev_num)->SetWindowTextA((LPSTR)(LPCSTR)cmbusbresouces.GetCurSel());
}


void TSL_Communication_Setting::OnBnClickedrdiusb()
{
	//  --------------------------------------------------------------
	//  USB communcation checked
	//  选择USB 通讯
	// --------------------------------------------------------------

	if (((CButton *)GetDlgItem(TSLrdiUSB))->GetCheck())
	{
		CString resouce = "";
		GetDlgItem(TSLtxtdev_num)->GetWindowText(resouce);
		GetDlgItem(TSLAddress)->SetWindowTextA(resouce);
		GetDlgItem(TSLtxtPort)->EnableWindow(TRUE);
		GetDlgItem(TSLtxtPort)->SetWindowTextA("5000");
	}
}


void TSL_Communication_Setting::OnBnClickedrdolan()
{
	if (((CButton *)GetDlgItem(TSLrdoLAN))->GetCheck())
	{
		GetDlgItem(TSLtxtPort)->EnableWindow(TRUE);
		GetDlgItem(TSLtxtPort)->SetWindowTextA("5000");
	}

}


BOOL TSL_Communication_Setting::OnInitDialog()
{
	CDialog::OnInitDialog();
	((CButton *)GetDlgItem(TSLrdo550))->SetCheck(1);
	((CButton *)GetDlgItem(TSLrdiNI488))->SetCheck(1);
	((CButton *)GetDlgItem(TSLrdiCr))->SetCheck(1);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void TSL_Communication_Setting::OnBnClickedrdo570()
{
	if (((CButton *)GetDlgItem(TSLrdo570))->GetCheck())
	{
		// TSL-570
		GetDlgItem(TSLrdiUSB)->EnableWindow(TRUE);
		GetDlgItem(TSLrdoLAN)->EnableWindow(TRUE);
		Check570->GetDlgItem(TSLbtnGetIP)->EnableWindow(TRUE);
		Check570->GetDlgItem(TSLbtnGetPort)->EnableWindow(TRUE);
		SweepCheck570->GetDlgItem(TSLbtnSpeed)->EnableWindow(TRUE);
		SweepCheck570->GetDlgItem(TSLBtn_Pause)->EnableWindow(FALSE);
		SweepCheck570->GetDlgItem(TSLBtn_ReStart)->EnableWindow(FALSE);
		SweepCheck570->GetDlgItem(TSLcmbTrigger_Source)->EnableWindow(TRUE);
		Check570->GetDlgItem(TSLBtn_SetATT)->EnableWindow(TRUE);
		Check570->GetDlgItem(TSLBtnAtt_value)->EnableWindow(TRUE);

	}
	else
	{
		// TSL-550 can't Control from LAN & USB
		// TSL-550不能从LAN和USB控制
		GetDlgItem(TSLrdiUSB)->EnableWindow(FALSE);
		GetDlgItem(TSLrdoLAN)->EnableWindow(FALSE);
		GetDlgItem(TSLtxtPort)->EnableWindow(FALSE);
		Check570->GetDlgItem(TSLbtnGetIP)->EnableWindow(FALSE);
		Check570->GetDlgItem(TSLbtnGetPort)->EnableWindow(FALSE);
		SweepCheck570->GetDlgItem(TSLbtnSpeed)->EnableWindow(FALSE);
		SweepCheck570->GetDlgItem(TSLBtn_Pause)->EnableWindow(TRUE);
		SweepCheck570->GetDlgItem(TSLBtn_ReStart)->EnableWindow(TRUE);
		SweepCheck570->GetDlgItem(TSLcmbTrigger_Source)->EnableWindow(FALSE);

	}
}


void TSL_Communication_Setting::OnBnClickedTslrdini488()
{
	CString resouce = "";
	GetDlgItem(TSLtxtaddressnum)->GetWindowText(resouce);
	GetDlgItem(TSLAddress)->SetWindowTextA(resouce);
}


void TSL_Communication_Setting::OnBnClickedTslrdinivisa()
{
	CString resouce = "";
	GetDlgItem(TSLtxtaddressnum)->GetWindowText(resouce);
	GetDlgItem(TSLAddress)->SetWindowTextA(resouce);
}


void TSL_Communication_Setting::OnBnClickedTsltslrdikysightvisa()
{
	CString resouce = "";
	GetDlgItem(TSLtxtaddressnum)->GetWindowText(resouce);
	GetDlgItem(TSLAddress)->SetWindowTextA(resouce);
}


void TSL_Communication_Setting::OnBnClickedTslrdo770()
{
	if (((CButton *)GetDlgItem(TSLrdo770))->GetCheck())
	{
		// TSL-770
		GetDlgItem(TSLrdiUSB)->EnableWindow(TRUE);
		GetDlgItem(TSLrdoLAN)->EnableWindow(TRUE);
		Check570->GetDlgItem(TSLbtnGetIP)->EnableWindow(TRUE);
		Check570->GetDlgItem(TSLbtnGetPort)->EnableWindow(TRUE);
		SweepCheck570->GetDlgItem(TSLbtnSpeed)->EnableWindow(TRUE);
		SweepCheck570->GetDlgItem(TSLBtn_Pause)->EnableWindow(FALSE);
		SweepCheck570->GetDlgItem(TSLBtn_ReStart)->EnableWindow(FALSE);
		SweepCheck570->GetDlgItem(TSLcmbTrigger_Source)->EnableWindow(TRUE);
		Check570->GetDlgItem(TSLBtn_SetATT)->EnableWindow(FALSE);
		Check570->GetDlgItem(TSLBtnAtt_value)->EnableWindow(FALSE);
	}
	else
	{
		// TSL-550 can't Control from LAN & USB
		// TSL-550不能从LAN和USB控制
		GetDlgItem(TSLrdiUSB)->EnableWindow(FALSE);
		GetDlgItem(TSLrdoLAN)->EnableWindow(FALSE);
		GetDlgItem(TSLtxtPort)->EnableWindow(FALSE);
		Check570->GetDlgItem(TSLbtnGetIP)->EnableWindow(FALSE);
		Check570->GetDlgItem(TSLbtnGetPort)->EnableWindow(FALSE);
		SweepCheck570->GetDlgItem(TSLbtnSpeed)->EnableWindow(FALSE);
		SweepCheck570->GetDlgItem(TSLBtn_Pause)->EnableWindow(TRUE);
		SweepCheck570->GetDlgItem(TSLBtn_ReStart)->EnableWindow(TRUE);
		SweepCheck570->GetDlgItem(TSLcmbTrigger_Source)->EnableWindow(FALSE);
		Check570->GetDlgItem(TSLBtn_SetATT)->EnableWindow(TRUE);
		Check570->GetDlgItem(TSLBtnAtt_value)->EnableWindow(TRUE);
	}
}


