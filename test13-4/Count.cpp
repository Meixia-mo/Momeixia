// Count.cpp : 实现文件
//

#include "stdafx.h"
#include "test13-4.h"
#include "Count.h"
#include "afxdialogex.h"
#include "MainFrm.h"


// Count 对话框

IMPLEMENT_DYNAMIC(Count, CDialogEx)

Count::Count(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, a(0)
	, b(0)
{

}

Count::~Count()
{
}

void Count::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Text(pDX, IDC_EDIT3, a);
	DDX_Text(pDX, IDC_EDIT4, b);
}


BEGIN_MESSAGE_MAP(Count, CDialogEx)
	ON_BN_CLICKED(IDOK, &Count::OnBnClickedOk)
END_MESSAGE_MAP()


// Count 消息处理程序


void Count::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	//获得框架类对象指针
	CMainFrame* pMain = (CMainFrame*)AfxGetApp()->m_pMainWnd;
	pMain->cx = x;
	pMain->cy = y;
	pMain->ca = a;
	pMain->cb = b;
	CDialogEx::OnOK();
}
