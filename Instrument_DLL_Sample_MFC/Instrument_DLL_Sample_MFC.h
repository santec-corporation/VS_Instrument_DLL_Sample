
// Instrument_DLL_Sample_MFC.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Instrument_DLL_Sample_MFC: 
// �йش����ʵ�֣������ Instrument_DLL_Sample_MFC.cpp
//

class Instrument_DLL_Sample_MFC : public CWinApp
{
public:
	Instrument_DLL_Sample_MFC();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Instrument_DLL_Sample_MFC theApp;