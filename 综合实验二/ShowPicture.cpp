// ShowPicture.cpp : 实现文件
//

#include "stdafx.h"
#include "综合实验二.h"
#include "ShowPicture.h"
#include "afxdialogex.h"


// ShowPicture 对话框

IMPLEMENT_DYNAMIC(ShowPicture, CDialogEx)

ShowPicture::ShowPicture(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

ShowPicture::~ShowPicture()
{
}

void ShowPicture::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ShowPicture, CDialogEx)
END_MESSAGE_MAP()


// ShowPicture 消息处理程序
