
// MFCtest1-1.h : MFCtest1-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCtest11App:
// �йش����ʵ�֣������ MFCtest1-1.cpp
//

class CMFCtest11App : public CWinAppEx
{
public:
	CMFCtest11App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCtest11App theApp;
