// PCUSample_Class.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Instrument_DLL_Sample_MFC.h"
#include "PCUSample_Class.h"
#include "afxdialogex.h"

#include <vector>
#include <string>
using namespace std;

// PCUSample_Class �Ի���

IMPLEMENT_DYNAMIC(PCUSample_Class, CDialogEx)

PCUSample_Class::PCUSample_Class(CWnd* pParent /*=NULL*/)
	: CDialogEx(PCUSample, pParent)
{

}

PCUSample_Class::~PCUSample_Class()
{
}

void PCUSample_Class::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, PCUcmbgpib_resouce, gpib_resouce);
	DDX_Control(pDX, PCUcmbusbresouce, usbresouce);
	DDX_Control(pDX, PCUcmb100controlid, deviceID);
	DDX_Control(pDX, PCUcmbsop, sop);
}


BEGIN_MESSAGE_MAP(PCUSample_Class, CDialogEx)
	ON_BN_CLICKED(PCUBtnConnect, &PCUSample_Class::OnBnClickedPcubtnconnect)
	ON_BN_CLICKED(PCUBtnDisConnect, &PCUSample_Class::OnBnClickedPcubtndisconnect)
	ON_BN_CLICKED(PCUbtnGetIP, &PCUSample_Class::OnBnClickedPcubtngetip)
	ON_BN_CLICKED(PCUbtnGetPort, &PCUSample_Class::OnBnClickedPcubtngetport)
	ON_BN_CLICKED(PCUrdo100, &PCUSample_Class::OnBnClickedPcurdo100)
	ON_BN_CLICKED(PCUrdo110, &PCUSample_Class::OnBnClickedPcurdo110)
	ON_BN_CLICKED(PCUrdoLAN, &PCUSample_Class::OnBnClickedPcurdolan)
	ON_BN_CLICKED(PCUrdousb, &PCUSample_Class::OnBnClickedPcurdousb)
	ON_BN_CLICKED(PCUrdo488, &PCUSample_Class::OnBnClickedPcurdo488)
	ON_BN_CLICKED(PCUrdonivisa, &PCUSample_Class::OnBnClickedPcurdonivisa)
	ON_BN_CLICKED(PCUrdokeysightvisa, &PCUSample_Class::OnBnClickedPcurdokeysightvisa)
	ON_CBN_SELCHANGE(PCUcmbusbresouce, &PCUSample_Class::OnCbnSelchangePcucmbusbresouce)
	ON_CBN_SELCHANGE(PCUcmb100controlid, &PCUSample_Class::OnCbnSelchangePcucmb100controlid)
	ON_BN_CLICKED(PCUbtnAdjust_Range, &PCUSample_Class::OnBnClickedPCUAdjustRange)
	ON_BN_CLICKED(PCUbtnGet_resouce, &PCUSample_Class::OnBnClickedPCUGet_resouce)
	ON_BN_CLICKED(PCUbtnUsb_resouce, &PCUSample_Class::OnBnClickedPCUUsb_resouce)
	ON_BN_CLICKED(PCUbtnControl_ID, &PCUSample_Class::OnBnClickedPCUId)
	ON_BN_CLICKED(PCUbtnSet_SOP, &PCUSample_Class::OnBnClickedPCUSop)
	ON_BN_CLICKED(PCUbtnGet_Range, &PCUSample_Class::OnBnClickedPCURange)
END_MESSAGE_MAP()


// PCUSample_Class ��Ϣ��������
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


void PCUSample_Class::OnBnClickedPcubtnsplit()
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

			gpib_resouce.GetLBText(gpib_resouce.GetCurSel(), resouce);

			Func_GetSplit((LPSTR)(LPCSTR)resouce, boad, address);
			GetDlgItem(PCUtxtboad)->SetWindowTextA(boad);
			GetDlgItem(PCUtxtaddressnum)->SetWindowTextA(address);
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


