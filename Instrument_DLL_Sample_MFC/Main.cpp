
// Main.cpp : ʵ���ļ�
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


// Main �Ի���



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


// Main ��Ϣ��������

BOOL Main::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ����Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

// �����Ի���������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void Main::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR Main::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void Main::OnBnClickedbtntsl()
{
	// TODO: �ڴ����ӿؼ�֪ͨ�����������
	TSLSample_Class  *pDlg = new TSLSample_Class;
	pDlg->Create(TSLSample, this);
	pDlg->ShowWindow(SW_SHOW);

}


void Main::OnBnClickedbtnmpm()
{
	// TODO: �ڴ����ӿؼ�֪ͨ�����������
	MPMSample_Class  *pDlg = new MPMSample_Class;
	pDlg->Create(MPMSample, this);
	pDlg->ShowWindow(SW_SHOW);

}


void Main::OnBnClickedbtnpcu()
{
	// TODO: �ڴ����ӿؼ�֪ͨ�����������
	PCUSample_Class  *pDlg = new PCUSample_Class;
	pDlg->Create(PCUSample, this);
	pDlg->ShowWindow(SW_SHOW);

}


void Main::OnBnClickedbtnosu()
{
	// TODO: �ڴ����ӿؼ�֪ͨ�����������
	OSUSample_Class  *pDlg = new OSUSample_Class;
	pDlg->Create(OSUSample, this);
	pDlg->ShowWindow(SW_SHOW);
}