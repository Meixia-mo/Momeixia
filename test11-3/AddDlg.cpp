// AddDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "test11-3.h"
#include "AddDlg.h"
#include "afxdialogex.h"


// AddDlg �Ի���

IMPLEMENT_DYNAMIC(AddDlg, CDialogEx)

AddDlg::AddDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, a(0)
	, b(0)
	, c(0)
{

}

AddDlg::~AddDlg()
{
}

void AddDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Text(pDX, IDC_EDIT3, b);
	DDX_Text(pDX, IDC_EDIT5, c);
}


BEGIN_MESSAGE_MAP(AddDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &AddDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// AddDlg ��Ϣ�������


void AddDlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ�������
	this->UpdateData(true);
	c = a + b;
	UpdateData(false);
}
