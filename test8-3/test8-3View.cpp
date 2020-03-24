
// test8-3View.cpp : Ctest83View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test8-3.h"
#endif

#include "test8-3Doc.h"
#include "test8-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest83View

IMPLEMENT_DYNCREATE(Ctest83View, CView)

BEGIN_MESSAGE_MAP(Ctest83View, CView)
	ON_COMMAND(ID_Solid, &Ctest83View::OnSolid)
	ON_COMMAND(ID_Rectangle, &Ctest83View::OnRectangle)
	ON_COMMAND(ID_Circle, &Ctest83View::OnCircle)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Ctest83View ����/����

Ctest83View::Ctest83View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest83View::~Ctest83View()
{
}

BOOL Ctest83View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest83View ����

void Ctest83View::OnDraw(CDC* pDC)
{
	Ctest83Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest83View ���

#ifdef _DEBUG
void Ctest83View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest83View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest83Doc* Ctest83View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest83Doc)));
	return (Ctest83Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest83View ��Ϣ�������


void Ctest83View::OnSolid()
{
	// TODO: �ڴ���������������
	Ctest83Doc* pDoc = GetDocument();
	pDoc->flagS = true;
}


void Ctest83View::OnRectangle()
{
	// TODO: �ڴ���������������
	Ctest83Doc* pDoc = GetDocument();
	pDoc->flagR = true;
}


void Ctest83View::OnCircle()
{
	// TODO: �ڴ���������������
	Ctest83Doc* pDoc = GetDocument();
	pDoc->flagC = true;
}


void Ctest83View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctest83Doc* pDoc = GetDocument();
	pDoc->LPoint = point;

	CView::OnLButtonDown(nFlags, point);
}


void Ctest83View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctest83Doc* pDoc = GetDocument();
	pDoc->MPoint = point;

	CView::OnMouseMove(nFlags, point);
}


void Ctest83View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctest83Doc* pDoc = GetDocument();
	CClientDC dc(this);
	if (pDoc->flagS) {
		dc.MoveTo(pDoc->LPoint.x,pDoc->LPoint.y);
		dc.LineTo(pDoc->MPoint.x, pDoc->MPoint.y);
		pDoc->flagS = false;
	}
	else if (pDoc->flagC) {
		dc.Ellipse(pDoc->LPoint.x, pDoc->LPoint.y, pDoc->MPoint.x, pDoc->MPoint.y);
		pDoc->flagC = false;
	}
	else if (pDoc->flagR) {
		dc.Rectangle(pDoc->LPoint.x, pDoc->LPoint.y, pDoc->MPoint.x, pDoc->MPoint.y);
		pDoc->flagR = false;
	}
	CView::OnLButtonUp(nFlags, point);
}
