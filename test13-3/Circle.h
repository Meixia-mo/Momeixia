#pragma once


// Circle �Ի���

class Circle : public CDialogEx
{
	DECLARE_DYNAMIC(Circle)

public:
	Circle(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Circle();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	int x;
	int y;
	int a;
	int b;
	afx_msg void OnBnClickedOk();
};
