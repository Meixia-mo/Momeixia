#pragma once
#include "afxwin.h"


// Count 对话框

class Count : public CDialogEx
{
	DECLARE_DYNAMIC(Count)

public:
	Count(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Count();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	float a;
	float b;
	float c;
	float d;
	// +
	CButton b1;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	float e;
	CString f;
	float g;
};
