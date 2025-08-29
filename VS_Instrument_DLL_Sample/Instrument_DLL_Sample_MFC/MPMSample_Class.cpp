// MPMSample_Class.cpp : 实现文件
//

#include "stdafx.h"
#include "Instrument_DLL_Sample_MFC.h"
#include "MPMSample_Class.h"
#include "afxdialogex.h"


// MPMSample_Class 对话框

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


// MPMSample_Class 消息处理程序


BOOL MPMSample_Class::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	CRect tabRect;   // 标签控件客户区的位置和大小  

	m_tab_mainDlg_ct.InsertItem(0, _T("Communication Setting "));			// 插入第一个标签  
	m_tab_mainDlg_ct.InsertItem(1, _T("Normal function"));			// 插入第二个标签
	m_tab_mainDlg_ct.InsertItem(2, _T("Logging1"));			// 插入第三个标签 
	m_tab_mainDlg_ct.InsertItem(3, _T("Logging2"));			// 插入第四个标签 

	m_tabDlg1.Create(MPM_Communication_Setting_Form, &m_tab_mainDlg_ct);    // 创建第一个标签页  
	m_tabDlg2.Create(MPM_Normal_function_Form, &m_tab_mainDlg_ct);	// 创建第二个标签页  
	m_tabDlg3.Create(MPM_Logging1_Form, &m_tab_mainDlg_ct);	// 创建第二个标签页  
	m_tabDlg4.Create(MPM_Logging2_Form, &m_tab_mainDlg_ct);	// 创建第四个标签页  

	m_tab_mainDlg_ct.GetClientRect(&tabRect);    // 获取标签控件客户区Rect  
												 // 调整tabRect&#xff0c;使其覆盖范围适合放置标签页  
	tabRect.left += 1;
	tabRect.right -= 1;
	tabRect.top += 25;
	tabRect.bottom -= 1;
	// 根据调整好的tabRect放置m_jzmDlg子对话框&#xff0c;并设置为显示  
	m_tabDlg1.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_SHOWWINDOW);
	// 根据调整好的tabRect放置m_androidDlg子对话框&#xff0c;并设置为隐藏  
	m_tabDlg2.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_HIDEWINDOW);
	m_tabDlg3.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_HIDEWINDOW);
	m_tabDlg4.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_HIDEWINDOW);


	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void MPMSample_Class::OnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult)
{
	// TODO: 在此添加控件通知处理程序代码
	*pResult = 0;
	CRect tabRect;    // 标签控件客户区的Rect  

					  // 获取标签控件客户区Rect&#xff0c;并对其调整&#xff0c;以适合放置标签页  
	m_tab_mainDlg_ct.GetClientRect(&tabRect);
	tabRect.left += 1;
	tabRect.right -= 1;
	tabRect.top += 25;
	tabRect.bottom -= 1;

	switch (m_tab_mainDlg_ct.GetCurSel())
	{
		// 如果标签控件当前选择标签为“Tab Dialog1”&#xff0c;则显示m_tabDlg1对话框&#xff0c;隐藏m_tabDlg2对话框  
	case 0:
		m_tabDlg1.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_SHOWWINDOW);
		m_tabDlg2.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_HIDEWINDOW);
		m_tabDlg3.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_HIDEWINDOW);
		m_tabDlg4.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_HIDEWINDOW);

		break;
		// 如果标签控件当前选择标签为“Tab Dialog2”&#xff0c;则显示m_tabDlg2对话框&#xff0c;隐藏m_tabDlg1对话框  
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

		// 如果标签控件当前选择标签为“Tab Dialog2”&#xff0c;则显示m_tabDlg2对话框&#xff0c;隐藏m_tabDlg1对话框  
	default:
		break;
	}

}
