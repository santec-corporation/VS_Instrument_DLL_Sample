#pragma once
#include "afxwin.h"


// PCUSample_Class 对话框

class PCUSample_Class : public CDialogEx
{
	DECLARE_DYNAMIC(PCUSample_Class)

public:
	PCUSample_Class(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~PCUSample_Class();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = PCUSample };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedvisaresouce();
	CComboBox gpib_resouce;
	afx_msg void OnBnClickedbtnsplit();
	afx_msg void OnBnClickedresouce();
	CComboBox usbresouce;
	CComboBox deviceID;
	afx_msg void OnBnClickedId();
	afx_msg void OnBnClickedBtnconnect();
	CComboBox sop;
	afx_msg void OnBnClickedBtndisconnect();
	afx_msg void OnBnClickedSop();
	afx_msg void OnBnClickedadRange();
	afx_msg void OnBnClickedRange();
	afx_msg void OnBnClickedbtngetip();
	afx_msg void OnBnClickedbtngetport();
	afx_msg void OnCbnSelchangecmbusbresouce();
	afx_msg void OnCbnSelchangecmb100controlid();
	afx_msg void OnBnClickedrdo488();
	afx_msg void OnBnClickedrdonivisa();
	afx_msg void OnBnClickedrdokeysightvisa();
	afx_msg void OnBnClickedrdousb();
	afx_msg void OnBnClickedrdolanpcu();
	afx_msg void OnBnClickedrdo100();
	afx_msg void OnBnClickedrdo110();
	afx_msg void OnBnClickedPcubtnsplit();
	afx_msg void OnBnClickedPcubtnconnect();
	afx_msg void OnBnClickedPcubtndisconnect();
	afx_msg void OnBnClickedPcubtngetip();
	afx_msg void OnBnClickedPcubtngetport();
	afx_msg void OnBnClickedPcurdo100();
	afx_msg void OnBnClickedPcurdo110();
	afx_msg void OnBnClickedPcurdolan();
	afx_msg void OnBnClickedPcurdousb();
	afx_msg void OnBnClickedPcurdo488();
	afx_msg void OnBnClickedPcurdonivisa();
	afx_msg void OnBnClickedPcurdokeysightvisa();
	afx_msg void OnCbnSelchangePcucmbusbresouce();
	afx_msg void OnCbnSelchangePcucmb100controlid();
	afx_msg void OnBnClickedPCUAdjustRange();
	afx_msg void OnBnClickedPCUGet_resouce();
	afx_msg void OnBnClickedPCUUsb_resouce();
	afx_msg void OnBnClickedPCUId();
	afx_msg void OnBnClickedPCUSop();
	afx_msg void OnBnClickedPCURange();
};
