
// test6-3-1.h : test6-3-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Ctest631App:
// �йش����ʵ�֣������ test6-3-1.cpp
//

class Ctest631App : public CWinAppEx
{
public:
	Ctest631App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Ctest631App theApp;
