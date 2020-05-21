// MyPicture.cpp : 实现文件
//

#include "stdafx.h"
#include "test15-2.h"
#include "MyPicture.h"
#include "afxdialogex.h"
#include "fstream"
#include "string"
using namespace std;


// MyPicture 对话框

IMPLEMENT_DYNAMIC(MyPicture, CDialogEx)

MyPicture::MyPicture(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

MyPicture::~MyPicture()
{
}

void MyPicture::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(MyPicture, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyPicture::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyPicture 消息处理程序


void MyPicture::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CString filename;
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK) {
		filename = cfd.GetPathName();
		ifstream ifs(filename);
		string s;
		CString f;

		while (ifs >> s);
		f = CString(s.c_str());
		CClientDC dc(this);
		dc.TextOutW(20, 10, f);

		CImage img;
		img.Load(f);
		CDC *pDC = GetDlgItem(IDC_STATIC)->GetDC();
		int w, h, sx, sy;
		CRect rect;
		GetDlgItem(IDC_STATIC)->GetClientRect(&rect);

		float rect_ratio = 1.0*rect.Width() / rect.Height();
		float img_ratio = 1.0*img.GetWidth() / img.GetHeight();

		if (rect_ratio > img_ratio) {
			h = rect.Height();
			w = img_ratio*h;
			sx = (rect.Width() - w) / 2;
			sy = 0;
		}
		else {
			w = rect.Height();
			h = w / img_ratio;
			sx = 0;
			sy = (rect.Height() - h) / 2;
		}
		img.Draw(pDC->m_hDC, sx, sy, w, h);
	}
}
