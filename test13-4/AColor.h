#pragma once


// AColor 对话框

class AColor : public CDialogEx
{
	DECLARE_DYNAMIC(AColor)

public:
	AColor(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~AColor();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	int r;
	int g;
	int blue;
	afx_msg void OnBnClickedOk();
};
