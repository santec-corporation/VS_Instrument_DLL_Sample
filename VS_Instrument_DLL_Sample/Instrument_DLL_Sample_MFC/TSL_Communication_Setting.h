#pragma once
#include "afxwin.h"
#include "TSL_Normal_function.h"
#include "TSL_Sweep_function.h"

// TSL_Communication_Setting 对话框

class TSL_Communication_Setting : public CDialog
{
	DECLARE_DYNAMIC(TSL_Communication_Setting)

public:
	TSL_Communication_Setting(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~TSL_Communication_Setting();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = TSL_Communication_Setting_Form };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedVisa();
	CComboBox cmbgpib_resouces;
	afx_msg void OnBnClickedbtnsplit();
	afx_msg void OnBnClickedresouce();
	CComboBox cmbusbresouces;
	afx_msg void OnBnClickedBtnconnect();
	afx_msg void OnBnClickedBtndisconnect();
	afx_msg void OnBnClickedrdo550();
	afx_msg void OnBnClickedrdini488();
	afx_msg void OnCbnSelchangecmbusbresouce();
	afx_msg void OnBnClickedrdiusb();
	afx_msg void OnBnClickedrdolan();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedrdo570();
	afx_msg void OnBnClickedTslrdini488();
	afx_msg void OnBnClickedTslrdinivisa();
	afx_msg void OnBnClickedTsltslrdikysightvisa();
	TSL_Normal_function* Check570;
	TSL_Sweep_function* SweepCheck570;
	afx_msg void OnBnClickedTslrdo770();
	afx_msg void OnBnClickedrdo770();
};
