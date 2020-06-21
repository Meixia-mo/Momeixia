// AddDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "综合实验三.h"
#include "AddDlg.h"
#include "afxdialogex.h"


// AddDlg 对话框

IMPLEMENT_DYNAMIC(AddDlg, CDialogEx)

AddDlg::AddDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ADD, pParent)
	, ID(0)
	, name1(_T(""))
	, sno1(_T(""))
	, sex1(_T(""))
{

}

AddDlg::~AddDlg()
{
}

void AddDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, ID);
	DDX_Text(pDX, IDC_EDIT2, name1);
	DDX_Text(pDX, IDC_EDIT3, sno1);
	DDX_Text(pDX, IDC_EDIT4, sex1);
}


BEGIN_MESSAGE_MAP(AddDlg, CDialogEx)
END_MESSAGE_MAP()


// AddDlg 消息处理程序
