// MPM_Communication_Setting.cpp : 实现文件
//

#include "stdafx.h"
#include "Instrument_DLL_Sample_MFC.h"
#include "MPM_Communication_Setting.h"
#include "afxdialogex.h"
#include <vector>
#include <string>
using namespace std;


// MPM_Communication_Setting 对话框

IMPLEMENT_DYNAMIC(MPM_Communication_Setting, CDialog)

MPM_Communication_Setting::MPM_Communication_Setting(CWnd* pParent /*=NULL*/)
	: CDialog(MPM_Communication_Setting_Form, pParent)
{

}

MPM_Communication_Setting::~MPM_Communication_Setting()
{
}

void MPM_Communication_Setting::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, MPMcmbvisaresouce, visaresouce);
	DDX_Control(pDX, MPMcmbcomport, portname);
}


BEGIN_MESSAGE_MAP(MPM_Communication_Setting, CDialog)
	ON_BN_CLICKED(MPMbtnVisa, &MPM_Communication_Setting::OnBnClickedbtnvisa)
	ON_BN_CLICKED(MPMbtnSplit, &MPM_Communication_Setting::OnBnClickedbtnsplit)
	ON_BN_CLICKED(MPMbtnUsb_resouce, &MPM_Communication_Setting::OnBnClickedresouce)
	ON_BN_CLICKED(MPMBtnConnect, &MPM_Communication_Setting::OnBnClickedBtnconnect)
	ON_BN_CLICKED(MPMBtnDisConnect, &MPM_Communication_Setting::OnBnClickedBtndisconnect)
	ON_BN_CLICKED(MPMrdo488, &MPM_Communication_Setting::OnBnClickedrdo488)
	ON_BN_CLICKED(MPMrdovisa, &MPM_Communication_Setting::OnBnClickedrdovisa)
	ON_BN_CLICKED(MPMrdokeysightvisa, &MPM_Communication_Setting::OnBnClickedrdokeysightvisa)
	ON_BN_CLICKED(MPMrdoLAN, &MPM_Communication_Setting::OnBnClickedrdolan)
	ON_BN_CLICKED(MPMrdo232C, &MPM_Communication_Setting::OnBnClickedrdo232c)
END_MESSAGE_MAP()


// MPM_Communication_Setting 消息处理程序
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


