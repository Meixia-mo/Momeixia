// Circle.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "test13-3.h"
#include "Circle.h"
#include "afxdialogex.h"
#include "MainFrm.h"


// Circle �Ի���

IMPLEMENT_DYNAMIC(Circle, CDialogEx)

Circle::Circle(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, a(0)
	, b(0)
{

}

Circle::~Circle()
{
}

void Circle::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Text(pDX, IDC_EDIT3, a);
	DDX_Text(pDX, IDC_EDIT4, b);
}


BEGIN_MESSAGE_MAP(Circle, CDialogEx)
	ON_BN_CLICKED(IDOK, &Circle::OnBnClickedOk)
END_MESSAGE_MAP()


// Circle ��Ϣ�������


void Circle::OnBnClickedOk()
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
