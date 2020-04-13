
// test11-1View.cpp : Ctest111View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test11-1.h"
#endif

#include "test11-1Doc.h"
#include "test11-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest111View

IMPLEMENT_DYNCREATE(Ctest111View, CView)

BEGIN_MESSAGE_MAP(Ctest111View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Ctest111View ����/����

Ctest111View::Ctest111View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest111View::~Ctest111View()
{
}

BOOL Ctest111View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest111View ����

void Ctest111View::OnDraw(CDC* pDC)
{
	Ctest111Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->c.x - pDoc->r, pDoc->c.y - pDoc->r1, pDoc->c.x + pDoc->r, pDoc->c.y + pDoc->r1);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest111View ���

#ifdef _DEBUG
void Ctest111View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest111View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest111Doc* Ctest111View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest111Doc)));
	return (Ctest111Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest111View ��Ϣ�������


void Ctest111View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctest111Doc* pDoc = GetDocument();
	pDoc->set = true;
	pDoc->c = point;
	CView::OnLButtonDown(nFlags, point);
}


void Ctest111View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctest111Doc* pDoc = GetDocument();
	if (pDoc->set) {
      pDoc->c = point;
	  Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}


void Ctest111View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctest111Doc* pDoc = GetDocument();
	pDoc->c = point;
	Invalidate();
	pDoc->set = false;
	CView::OnLButtonUp(nFlags, point);
}