void PCUSample_Class::OnBnClickedPcubtnconnect()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{
		typedef void(*pFunc)(char* &, char*, char*, bool, bool, char*, bool, bool, bool, bool, char*, bool);
		pFunc Func_PCU_Connect = (pFunc)GetProcAddress(hInst, "PCU_Connect");
		if (Func_PCU_Connect)
		{
			char* Informations = "";

			CString address;
			CString port;
			CString id;
			CString Board;

			GetDlgItem(PCUtxtaddress)->GetWindowText(address);
			GetDlgItem(PCUtxtport)->GetWindowText(port);
			GetDlgItem(PCUtxt100controlid)->GetWindowText(id);
			GetDlgItem(PCUtxtboad)->GetWindowText(Board);
			if (Board == "")
			{
				Board = "0";
			}

			bool USB_Checked = ((CButton *)GetDlgItem(PCUrdousb))->GetCheck();
			bool LAN_Checked = ((CButton *)GetDlgItem(PCUrdoLAN))->GetCheck();
			bool kysightvisa_Checked = ((CButton *)GetDlgItem(PCUrdokeysightvisa))->GetCheck();
			bool NI488_Checked = ((CButton *)GetDlgItem(PCUrdo488))->GetCheck();
			bool Cr_Checked = ((CButton *)GetDlgItem(PCUrdocr))->GetCheck();
			bool Lf_Checked = ((CButton *)GetDlgItem(PCUrdolf))->GetCheck();
			bool rdo100_Checked = ((CButton *)GetDlgItem(PCUrdo100))->GetCheck();

			Func_PCU_Connect(Informations, (LPSTR)(LPCSTR)address, (LPSTR)(LPCSTR)Board, USB_Checked, LAN_Checked, (LPSTR)(LPCSTR)port, kysightvisa_Checked, NI488_Checked, Cr_Checked, Lf_Checked, (LPSTR)(LPCSTR)id, rdo100_Checked);

			string Str = Informations;
			int cnt = Str.find(_T(","));
			if (cnt >= 0)
			{
				vector<string> obj = split(Informations, ",");
				GetDlgItem(PCUlblprduct)->SetWindowTextA(CString(obj.at(0).c_str()));
				GetDlgItem(PCUlblserial)->SetWindowTextA(CString(obj.at(1).c_str()));
				GetDlgItem(PCUlblversion)->SetWindowTextA(CString(obj.at(2).c_str()));
				GetDlgItem(PCUlblwavelength)->SetWindowTextA(CString(obj.at(3).c_str()));
				if (CString(obj.at(0).c_str()) == "PCU-110")
				{
					sop.AddString("LVP");
					sop.AddString("LHP");
					sop.AddString("LP45");
					sop.AddString("LN45");
					sop.AddString("RCP");
					sop.AddString("LCP");
				}
				else
				{
					sop.AddString("LVP");
					sop.AddString("LHP");
					sop.AddString("LP45");
					sop.AddString("RCP");
				}
			}
			else
			{
				GetDlgItem(PCUlblprduct)->SetWindowTextA("");
				GetDlgItem(PCUlblserial)->SetWindowTextA("");
				GetDlgItem(PCUlblversion)->SetWindowTextA("");
				GetDlgItem(PCUlblwavelength)->SetWindowTextA("");
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


void PCUSample_Class::OnBnClickedPcubtndisconnect()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)();
		pFunc Func_PCU_DisConnect = (pFunc)GetProcAddress(hInst, "PCU_DisConnect");
		if (Func_PCU_DisConnect)
		{
			Func_PCU_DisConnect();
			GetDlgItem(PCUlblprduct)->SetWindowTextA("");
			GetDlgItem(PCUlblserial)->SetWindowTextA("");
			GetDlgItem(PCUlblversion)->SetWindowTextA("");
			GetDlgItem(PCUlblwavelength)->SetWindowTextA("");

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


void PCUSample_Class::OnBnClickedPcubtngetip()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{
		typedef void(*pFunc)(char*&);
		pFunc Func_PCU_Get_IP = (pFunc)GetProcAddress(hInst, "PCU_Get_IP");
		if (Func_PCU_Get_IP)
		{
			char* ip;
			Func_PCU_Get_IP(ip);
			GetDlgItem(PCUtxtip_add)->SetWindowText(ip);
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


void PCUSample_Class::OnBnClickedPcubtngetport()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{
		typedef void(*pFunc)(char*&);
		pFunc Func_PCU_Get_Port = (pFunc)GetProcAddress(hInst, "PCU_Get_Port");
		if (Func_PCU_Get_Port)
		{
			char* port;
			Func_PCU_Get_Port(port);
			GetDlgItem(PCUtxtlan_port)->SetWindowText(port);
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


void PCUSample_Class::OnBnClickedPcurdo100()
{
	// ------------------------------------------------
	// target PCU-100 checked
	// ѡ��Ŀ��ΪPCU-100
	// ------------------------------------------------

	if (((CButton *)GetDlgItem(PCUrdo100))->GetCheck())
	{
		// PCU-100 can't Control from LAN & USB
		// PCU-100���ܴ�LAN��USB����
		// PCU-100 need to  device number of DAQ
		// PCU-100��Ҫ�豸��DAQ���
		GetDlgItem(PCUtxt100controlid)->EnableWindow(TRUE);
		GetDlgItem(PCUtxtport)->EnableWindow(false);
		GetDlgItem(PCUrdoLAN)->EnableWindow(false);
		GetDlgItem(PCUrdousb)->EnableWindow(false);
	}
}


void PCUSample_Class::OnBnClickedPcurdo110()
{
		// -------------------------------------------------
	// target PCU-110 Checked
	// ѡ��Ŀ��ΪPCU-110
	// 
	// PCU-110 can control from LAN & USB & GPIB
	// PCU-110����ͨ��LAN��USB��GPIB���п���
	// PCU-110 not need to device number of DAQ
	// PCU-110����Ҫ�豸��DAQ���
	// -------------------------------------------------
	if (((CButton *)GetDlgItem(PCUrdo110))->GetCheck())
	{
		// PCU-100 can't Control from LAN & USB
		// PCU-100���ܴ�LAN��USB����
		// PCU-100 need to  device number of DAQ
		// PCU-100��Ҫ�豸��DAQ���
		GetDlgItem(PCUtxt100controlid)->EnableWindow(false);
		GetDlgItem(PCUrdoLAN)->EnableWindow(TRUE);
		GetDlgItem(PCUrdousb)->EnableWindow(TRUE);
	}
}


void PCUSample_Class::OnBnClickedPcurdolan()
{
	// --------------------------------------------------------------
	// LAN Commnuncation Checked
	// ѡ�� LAN ͨѶ
	// --------------------------------------------------------------

	// LAN communication can control ONLY PCU-110
	// LANͨѶֻ�ܿ���PCU-110
	if (((CButton *)GetDlgItem(PCUrdoLAN))->GetCheck())
	{
		GetDlgItem(PCUrdolf)->EnableWindow(TRUE);
		GetDlgItem(PCUrdocrlf)->EnableWindow(TRUE);
		GetDlgItem(PCUtxt100controlid)->EnableWindow(false);
		GetDlgItem(PCUtxtport)->EnableWindow(TRUE);
		GetDlgItem(PCUrdocrlf)->EnableWindow(TRUE);
	}
}


void PCUSample_Class::OnBnClickedPcurdousb()
{
	// --------------------------------------------------------------
	// USB communcation checked
	// ѡ��USB ͨѶ
	// --------------------------------------------------------------

	// USB can control Only PCU-110
	// USBֻ�ܿ���PCU-110
	if (((CButton *)GetDlgItem(PCUrdousb))->GetCheck())
	{
		CString resouce = "";
		GetDlgItem(PCUtxtdev_num)->GetWindowText(resouce);
		GetDlgItem(PCUtxtaddress)->SetWindowTextA(resouce);
		GetDlgItem(PCUrdolf)->EnableWindow(false);
		GetDlgItem(PCUrdocrlf)->EnableWindow(false);
	}
}


void PCUSample_Class::OnBnClickedPcurdo488()
{
	// -----------------------------------------------------
	// 488.2��checked
	// ѡ�� 488.2
	// -----------------------------------------------------
	if (((CButton *)GetDlgItem(PCUrdo488))->GetCheck())
	{
		CString resouce = "";
		GetDlgItem(PCUtxtaddressnum)->GetWindowText(resouce);
		GetDlgItem(PCUtxtaddress)->SetWindowTextA(resouce);
		GetDlgItem(PCUrdolf)->EnableWindow(TRUE);
		GetDlgItem(PCUrdocrlf)->EnableWindow(TRUE);
		GetDlgItem(PCUrdocr)->EnableWindow(TRUE);
	}
}


void PCUSample_Class::OnBnClickedPcurdonivisa()
{
	// ----------------------------------------------------
	// NI Visa Communication Checked
	// ѡ�� NI Visa ͨѶ 
	// ----------------------------------------------------
	if (((CButton *)GetDlgItem(PCUrdonivisa))->GetCheck())
	{
		CString resouce = "";
		GetDlgItem(PCUtxtaddressnum)->GetWindowText(resouce);
		GetDlgItem(PCUtxtaddress)->SetWindowTextA(resouce);
		GetDlgItem(PCUrdolf)->EnableWindow(TRUE);
		GetDlgItem(PCUrdocrlf)->EnableWindow(TRUE);
		GetDlgItem(PCUrdocr)->EnableWindow(TRUE);
	}
}


void PCUSample_Class::OnBnClickedPcurdokeysightvisa()
{
	// ----------------------------------------------------
	// keysigth visa communication checked
	// ѡ��keysigth visa ͨѶ
	// ----------------------------------------------------
	if (((CButton *)GetDlgItem(PCUrdokeysightvisa))->GetCheck())
	{
		CString resouce = "";
		GetDlgItem(PCUtxtaddressnum)->GetWindowText(resouce);
		GetDlgItem(PCUtxtaddress)->SetWindowTextA(resouce);
		GetDlgItem(PCUrdolf)->EnableWindow(TRUE);
		GetDlgItem(PCUrdocrlf)->EnableWindow(TRUE);
		GetDlgItem(PCUrdocr)->EnableWindow(TRUE);
	}
}


void PCUSample_Class::OnCbnSelchangePcucmbusbresouce()
{
	// -------------------------------------------------------
	// Select usb  resouce & Show deveice number
	// ѡ��usb��Դ����ʾ�豸��
	// -------------------------------------------------------
	CString resouce = "";
	usbresouce.GetLBText(usbresouce.GetCurSel(), resouce);

	if (resouce == "")
		return;
	GetDlgItem(PCUtxtdev_num)->SetWindowTextA((LPSTR)(LPCSTR)usbresouce.GetCurSel());
}


void PCUSample_Class::OnCbnSelchangePcucmb100controlid()
{
	//------------------------------------------------
	//      Select control device number for PCU-100 
	//      ѡ��PCU-100�Ŀ����豸��
	//------------------------------------------------
	CString resouce = "";
	GetDlgItem(PCUcmb100controlid)->GetWindowTextA(resouce);

	if (resouce == "")
		return;
	GetDlgItem(PCUtxt100controlid)->SetWindowTextA(resouce);
}


void PCUSample_Class::OnBnClickedPCUAdjustRange()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)();
		pFunc Func_PCU_Adjust_Range = (pFunc)GetProcAddress(hInst, "PCU_Adjust_Range");
		if (Func_PCU_Adjust_Range)
		{
			Func_PCU_Adjust_Range();
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


void PCUSample_Class::OnBnClickedPCUGet_resouce()
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
					gpib_resouce.AddString(CString(str1.c_str()));
				}
			}
			else {
				gpib_resouce.AddString(txt);
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


void PCUSample_Class::OnBnClickedPCUUsb_resouce()
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
			string SPU = txt;
			int cnt = SPU.find(_T(","));
			if (cnt >= 0) {
				vector<string> obj = split(txt, ",");
				for (int i = 0; i < obj.size(); i++) {
					string str1 = obj.at(i);
					usbresouce.AddString(CString(str1.c_str()));
				}
			}
			else {
				usbresouce.AddString(txt);
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


void PCUSample_Class::OnBnClickedPCUId()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{
		typedef void(*pFunc)(char* &);
		pFunc Func_Get_Device_ID = (pFunc)GetProcAddress(hInst, "Get_Device_ID");
		if (Func_Get_Device_ID)
		{
			char* txt = "";
			Func_Get_Device_ID(txt);
			string SPU = txt;
			int cnt = SPU.find(_T(","));
			if (cnt >= 0) {
				vector<string> obj = split(txt, ",");
				for (int i = 0; i < obj.size(); i++) {
					string str1 = obj.at(i);
					usbresouce.AddString(CString(str1.c_str()));
				}
			}
			else {
				usbresouce.AddString(txt);
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


void PCUSample_Class::OnBnClickedPCUSop()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char*);
		pFunc Func_PCU_Set_SOP = (pFunc)GetProcAddress(hInst, "PCU_Set_SOP");
		if (Func_PCU_Set_SOP)
		{
			CString SOP;
			GetDlgItem(PCUcmbsop)->GetWindowText(SOP);

			Func_PCU_Set_SOP((LPSTR)(LPCSTR)SOP);

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


void PCUSample_Class::OnBnClickedPCURange()
{
	HINSTANCE hInst = LoadLibrary(_T("librayForMFCInstrument.dll"));
	if (hInst)
	{

		typedef void(*pFunc)(char*&);
		pFunc Func_PCU_Get_Range = (pFunc)GetProcAddress(hInst, "PCU_Get_Range");
		if (Func_PCU_Get_Range)
		{
			char* range;
			Func_PCU_Get_Range(range);
			GetDlgItem(PCUtxtcurrentrange)->SetWindowText(range);

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