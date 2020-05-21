#pragma once


// MyPicture 对话框

class MyPicture : public CDialogEx
{
	DECLARE_DYNAMIC(MyPicture)

public:
	MyPicture(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~MyPicture();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
