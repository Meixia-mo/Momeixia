// MyDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�ھ���ʵ��-1.h"
#include "MyDialog.h"
#include "MainFrm.h"
#include "afxdialogex.h"
#include "fstream"
#include "string"
#include "iostream"
using namespace std;


// MyDialog �Ի���

IMPLEMENT_DYNAMIC(MyDialog, CDialogEx)

MyDialog::MyDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, a(_T(""))
{

}

MyDialog::~MyDialog()
{
}

void MyDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Control(pDX, IDC_LIST1, info);
}


BEGIN_MESSAGE_MAP(MyDialog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON2, &MyDialog::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDialog::OnBnClickedButton1)
	ON_BN_CLICKED(IDOK, &MyDialog::OnBnClickedOk)
END_MESSAGE_MAP()


// MyDialog ��Ϣ�������


BOOL MyDialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK) {
		CString filename = cfd.GetPathName();//ȡ���ļ�·��
		ifstream ifs(filename);
		string s;
		CClientDC dc(this);
		int x = 20, y = 10;
		CMainFrame* pMain = (CMainFrame*)AfxGetApp()->m_pMainWnd;
		pMain->path = filename;
		while (getline(ifs,s)) {
			CString c;
			c= CString(s.c_str());
			info.AddString(c);
		}
	}
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void MyDialog::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(false);
	int i = info.GetCurSel();
	info.GetText(i,a);
}


void MyDialog::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	int i = info.GetCurSel();
	info.DeleteString(i);
	info.AddString(a);
	//��ÿ�������ָ��
	CMainFrame* pMain = (CMainFrame*)AfxGetApp()->m_pMainWnd;
	int count = info.GetCount();
	pMain->ccount = count;
	int j = 0;
	CString cstring;
	//���б������ݷŵ��ַ���������
	for (j = 0; j < count; j++) {
		info.GetText(j, cstring);
		pMain->information.Add(cstring);
	}
	int x = 500, y = 100;
	//����ַ������������
	/*for (j = 0; j < count; j++) {
		CClientDC dc(this);
		dc.TextOutW(x, y, pMain->information[j]);
		y += 30;
	}*/
}


void MyDialog::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CMainFrame* pMain = (CMainFrame*)AfxGetApp()->m_pMainWnd;
	ofstream ofs(pMain->path);
	for (int k = 0; k < pMain->ccount; k++) {
     ofs << CT2A(pMain->information[k].GetString()) << endl;
	}	
	CDialogEx::OnOK();
}
