#pragma once
#include "afxwin.h"


// OSUSample_Class �Ի���

class OSUSample_Class : public CDialogEx
{
	DECLARE_DYNAMIC(OSUSample_Class)

public:
	OSUSample_Class(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~OSUSample_Class();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = OSUSample };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnconnect();
	virtual BOOL OnInitDialog();
	CComboBox usb_resource;
	CComboBox dev_resource;
	afx_msg void OnBnClickedBtndisconnect();
	afx_msg void OnBnClickedBtnswitch();
	afx_msg void OnBnClickedrdo101();
	afx_msg void OnBnClickedrdo100();
	afx_msg void OnBnClickedOsu110();
	afx_msg void OnBnClickedrdilan();
	afx_msg void OnBnClickedOsurdo100();
	afx_msg void OnBnClickedOsubtnconnect();
	afx_msg void OnBnClickedOsubtndisconnect();
	afx_msg void OnBnClickedOsubtnswitch();
	afx_msg void OnBnClickedOsurdilan();
};