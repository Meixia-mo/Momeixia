
// �ۺ�ʵ��-1.h : �ۺ�ʵ��-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�ۺ�ʵ��1App:
// �йش����ʵ�֣������ �ۺ�ʵ��-1.cpp
//

class C�ۺ�ʵ��1App : public CWinApp
{
public:
	C�ۺ�ʵ��1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�ۺ�ʵ��1App theApp;
