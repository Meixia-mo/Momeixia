
// test3-1View.cpp : Ctest31View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test3-1.h"
#endif

#include "test3-1Doc.h"
#include "test3-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest31View

IMPLEMENT_DYNCREATE(Ctest31View, CView)

BEGIN_MESSAGE_MAP(Ctest31View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Ctest31View ����/����

Ctest31View::Ctest31View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest31View::~Ctest31View()
{
}

BOOL Ctest31View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest31View ����

void Ctest31View::OnDraw(CDC* pDC)
{
	Ctest31Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	if (pDoc->set) {
		pDC->Ellipse(pDoc->rc);
	}
}


// Ctest31View ���

#ifdef _DEBUG
void Ctest31View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest31View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest31Doc* Ctest31View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest31Doc)));
	return (Ctest31Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest31View ��Ϣ�������


void Ctest31View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctest31Doc* pDoc = GetDocument();
	pDoc->set = true;
	CClientDC dc(this);
	pDoc->rc.left = point.x;
	pDoc->rc.top = point.y;
	pDoc->rc.left = point.x+rand()%20+100;
	pDoc->rc.top = point.y+rand()%30+100;

	dc.Ellipse(pDoc->rc);
	Invalidate();

	CView::OnLButtonDown(nFlags, point);
}
