// MyDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "test12-4.h"
#include "MyDlg.h"
#include "afxdialogex.h"
#include "MainFrm.h"


// MyDlg �Ի���

IMPLEMENT_DYNAMIC(MyDlg, CDialogEx)

MyDlg::MyDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, path(_T(""))
{

}

MyDlg::~MyDlg()
{
}

void MyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_LBString(pDX, IDC_LIST1, path);
	DDX_Control(pDX, IDC_LIST1, path1);
}


BEGIN_MESSAGE_MAP(MyDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDlg ��Ϣ�������


void MyDlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CMainFrame* pMain = (CMainFrame*)AfxGetApp()->m_pMainWnd;
	UpdateData(false);
	path1.AddString(pMain->ss);
}
