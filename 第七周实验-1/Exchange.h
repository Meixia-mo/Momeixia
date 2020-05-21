#pragma once


// Exchange 对话框

class Exchange : public CDialogEx
{
	DECLARE_DYNAMIC(Exchange)

public:
	Exchange(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Exchange();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString a;
	CString b;
	afx_msg void OnBnClickedButton1();
};
