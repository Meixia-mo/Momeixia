// Exchange.cpp : 实现文件
//

#include "stdafx.h"
#include "第七周实验-1.h"
#include "Exchange.h"
#include "afxdialogex.h"


// Exchange 对话框

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


// Exchange 消息处理程序


void Exchange::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	CString c;
	c = a;
	a = b;
	b = c;
	UpdateData(false);
}
