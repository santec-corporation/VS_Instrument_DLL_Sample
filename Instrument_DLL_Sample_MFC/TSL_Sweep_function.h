#pragma once
#include "afxwin.h"


// TSL_Sweep_function 对话框

class TSL_Sweep_function : public CDialog
{
	DECLARE_DYNAMIC(TSL_Sweep_function)

public:
	TSL_Sweep_function(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~TSL_Sweep_function();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = TSL_Sweep_function_Form};
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedSetwavelength();
	afx_msg void OnBnClickedOther();
	afx_msg void OnBnClickedsetting();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedStatus();
	afx_msg void OnBnClickedMinstep();
	CComboBox speed;
	afx_msg void OnBnClickedbtnspeed();
	afx_msg void OnBnClickedStart();
	afx_msg void OnBnClickedStop();
	afx_msg void OnBnClickedSoftwaretrigger();
	afx_msg void OnBnClickedPause();
	afx_msg void OnBnClickedRestart();
	afx_msg void OnBnClickedGetlogg();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedWaiting();
	afx_msg void OnBnClickedTSLSetwavelength();
	afx_msg void OnBnClickedTSLOther();
	afx_msg void OnBnClickedTSLsetting();
	afx_msg void OnBnClickedTSLStatus();
	afx_msg void OnBnClickedTSLMinstep();
	afx_msg void OnBnClickedTSLbtnspeed();
	afx_msg void OnBnClickedCurrent();
	afx_msg void OnBnClickedTSLStart();
	afx_msg void OnBnClickedTSLStop();
	afx_msg void OnBnClickedTSLSoftwaretrigger();
	afx_msg void OnBnClickedTSLPause();
	afx_msg void OnBnClickedTSLRestart();
	afx_msg void OnBnClickedTSLGetlogg();
};
