
// test15-1View.cpp : Ctest151View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test15-1.h"
#endif

#include "test15-1Doc.h"
#include "test15-1View.h"

#include "fstream"
#include "string"
#include "iostream"
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest151View

IMPLEMENT_DYNCREATE(Ctest151View, CView)

BEGIN_MESSAGE_MAP(Ctest151View, CView)
	ON_COMMAND(ID_FILE_SAVE_AS, &Ctest151View::OnFileSaveAs)
	ON_COMMAND(ID_FILE_OPEN, &Ctest151View::OnFileOpen)
END_MESSAGE_MAP()

// Ctest151View ����/����

Ctest151View::Ctest151View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest151View::~Ctest151View()
{
}

BOOL Ctest151View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest151View ����

void Ctest151View::OnDraw(CDC* /*pDC*/)
{
	Ctest151Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest151View ���

#ifdef _DEBUG
void Ctest151View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest151View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest151Doc* Ctest151View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest151Doc)));
	return (Ctest151Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest151View ��Ϣ�������


void Ctest151View::OnFileSaveAs()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(false);
	int r = cfd.DoModal();
	if (r == IDOK) {
		//CString filename = cfd.GetPathName();//ȡ���ļ�·��
		ofstream ofs(cfd.GetPathName());
		//CString s = cfd.GetPathName();
		ofs << CT2A(path.GetString()) << endl;

	}
}


void Ctest151View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	CRect rc;
	GetClientRect(&rc);
	if (r == IDOK) {
		CString filename = cfd.GetPathName();//ȡ���ļ�·��
		ifstream ifs(filename);
		string s;
		path = filename;
		/*CClientDC dc(this);
		int x = 20, y = 10;
		while (ifs >> s) {
			dc.TextOutW(x, y, CString(s.c_str()));
			y += 30;
		}*/
	}
}
