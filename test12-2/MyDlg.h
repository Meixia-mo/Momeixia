#pragma once


// MyDlg �Ի���

class MyDlg : public CDialogEx
{
	DECLARE_DYNAMIC(MyDlg)

public:
	MyDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString path;
	afx_msg void OnBnClickedButton1();
};
