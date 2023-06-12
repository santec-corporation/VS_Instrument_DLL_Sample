// OSUSample_Class.cpp : 实现文件
//

#include "stdafx.h"
#include "Instrument_DLL_Sample_MFC.h"
#include "OSUSample_Class.h"
#include "afxdialogex.h"
#include <vector>
#include <string>
using namespace std;


// OSUSample_Class 对话框

IMPLEMENT_DYNAMIC(OSUSample_Class, CDialogEx)

OSUSample_Class::OSUSample_Class(CWnd* pParent /*=NULL*/)
	: CDialogEx(OSUSample, pParent)
{

}

OSUSample_Class::~OSUSample_Class()
{
}

void OSUSample_Class::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, OSUcmbosu_usb, usb_resource);
	DDX_Control(pDX, OSUcmbdevname, dev_resource);
}


BEGIN_MESSAGE_MAP(OSUSample_Class, CDialogEx)
	ON_BN_CLICKED(OSU110, &OSUSample_Class::OnBnClickedOsu110)
	ON_BN_CLICKED(OSUrdo100, &OSUSample_Class::OnBnClickedOsurdo100)
	ON_BN_CLICKED(OSUBtnConnect, &OSUSample_Class::OnBnClickedOsubtnconnect)
	ON_BN_CLICKED(OSUBtnDisConnect, &OSUSample_Class::OnBnClickedOsubtndisconnect)
	ON_BN_CLICKED(OSUBtnSwitch, &OSUSample_Class::OnBnClickedOsubtnswitch)
	ON_BN_CLICKED(OSUrdiLAN, &OSUSample_Class::OnBnClickedOsurdilan)
END_MESSAGE_MAP()


// OSUSample_Class 消息处理程序

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

