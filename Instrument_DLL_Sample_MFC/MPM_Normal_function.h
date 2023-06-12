#pragma once


// MPM_Normal_function 对话框

class MPM_Normal_function : public CDialog
{
	DECLARE_DYNAMIC(MPM_Normal_function)

public:
	MPM_Normal_function(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~MPM_Normal_function();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = MPM_Normal_function_Form };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedbtnsetrangemode();
	afx_msg void OnBnClickedbtnsetwavelength();
	afx_msg void OnBnClickedbtnsetaveraging();
	afx_msg void OnBnClickedbtnsetrangeall();
	afx_msg void OnBnClickedbtnsetunit();
	afx_msg void OnBnClickedbtnsetslot();
	afx_msg void OnBnClickedbtnget();
	afx_msg void OnBnClickedChRange();
	afx_msg void OnBnClickedChPower();
	afx_msg void OnBnClickedPower();
	afx_msg void OnBnClickedbtnzeroing();
	afx_msg void OnBnClickedbtngetwavelength();
	afx_msg void OnBnClickedbtngeterror();
	afx_msg void OnBnClickedbtngetip();
	afx_msg void OnBnClickedbtngetport();
};
