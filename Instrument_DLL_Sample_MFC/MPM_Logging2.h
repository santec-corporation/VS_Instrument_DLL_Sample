#pragma once


// MPM_Logging2 �Ի���

class MPM_Logging2 : public CDialog
{
	DECLARE_DYNAMIC(MPM_Logging2)

public:
	MPM_Logging2(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MPM_Logging2();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = MPM_Logging2_Form };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedbtngetparameter();
};