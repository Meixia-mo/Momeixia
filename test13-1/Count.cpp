// Count.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "test13-1.h"
#include "Count.h"
#include "afxdialogex.h"


// Count �Ի���

IMPLEMENT_DYNAMIC(Count, CDialogEx)

Count::Count(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, a(0)
	, b(0)
	, c(0)
	, d(0)
	, e(0)
	, f(_T(""))
	, g(0)
{

}

Count::~Count()
{
}

void Count::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Text(pDX, IDC_EDIT2, b);
	DDX_Text(pDX, IDC_EDIT3, c);
	DDX_Text(pDX, IDC_EDIT4, d);
	DDX_Control(pDX, IDC_BUTTON1, b1);
	DDX_Text(pDX, IDC_EDIT6, f);
	DDX_Text(pDX, IDC_EDIT7, g);
}


BEGIN_MESSAGE_MAP(Count, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Count::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Count::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &Count::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &Count::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &Count::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &Count::OnBnClickedButton6)
END_MESSAGE_MAP()


// Count ��Ϣ�������


void Count::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	c = a + b;
	UpdateData(false);
}


void Count::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	c = a - b;
	UpdateData(false);
}


void Count::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	c = a * b;
	UpdateData(false);
}


void Count::OnBnClickedButton4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	if (b == 0) {
		AfxMessageBox(_T("����Ϊ0�����������룡"));
	}
	else {
		c = a / b;
	    UpdateData(false);
	}
	
}


void Count::OnBnClickedButton5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	if (d < 0) {
		AfxMessageBox(_T("��������С��0�����������룡"));
	}
	else {
		g = sqrt(d);
		UpdateData(false);
	}
}


void Count::OnBnClickedButton6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	if (d == 0) {
		CString ss;
		ss.Format(_T("%f"), 0);
		f = ss;
	}
	else {
		CString s = _T("1");
		CString ss;
		ss.Format(_T("%f"), d);
		s = s + "/" + ss;
		f = s;
		UpdateData(false);
	}

}
