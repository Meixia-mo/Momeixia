// Count.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "test13-4.h"
#include "Count.h"
#include "afxdialogex.h"
#include "MainFrm.h"


// Count �Ի���

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


// Count ��Ϣ�������


void Count::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	//��ÿ�������ָ��
	CMainFrame* pMain = (CMainFrame*)AfxGetApp()->m_pMainWnd;
	pMain->cx = x;
	pMain->cy = y;
	pMain->ca = a;
	pMain->cb = b;
	CDialogEx::OnOK();
}
