
// Main.h : ͷ�ļ�
//

#pragma once


// Main �Ի���
class Main : public CDialogEx
{
// ����
public:
	Main(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_INSTRUMENT_DLL_SAMPLE_MFC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedbtntsl();
	afx_msg void OnBnClickedbtnmpm();
	afx_msg void OnBnClickedbtnpcu();
	afx_msg void OnBnClickedbtnosu();
};