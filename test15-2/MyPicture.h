#pragma once


// MyPicture �Ի���

class MyPicture : public CDialogEx
{
	DECLARE_DYNAMIC(MyPicture)

public:
	MyPicture(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyPicture();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
