#pragma once

#include "MPM_Communication_Setting.h"
#include "MPM_Normal_function.h"
#include "MPM_Logging1.h"
#include "MPM_Logging2.h"
#include "afxcmn.h"

// MPMSample_Class 对话框

class MPMSample_Class : public CDialogEx
{
	DECLARE_DYNAMIC(MPMSample_Class)

public:
	MPMSample_Class(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~MPMSample_Class();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = MPMSample };
#endif
public:
	//TAB	
	MPM_Communication_Setting m_tabDlg1;
	MPM_Normal_function m_tabDlg2;
	MPM_Logging1 m_tabDlg3;
	MPM_Logging2 m_tabDlg4;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	CTabCtrl m_tab_mainDlg_ct;
	afx_msg void OnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
};
