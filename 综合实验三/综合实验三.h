
// �ۺ�ʵ����.h : �ۺ�ʵ���� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�ۺ�ʵ����App:
// �йش����ʵ�֣������ �ۺ�ʵ����.cpp
//

class C�ۺ�ʵ����App : public CWinApp
{
public:
	C�ۺ�ʵ����App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�ۺ�ʵ����App theApp;
