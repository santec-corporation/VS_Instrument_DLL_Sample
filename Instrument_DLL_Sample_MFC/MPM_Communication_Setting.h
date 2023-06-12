#pragma once
#include "afxwin.h"


// MPM_Communication_Setting 对话框

class MPM_Communication_Setting : public CDialog
{
	DECLARE_DYNAMIC(MPM_Communication_Setting)

public:
	MPM_Communication_Setting(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~MPM_Communication_Setting();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = MPM_Communication_Setting_Form };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedbtnvisa();
	CComboBox visaresouce;
	afx_msg void OnBnClickedbtnsplit();
	afx_msg void OnBnClickedresouce();
	CComboBox portname;
	afx_msg void OnBnClickedBtnconnect();
	afx_msg void OnBnClickedBtndisconnect();
	afx_msg void OnBnClickedrdo488();
	afx_msg void OnBnClickedrdovisa();
	afx_msg void OnBnClickedrdokeysightvisa();
	afx_msg void OnBnClickedrdolan();
	afx_msg void OnBnClickedrdo232c();
};
