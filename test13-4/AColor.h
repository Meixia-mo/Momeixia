#pragma once


// AColor �Ի���

class AColor : public CDialogEx
{
	DECLARE_DYNAMIC(AColor)

public:
	AColor(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~AColor();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	int r;
	int g;
	int blue;
	afx_msg void OnBnClickedOk();
};
