
// MFCtext1.h : MFCtext1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCtext1App:
// �йش����ʵ�֣������ MFCtext1.cpp
//

class CMFCtext1App : public CWinAppEx
{
public:
	CMFCtext1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCtext1App theApp;
