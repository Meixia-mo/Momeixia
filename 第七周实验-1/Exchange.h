#pragma once


// Exchange �Ի���

class Exchange : public CDialogEx
{
	DECLARE_DYNAMIC(Exchange)

public:
	Exchange(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Exchange();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString a;
	CString b;
	afx_msg void OnBnClickedButton1();
};
