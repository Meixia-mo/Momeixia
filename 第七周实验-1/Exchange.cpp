// Exchange.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "������ʵ��-1.h"
#include "Exchange.h"
#include "afxdialogex.h"


// Exchange �Ի���

IMPLEMENT_DYNAMIC(Exchange, CDialogEx)

Exchange::Exchange(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, a(_T(""))
	, b(_T(""))
{

}

Exchange::~Exchange()
{
}

void Exchange::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Text(pDX, IDC_EDIT2, b);
}


BEGIN_MESSAGE_MAP(Exchange, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Exchange::OnBnClickedButton1)
END_MESSAGE_MAP()


// Exchange ��Ϣ�������


void Exchange::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	CString c;
	c = a;
	a = b;
	b = c;
	UpdateData(false);
}
