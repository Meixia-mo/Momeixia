
// ��7��ʵ��.h : ��7��ʵ�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��7��ʵ��App:
// �йش����ʵ�֣������ ��7��ʵ��.cpp
//

class C��7��ʵ��App : public CWinAppEx
{
public:
	C��7��ʵ��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��7��ʵ��App theApp;