BOOL OSUSample_Class::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char* &, char* &);
		pFunc Func_OSU_Load = (pFunc)GetProcAddress(hInst, "OSU_Load");
		if (Func_OSU_Load)
		{
			char* usb = "";
			char* dev = "";

			Func_OSU_Load(usb, dev);
			string usbs = usb;
			int cnt = usbs.find(_T(","));
			if (cnt >= 0) {
				vector<string> obj = split(usb, ",");
				for (int i = 0; i < obj.size(); i++) {
					string str1 = obj.at(i);
					usb_resource.AddString(CString(str1.c_str()));
				}
			}
			else {
				usb_resource.AddString(usb);
			}
			string devs = dev;
			cnt = devs.find(_T(","));
			if (cnt >= 0) {
				vector<string> obj = split(dev, ",");
				for (int i = 0; i < obj.size(); i++) {
					string str1 = obj.at(i);
					dev_resource.AddString(CString(str1.c_str()));
				}
			}
			else {
				dev_resource.AddString(dev);
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

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void OSUSample_Class::OnBnClickedOsu110()
{
	if (((CButton *)GetDlgItem(OSU110))->GetCheck())
	{
		GetDlgItem(OSUrdiNI488)->EnableWindow(TRUE);
		GetDlgItem(OSUrdovisa)->EnableWindow(TRUE);
		GetDlgItem(OSUrdokeysightvisa)->EnableWindow(TRUE);
		GetDlgItem(OSUrdiLAN)->EnableWindow(TRUE);
		GetDlgItem(OSUrdiUSB)->EnableWindow(TRUE);
		GetDlgItem(OSUtxtaddress)->EnableWindow(TRUE);
		GetDlgItem(OSUtxtPort)->EnableWindow(TRUE);
		GetDlgItem(OSUcmbosu_usb)->EnableWindow(TRUE);
		GetDlgItem(OSUcmbdevname)->EnableWindow(false);
	}
	else
	{
		GetDlgItem(OSUrdiNI488)->EnableWindow(false);
		GetDlgItem(OSUrdovisa)->EnableWindow(false);
		GetDlgItem(OSUrdokeysightvisa)->EnableWindow(false);
		GetDlgItem(OSUrdiLAN)->EnableWindow(false);
		GetDlgItem(OSUrdiUSB)->EnableWindow(false);
		GetDlgItem(OSUtxtaddress)->EnableWindow(false);
		GetDlgItem(OSUtxtPort)->EnableWindow(false);
		GetDlgItem(OSUcmbosu_usb)->EnableWindow(false);
		GetDlgItem(OSUcmbdevname)->EnableWindow(TRUE);
	}
}

void OSUSample_Class::OnBnClickedOsurdo100()
{
	if (((CButton *)GetDlgItem(OSUrdo100))->GetCheck())
	{
		GetDlgItem(OSUrdiNI488)->EnableWindow(false);
		GetDlgItem(OSUrdovisa)->EnableWindow(false);
		GetDlgItem(OSUrdokeysightvisa)->EnableWindow(false);
		GetDlgItem(OSUrdiLAN)->EnableWindow(false);
		GetDlgItem(OSUrdiUSB)->EnableWindow(false);
		GetDlgItem(OSUtxtaddress)->EnableWindow(false);
		GetDlgItem(OSUtxtPort)->EnableWindow(false);
		GetDlgItem(OSUcmbosu_usb)->EnableWindow(false);
		GetDlgItem(OSUcmbdevname)->EnableWindow(TRUE);
	}
	else {
		GetDlgItem(OSUrdiNI488)->EnableWindow(TRUE);
		GetDlgItem(OSUrdovisa)->EnableWindow(TRUE);
		GetDlgItem(OSUrdokeysightvisa)->EnableWindow(TRUE);
		GetDlgItem(OSUrdiLAN)->EnableWindow(TRUE);
		GetDlgItem(OSUrdiUSB)->EnableWindow(TRUE);
		GetDlgItem(OSUtxtaddress)->EnableWindow(TRUE);
		GetDlgItem(OSUtxtPort)->EnableWindow(TRUE);
		GetDlgItem(OSUcmbosu_usb)->EnableWindow(TRUE);
		GetDlgItem(OSUcmbdevname)->EnableWindow(false);

	}
}


void OSUSample_Class::OnBnClickedOsubtnconnect()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{
		typedef void(*pFunc)(char*, char*, bool, bool, char*, bool, bool, char*, bool);
		pFunc Func_OSU_Connect = (pFunc)GetProcAddress(hInst, "OSU_Connect");
		if (Func_OSU_Connect)
		{
			char* Informations = "";

			CString address;
			CString port;
			CString usb;
			CString devname;

			GetDlgItem(OSUcmbdevname)->GetWindowText(devname);

			GetDlgItem(OSUtxtaddress)->GetWindowText(address);
			GetDlgItem(OSUtxtPort)->GetWindowText(port);
			GetDlgItem(OSUcmbosu_usb)->GetWindowText(usb);
			bool USB_Checked = ((CButton *)GetDlgItem(OSUrdiUSB))->GetCheck();
			bool LAN_Checked = ((CButton *)GetDlgItem(OSUrdiLAN))->GetCheck();
			bool kysightvisa_Checked = ((CButton *)GetDlgItem(OSUrdokeysightvisa))->GetCheck();
			bool NI488_Checked = ((CButton *)GetDlgItem(OSUrdiNI488))->GetCheck();
			bool rdo110_Checked = ((CButton *)GetDlgItem(OSU110))->GetCheck();

			Func_OSU_Connect((LPSTR)(LPCSTR)devname, (LPSTR)(LPCSTR)address, USB_Checked, LAN_Checked, (LPSTR)(LPCSTR)port, kysightvisa_Checked, NI488_Checked, (LPSTR)(LPCSTR)usb, rdo110_Checked);
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


void OSUSample_Class::OnBnClickedOsubtndisconnect()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)();
		pFunc Func_OSU_DisConnect = (pFunc)GetProcAddress(hInst, "OSU_DisConnect");
		if (Func_OSU_DisConnect)
		{
			Func_OSU_DisConnect();
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


void OSUSample_Class::OnBnClickedOsubtnswitch()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char*);
		pFunc Func_OSU_Set_Switch = (pFunc)GetProcAddress(hInst, "OSU_Set_Switch");
		if (Func_OSU_Set_Switch)
		{
			CString ch;
			GetDlgItem(OSUcmbch)->GetWindowText(ch);

			Func_OSU_Set_Switch((LPSTR)(LPCSTR)ch);

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


void OSUSample_Class::OnBnClickedOsurdilan()
{
	if (((CButton *)GetDlgItem(rdoLAN))->GetCheck())
	{
		GetDlgItem(txtPort)->SetWindowText("5000");
	}
	else
	{
		GetDlgItem(txtPort)->SetWindowText("");
	}
}
