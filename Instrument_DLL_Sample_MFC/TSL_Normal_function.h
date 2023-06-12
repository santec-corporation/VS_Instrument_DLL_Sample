#pragma once


// TSL_Normal_function 对话框

class TSL_Normal_function : public CDialog
{
	DECLARE_DYNAMIC(TSL_Normal_function)

public:
	TSL_Normal_function(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~TSL_Normal_function();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = TSL_Normal_function_Form };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedTSLLDOn();
	afx_msg void OnBnClickedLDOff();
	afx_msg void OnBnClickedCohOn();
	afx_msg void OnBnClickedSetfrequency();
	afx_msg void OnBnClickedCohOff();
	afx_msg void OnBnClickedOpen();
	afx_msg void OnBnClickedClose();
	afx_msg void OnBnClickedBtnapc();
	afx_msg void OnBnClickedBtnacc();
	afx_msg void OnBnClickedBtndbm();
	afx_msg void OnBnClickedBtnmw();
	afx_msg void OnBnClickedSetatt();
	afx_msg void OnBnClickedSetdbm();
	afx_msg void OnBnClickedSetmw();
	afx_msg void OnBnClickedSetwavelenth();
	afx_msg void OnBnClickedSetfinetuning();
	afx_msg void OnBnClickedWavelenth();
	afx_msg void OnBnClickedFrequency();
	afx_msg void OnBnClickedFine();
	afx_msg void OnBnClickedBusy();
	afx_msg void OnBnClickedStangby();
	afx_msg void OnBnClickederror();
	afx_msg void OnBnClickedbtngetip();
	afx_msg void OnBnClickedbtngetport();
	afx_msg void OnBnClickedGetld();
	afx_msg void OnBnClickedmode();
	afx_msg void OnBnClickedCohStatus();
	afx_msg void OnBnClickedStatus();
	afx_msg void OnBnClickedBtnunit();
	afx_msg void OnBnClickedvalue();
	afx_msg void OnBnClickedPdbm();
	afx_msg void OnBnClickedPmw();
	afx_msg void OnBnClickeddbm();
	afx_msg void OnBnClickedmw();
	afx_msg void OnBnClickedOn();
	afx_msg void OnBnClickedTSLLDOff();
	afx_msg void OnBnClickedTSLCohOn();
};
