// MPMSample_Class.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Instrument_DLL_Sample_MFC.h"
#include "MPMSample_Class.h"
#include "afxdialogex.h"


// MPMSample_Class �Ի���

IMPLEMENT_DYNAMIC(MPMSample_Class, CDialogEx)

MPMSample_Class::MPMSample_Class(CWnd* pParent /*=NULL*/)
	: CDialogEx(MPMSample, pParent)
{

}

MPMSample_Class::~MPMSample_Class()
{
}

void MPMSample_Class::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TAB1, m_tab_mainDlg_ct);
}


BEGIN_MESSAGE_MAP(MPMSample_Class, CDialogEx)
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB1, &MPMSample_Class::OnSelchangeTab1)
END_MESSAGE_MAP()


// MPMSample_Class ��Ϣ��������


BOOL MPMSample_Class::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ����Ӷ���ĳ�ʼ��
	CRect tabRect;   // ��ǩ�ؼ��ͻ�����λ�úʹ�С  

	m_tab_mainDlg_ct.InsertItem(0, _T("Communication Setting "));			// �����һ����ǩ  
	m_tab_mainDlg_ct.InsertItem(1, _T("Normal function"));			// ����ڶ�����ǩ
	m_tab_mainDlg_ct.InsertItem(2, _T("Logging1"));			// �����������ǩ 
	m_tab_mainDlg_ct.InsertItem(3, _T("Logging2"));			// ������ĸ���ǩ 

	m_tabDlg1.Create(MPM_Communication_Setting_Form, &m_tab_mainDlg_ct);    // ������һ����ǩҳ  
	m_tabDlg2.Create(MPM_Normal_function_Form, &m_tab_mainDlg_ct);	// �����ڶ�����ǩҳ  
	m_tabDlg3.Create(MPM_Logging1_Form, &m_tab_mainDlg_ct);	// �����ڶ�����ǩҳ  
	m_tabDlg4.Create(MPM_Logging2_Form, &m_tab_mainDlg_ct);	// �������ĸ���ǩҳ  

	m_tab_mainDlg_ct.GetClientRect(&tabRect);    // ��ȡ��ǩ�ؼ��ͻ���Rect  
												 // ����tabRect&#xff0c;ʹ�串�Ƿ�Χ�ʺϷ��ñ�ǩҳ  
	tabRect.left += 1;
	tabRect.right -= 1;
	tabRect.top += 25;
	tabRect.bottom -= 1;
	// ���ݵ����õ�tabRect����m_jzmDlg�ӶԻ���&#xff0c;������Ϊ��ʾ  
	m_tabDlg1.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_SHOWWINDOW);
	// ���ݵ����õ�tabRect����m_androidDlg�ӶԻ���&#xff0c;������Ϊ����  
	m_tabDlg2.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_HIDEWINDOW);
	m_tabDlg3.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_HIDEWINDOW);
	m_tabDlg4.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_HIDEWINDOW);


	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void MPMSample_Class::OnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult)
{
	// TODO: �ڴ����ӿؼ�֪ͨ�����������
	*pResult = 0;
	CRect tabRect;    // ��ǩ�ؼ��ͻ�����Rect  

					  // ��ȡ��ǩ�ؼ��ͻ���Rect&#xff0c;���������&#xff0c;���ʺϷ��ñ�ǩҳ  
	m_tab_mainDlg_ct.GetClientRect(&tabRect);
	tabRect.left += 1;
	tabRect.right -= 1;
	tabRect.top += 25;
	tabRect.bottom -= 1;

	switch (m_tab_mainDlg_ct.GetCurSel())
	{
		// �����ǩ�ؼ���ǰѡ���ǩΪ��Tab Dialog1��&#xff0c;����ʾm_tabDlg1�Ի���&#xff0c;����m_tabDlg2�Ի���  
	case 0:
		m_tabDlg1.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_SHOWWINDOW);
		m_tabDlg2.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_HIDEWINDOW);
		m_tabDlg3.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_HIDEWINDOW);
		m_tabDlg4.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_HIDEWINDOW);

		break;
		// �����ǩ�ؼ���ǰѡ���ǩΪ��Tab Dialog2��&#xff0c;����ʾm_tabDlg2�Ի���&#xff0c;����m_tabDlg1�Ի���  
	case 1:
		m_tabDlg1.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_HIDEWINDOW);
		m_tabDlg2.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_SHOWWINDOW);
		m_tabDlg3.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_HIDEWINDOW);
		m_tabDlg4.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_HIDEWINDOW);
		break;
	case 2:
		m_tabDlg1.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_HIDEWINDOW);
		m_tabDlg2.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_HIDEWINDOW);
		m_tabDlg3.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_SHOWWINDOW);
		m_tabDlg4.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_HIDEWINDOW);
		break;
	case 3:
		m_tabDlg1.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_HIDEWINDOW);
		m_tabDlg2.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_HIDEWINDOW);
		m_tabDlg3.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_HIDEWINDOW);
		m_tabDlg4.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_SHOWWINDOW);
		break;

		// �����ǩ�ؼ���ǰѡ���ǩΪ��Tab Dialog2��&#xff0c;����ʾm_tabDlg2�Ի���&#xff0c;����m_tabDlg1�Ի���  
	default:
		break;
	}

}