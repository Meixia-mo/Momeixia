#pragma once


// ShowPicture �Ի���

class ShowPicture : public CDialogEx
{
	DECLARE_DYNAMIC(ShowPicture)

public:
	ShowPicture(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ShowPicture();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
