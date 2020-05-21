
// test15-2.h : test15-2 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// Ctest152App:
// 有关此类的实现，请参阅 test15-2.cpp
//

class Ctest152App : public CWinAppEx
{
public:
	Ctest152App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Ctest152App theApp;
