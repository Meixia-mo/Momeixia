
// MFCAtest1-2.h : MFCAtest1-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCAtest12App:
// �йش����ʵ�֣������ MFCAtest1-2.cpp
//

class CMFCAtest12App : public CWinAppEx
{
public:
	CMFCAtest12App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCAtest12App theApp;
