#pragma once


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
	int x;
	int y;
	int a;
	int b;
	afx_msg void OnBnClickedOk();
};
