#pragma once


// MPM_Logging1 对话框

class MPM_Logging1 : public CDialog
{
	DECLARE_DYNAMIC(MPM_Logging1)

public:
	MPM_Logging1(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~MPM_Logging1();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = MPM_Logging1_Form };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedbtnsetconst();
	afx_msg void OnBnClickedbtnsetsweep();
	afx_msg void OnBnClickedbtnsetfreerun();
	afx_msg void OnBnClickedbtnstart();
	afx_msg void OnBnClickedbtnstatus();
	afx_msg void OnBnClickedbtnstop();
	afx_msg void OnBnClickedbtngetch();
	afx_msg void OnBnClickedbtngetslot();
};
