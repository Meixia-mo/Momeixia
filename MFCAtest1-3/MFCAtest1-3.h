
// MFCAtest1-3.h : MFCAtest1-3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCAtest13App:
// �йش����ʵ�֣������ MFCAtest1-3.cpp
//

class CMFCAtest13App : public CWinAppEx
{
public:
	CMFCAtest13App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCAtest13App theApp;