void MPM_Communication_Setting::OnBnClickedbtnvisa()
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
			string SPU = txt;
			int cnt = SPU.find(_T(","));
			if (cnt >= 0) {
				vector<string> obj = split(txt, ",");
				for (int i = 0; i < obj.size(); i++) {
					string str1 = obj.at(i);
					visaresouce.AddString(CString(str1.c_str()));
				}
			}
			else {
				visaresouce.AddString(txt);
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


void MPM_Communication_Setting::OnBnClickedbtnsplit()
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

			visaresouce.GetLBText(visaresouce.GetCurSel(), resouce);

			Func_GetSplit((LPSTR)(LPCSTR)resouce, boad, address);
			GetDlgItem(MPMtxtboard_num)->SetWindowTextA(boad);
			GetDlgItem(MPMtxtsp_add)->SetWindowTextA(address);
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


void MPM_Communication_Setting::OnBnClickedresouce()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char* &);
		pFunc Func_Get_Comportresouce = (pFunc)GetProcAddress(hInst, "Get_Comportresouce");
		if (Func_Get_Comportresouce)
		{
			char* txt = "";
			Func_Get_Comportresouce(txt);
			string SPU = txt;
			int cnt = SPU.find(_T(","));
			if (cnt >= 0) {
				vector<string> obj = split(txt, ",");
				for (int i = 0; i < obj.size(); i++) {
					string str1 = obj.at(i);
					portname.AddString(CString(str1.c_str()));
				}
			}
			else {
				portname.AddString(txt);
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


void MPM_Communication_Setting::OnBnClickedBtnconnect()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char* &, char*, char*, bool, bool, char*, bool, bool, char* &, char* &, char* &);
		pFunc Func_MPM_Connect = (pFunc)GetProcAddress(hInst, "MPM_Connect");
		if (Func_MPM_Connect)
		{
			char* Informations = "";
			char* lbl_types = "";
			char* lbl_sns = "";
			char* lbl_versions = "";

			CString address;
			CString port;
			CString Board;

			GetDlgItem(MPMtxtaddress)->GetWindowText(address);
			GetDlgItem(MPMtxtPort)->GetWindowText(port);
			GetDlgItem(MPMtxtboard_num)->GetWindowText(Board);
			if (Board == "")
			{
				Board = "0";
			}

			bool USB_Checked = ((CButton *)GetDlgItem(MPMrdo232C))->GetCheck();
			bool LAN_Checked = ((CButton *)GetDlgItem(MPMrdoLAN))->GetCheck();
			bool kysightvisa_Checked = ((CButton *)GetDlgItem(MPMrdokeysightvisa))->GetCheck();
			bool NI488_Checked = ((CButton *)GetDlgItem(MPMrdo488))->GetCheck();

			Func_MPM_Connect(Informations, (LPSTR)(LPCSTR)address, (LPSTR)(LPCSTR)Board, USB_Checked, LAN_Checked, (LPSTR)(LPCSTR)port, kysightvisa_Checked, NI488_Checked, lbl_types, lbl_sns, lbl_versions);
			string Str = Informations;
			int cnt = Str.find(_T(","));
			if (cnt >= 0)
			{
				vector<string> obj = split(Informations, ",");
				GetDlgItem(MPMlblproduct)->SetWindowTextA(CString(obj.at(0).c_str()));
				GetDlgItem(MPMlblserial)->SetWindowTextA(CString(obj.at(1).c_str()));
				GetDlgItem(MPMlblversion)->SetWindowTextA(CString(obj.at(2).c_str()));
				GetDlgItem(MPMlblmodulecount)->SetWindowTextA(CString(obj.at(3).c_str()));
			}
			else
			{
				GetDlgItem(MPMlblproduct)->SetWindowTextA("");
				GetDlgItem(MPMlblserial)->SetWindowTextA("");
				GetDlgItem(MPMlblversion)->SetWindowTextA("");
				GetDlgItem(MPMlblmodulecount)->SetWindowTextA("");
			}
			string Str1 = lbl_types;
			cnt = Str.find(_T(","));
			if (cnt >= 0)
			{
				vector<string> obj = split(Str1, ",");
				GetDlgItem(MPMlbltype0)->SetWindowTextA(CString(obj.at(0).c_str()));
				GetDlgItem(MPMlbltype1)->SetWindowTextA(CString(obj.at(1).c_str()));
				GetDlgItem(MPMlbltype2)->SetWindowTextA(CString(obj.at(2).c_str()));
				GetDlgItem(MPMlbltype3)->SetWindowTextA(CString(obj.at(3).c_str()));
				GetDlgItem(MPMlbltype4)->SetWindowTextA(CString(obj.at(4).c_str()));
			}
			else
			{
				GetDlgItem(MPMlbltype0)->SetWindowTextA("");
				GetDlgItem(MPMlbltype1)->SetWindowTextA("");
				GetDlgItem(MPMlbltype2)->SetWindowTextA("");
				GetDlgItem(MPMlbltype3)->SetWindowTextA("");
				GetDlgItem(MPMlbltype4)->SetWindowTextA("");

			}
			string Str2 = lbl_sns;
			cnt = Str.find(_T(","));
			if (cnt >= 0)
			{
				vector<string> obj = split(Str2, ",");
				GetDlgItem(MPMlblseri0)->SetWindowTextA(CString(obj.at(0).c_str()));
				GetDlgItem(MPMlblseri1)->SetWindowTextA(CString(obj.at(1).c_str()));
				GetDlgItem(MPMlblseri2)->SetWindowTextA(CString(obj.at(2).c_str()));
				GetDlgItem(MPMlblseri3)->SetWindowTextA(CString(obj.at(3).c_str()));
				GetDlgItem(MPMlblseri4)->SetWindowTextA(CString(obj.at(4).c_str()));
			}
			else
			{
				GetDlgItem(MPMlblseri0)->SetWindowTextA("");
				GetDlgItem(MPMlblseri1)->SetWindowTextA("");
				GetDlgItem(MPMlblseri2)->SetWindowTextA("");
				GetDlgItem(MPMlblseri3)->SetWindowTextA("");
				GetDlgItem(MPMlblseri4)->SetWindowTextA("");

			}

			string Str3 = lbl_versions;
			cnt = Str.find(_T(","));
			if (cnt >= 0)
			{
				vector<string> obj = split(Str3, ",");
				GetDlgItem(MPMlblver0)->SetWindowTextA(CString(obj.at(0).c_str()));
				GetDlgItem(MPMlblver1)->SetWindowTextA(CString(obj.at(1).c_str()));
				GetDlgItem(MPMlblver2)->SetWindowTextA(CString(obj.at(2).c_str()));
				GetDlgItem(MPMlblver3)->SetWindowTextA(CString(obj.at(3).c_str()));
				GetDlgItem(MPMlblver4)->SetWindowTextA(CString(obj.at(4).c_str()));
			}
			else
			{
				GetDlgItem(MPMlblver0)->SetWindowTextA("");
				GetDlgItem(MPMlblver1)->SetWindowTextA("");
				GetDlgItem(MPMlblver2)->SetWindowTextA("");
				GetDlgItem(MPMlblver3)->SetWindowTextA("");
				GetDlgItem(MPMlblver4)->SetWindowTextA("");
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


void MPM_Communication_Setting::OnBnClickedBtndisconnect()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)();
		pFunc Func_MPM_DisConnect = (pFunc)GetProcAddress(hInst, "MPM_DisConnect");
		if (Func_MPM_DisConnect)
		{
			Func_MPM_DisConnect();
			GetDlgItem(MPMlblproduct)->SetWindowTextA("");
			GetDlgItem(MPMlblserial)->SetWindowTextA("");
			GetDlgItem(MPMlblversion)->SetWindowTextA("");
			GetDlgItem(MPMlblmodulecount)->SetWindowTextA("");
			GetDlgItem(MPMlbltype0)->SetWindowTextA("");
			GetDlgItem(MPMlbltype1)->SetWindowTextA("");
			GetDlgItem(MPMlbltype2)->SetWindowTextA("");
			GetDlgItem(MPMlbltype3)->SetWindowTextA("");
			GetDlgItem(MPMlbltype4)->SetWindowTextA("");
			GetDlgItem(MPMlblseri0)->SetWindowTextA("");
			GetDlgItem(MPMlblseri1)->SetWindowTextA("");
			GetDlgItem(MPMlblseri2)->SetWindowTextA("");
			GetDlgItem(MPMlblseri3)->SetWindowTextA("");
			GetDlgItem(MPMlblseri4)->SetWindowTextA("");
			GetDlgItem(MPMlblver0)->SetWindowTextA("");
			GetDlgItem(MPMlblver1)->SetWindowTextA("");
			GetDlgItem(MPMlblver2)->SetWindowTextA("");
			GetDlgItem(MPMlblver3)->SetWindowTextA("");
			GetDlgItem(MPMlblver4)->SetWindowTextA("");

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


void MPM_Communication_Setting::OnBnClickedrdo488()
{
	GetDlgItem(MPMtxtPort)->EnableWindow(false);
	CString resouce = "";
	GetDlgItem(MPMtxtsp_add)->GetWindowText(resouce);
	GetDlgItem(MPMtxtaddress)->SetWindowTextA(resouce);
}


void MPM_Communication_Setting::OnBnClickedrdovisa()
{
	GetDlgItem(MPMtxtPort)->EnableWindow(false);
	CString resouce = "";
	GetDlgItem(MPMtxtsp_add)->GetWindowText(resouce);
	GetDlgItem(MPMtxtaddress)->SetWindowTextA(resouce);
}


void MPM_Communication_Setting::OnBnClickedrdokeysightvisa()
{
	GetDlgItem(MPMtxtPort)->EnableWindow(false);
	CString resouce = "";
	GetDlgItem(MPMtxtsp_add)->GetWindowText(resouce);
	GetDlgItem(MPMtxtaddress)->SetWindowTextA(resouce);
}


void MPM_Communication_Setting::OnBnClickedrdolan()
{
	GetDlgItem(MPMtxtPort)->EnableWindow(true);
	GetDlgItem(MPMtxtPort)->SetWindowText("5000");

}


void MPM_Communication_Setting::OnBnClickedrdo232c()
{
	GetDlgItem(MPMtxtPort)->EnableWindow(false);
	CString resouce = "";
	GetDlgItem(MPMcmbcomport)->GetWindowText(resouce);
	GetDlgItem(MPMtxtaddress)->SetWindowTextA(resouce);
}
