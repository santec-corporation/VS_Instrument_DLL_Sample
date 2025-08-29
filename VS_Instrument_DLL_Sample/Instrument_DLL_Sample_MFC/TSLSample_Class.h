#pragma once
#include "TSL_Normal_function.h"
#include "TSL_Sweep_function.h"
#include "TSL_Communication_Setting.h"
#include "afxcmn.h"

// TSLSample_Class 对话框

class TSLSample_Class : public CDialogEx
{
	DECLARE_DYNAMIC(TSLSample_Class)

public:
	TSLSample_Class(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~TSLSample_Class();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = TSLSample };
#endif
public:
	//TAB	
	TSL_Communication_Setting m_tabDlg1;
	TSL_Normal_function m_tabDlg2;
	TSL_Sweep_function m_tabDlg3;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CTabCtrl m_tab_mainDlg_ct;
	virtual BOOL OnInitDialog();
	afx_msg void OnSelchangeTabcontrol1(NMHDR *pNMHDR, LRESULT *pResult);
};
