// AColor.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "test13-4.h"
#include "AColor.h"
#include "afxdialogex.h"
#include "MainFrm.h"


// AColor �Ի���

IMPLEMENT_DYNAMIC(AColor, CDialogEx)

AColor::AColor(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, r(0)
	, g(0)
	, blue(0)
{

}

AColor::~AColor()
{
}

void AColor::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, r);
	DDV_MinMaxInt(pDX, r, 0, 250);
	DDX_Text(pDX, IDC_EDIT2, g);
	DDV_MinMaxInt(pDX, g, 0, 250);
	DDX_Text(pDX, IDC_EDIT3, blue);
	DDV_MinMaxInt(pDX, blue, 0, 250);
}


BEGIN_MESSAGE_MAP(AColor, CDialogEx)
	ON_BN_CLICKED(IDOK, &AColor::OnBnClickedOk)
END_MESSAGE_MAP()


// AColor ��Ϣ�������


void AColor::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	//��ÿ�������ָ��
	CMainFrame* pMain = (CMainFrame*)AfxGetApp()->m_pMainWnd;
	pMain->red = r;
	pMain->green = g;
	pMain->blue1 = blue;
	CDialogEx::OnOK();
}
