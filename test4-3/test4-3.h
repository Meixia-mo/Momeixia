
// test4-3.h : test4-3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Ctest43App:
// �йش����ʵ�֣������ test4-3.cpp
//

class Ctest43App : public CWinAppEx
{
public:
	Ctest43App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Ctest43App theApp;
