
// test9-1View.cpp : Ctest91View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test9-1.h"
#endif

#include "test9-1Doc.h"
#include "test9-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest91View

IMPLEMENT_DYNCREATE(Ctest91View, CView)

BEGIN_MESSAGE_MAP(Ctest91View, CView)
	ON_COMMAND(ID_FILE_OPEN, &Ctest91View::OnFileOpen)
END_MESSAGE_MAP()

// Ctest91View ����/����

Ctest91View::Ctest91View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest91View::~Ctest91View()
{
}

BOOL Ctest91View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest91View ����

void Ctest91View::OnDraw(CDC* /*pDC*/)
{
	Ctest91Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest91View ���

#ifdef _DEBUG
void Ctest91View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest91View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest91Doc* Ctest91View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest91Doc)));
	return (Ctest91Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest91View ��Ϣ�������


void Ctest91View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	CImage img;
	CRect rc;
	GetClientRect(&rc);
	if (r == IDOK) {
		CString filename = cfd.GetPathName();
		img.Load(filename);
		img.Draw(dc.m_hDC, (rc.right- img.GetWidth())/2, (rc.bottom- img.GetHeight())/2, img.GetWidth(), img.GetHeight());
        dc.TextOutW((rc.right - img.GetWidth()) / 2, (rc.bottom - img.GetHeight()) / 2+img.GetHeight(), filename);
	}
}
