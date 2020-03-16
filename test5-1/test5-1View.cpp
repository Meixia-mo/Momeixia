
// test5-1View.cpp : Ctest51View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test5-1.h"
#endif

#include "test5-1Doc.h"
#include "test5-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest51View

IMPLEMENT_DYNCREATE(Ctest51View, CView)

BEGIN_MESSAGE_MAP(Ctest51View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Ctest51View ����/����

Ctest51View::Ctest51View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest51View::~Ctest51View()
{
}

BOOL Ctest51View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest51View ����

void Ctest51View::OnDraw(CDC* /*pDC*/)
{
	Ctest51Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest51View ���

#ifdef _DEBUG
void Ctest51View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest51View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest51Doc* Ctest51View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest51Doc)));
	return (Ctest51Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest51View ��Ϣ�������


void Ctest51View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctest51Doc* pDoc = GetDocument();
	CClientDC dc(this);
	pDoc->x = point.x;
	pDoc->y = point.y;
	pDoc->flag = 0;
	CString s;
	s.Format(_T("����������ʱ����λ��Ϊ��%d  %d"), point.x, point.y);
	dc.TextOutW(10,10,s);

	CView::OnLButtonDown(nFlags, point);
}


void Ctest51View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CRect rc;
	Ctest51Doc* pDoc = GetDocument();
	dc.Rectangle(pDoc->x, pDoc->y, point.x, point.y);
	pDoc->flag = 1;

	CView::OnLButtonUp(nFlags, point);
}


void Ctest51View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctest51Doc* pDoc = GetDocument(); 
	CClientDC dc(this);
	CString s;
	if (pDoc->flag == 0) {
		s.Format(_T("����λ��Ϊ��%d %d"), point.x, point.y);
		dc.TextOutW(10, 40,s);
	}

	CView::OnMouseMove(nFlags, point);
}
