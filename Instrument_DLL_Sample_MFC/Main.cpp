
// Main.cpp : 实现文件
//

#include "stdafx.h"
#include "Instrument_DLL_Sample_MFC.h"
#include "Main.h"
#include "afxdialogex.h"
#include "TSLSample_Class.h"
#include "MPMSample_Class.h"
#include "PCUSample_Class.h"
#include "OSUSample_Class.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Main 对话框



Main::Main(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_INSTRUMENT_DLL_SAMPLE_MFC_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void Main::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(Main, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(btnTSL, &Main::OnBnClickedbtntsl)
	ON_BN_CLICKED(btnMPM, &Main::OnBnClickedbtnmpm)
	ON_BN_CLICKED(btnPCU, &Main::OnBnClickedbtnpcu)
	ON_BN_CLICKED(btnOSU, &Main::OnBnClickedbtnosu)
END_MESSAGE_MAP()


// Main 消息处理程序

BOOL Main::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void Main::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR Main::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void Main::OnBnClickedbtntsl()
{
	// TODO: 在此添加控件通知处理程序代码
	TSLSample_Class  *pDlg = new TSLSample_Class;
	pDlg->Create(TSLSample, this);
	pDlg->ShowWindow(SW_SHOW);

}


void Main::OnBnClickedbtnmpm()
{
	// TODO: 在此添加控件通知处理程序代码
	MPMSample_Class  *pDlg = new MPMSample_Class;
	pDlg->Create(MPMSample, this);
	pDlg->ShowWindow(SW_SHOW);

}


void Main::OnBnClickedbtnpcu()
{
	// TODO: 在此添加控件通知处理程序代码
	PCUSample_Class  *pDlg = new PCUSample_Class;
	pDlg->Create(PCUSample, this);
	pDlg->ShowWindow(SW_SHOW);

}


void Main::OnBnClickedbtnosu()
{
	// TODO: 在此添加控件通知处理程序代码
	OSUSample_Class  *pDlg = new OSUSample_Class;
	pDlg->Create(OSUSample, this);
	pDlg->ShowWindow(SW_SHOW);
}
