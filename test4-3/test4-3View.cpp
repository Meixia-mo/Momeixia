
// test4-3View.cpp : Ctest43View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test4-3.h"
#endif

#include "test4-3Doc.h"
#include "test4-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest43View

IMPLEMENT_DYNCREATE(Ctest43View, CView)

BEGIN_MESSAGE_MAP(Ctest43View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Ctest43View ����/����

Ctest43View::Ctest43View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest43View::~Ctest43View()
{
}

BOOL Ctest43View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest43View ����

void Ctest43View::OnDraw(CDC* pDC)
{
	Ctest43Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CClientDC dc(this);
	dc.Rectangle(pDoc->A);
	dc.Rectangle(pDoc->B);
	dc.Rectangle(pDoc->C);
}


// Ctest43View ���

#ifdef _DEBUG
void Ctest43View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest43View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest43Doc* Ctest43View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest43Doc)));
	return (Ctest43Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest43View ��Ϣ�������


void Ctest43View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctest43Doc* pDoc = GetDocument();
	CClientDC dc(this);
	int w1 = 10,  w2= 5;
	if (pDoc->A.left <= point.x&&pDoc->A.right >= point.x&&pDoc->A.top <= point.y&&pDoc->A.bottom >= point.y) {
		CString s;
		s.Format(_T("%d"), pDoc->a);
		dc.TextOutW(pDoc->A.left + 40, pDoc->A.top + 40, s);
	}
	else if (pDoc->B.left <= point.x&&pDoc->B.right >= point.x&&pDoc->B.top <= point.y&&pDoc->B.bottom >= point.y) {
		CString s;
		s.Format(_T("%d"), pDoc->b);
		dc.TextOutW(pDoc->B.left + 40, pDoc->B.top + 40, s);
	}
	else if (pDoc->C.left <= point.x&&pDoc->C.right >= point.x&&pDoc->C.top <= point.y&&pDoc->C.bottom >= point.y) {
		CString s;
		s.Format(_T("%d"), pDoc->a+pDoc->b);
		dc.TextOutW(pDoc->C.left + 40, pDoc->C.top + 40, s);
	}
	else {
		CString s;
		s.Format(_T("��Ч"));
		dc.TextOutW(point.x, point.y, s);
	}
	CView::OnLButtonDown(nFlags, point);
}
