#pragma once


// MPM_Logging2 对话框

class MPM_Logging2 : public CDialog
{
	DECLARE_DYNAMIC(MPM_Logging2)

public:
	MPM_Logging2(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~MPM_Logging2();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = MPM_Logging2_Form };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedbtngetparameter();
};
