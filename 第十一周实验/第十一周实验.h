
// ��ʮһ��ʵ��.h : ��ʮһ��ʵ�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ʮһ��ʵ��App:
// �йش����ʵ�֣������ ��ʮһ��ʵ��.cpp
//

class C��ʮһ��ʵ��App : public CWinApp
{
public:
	C��ʮһ��ʵ��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ʮһ��ʵ��App theApp;
