
// test13-2View.cpp : Ctest132View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test13-2.h"
#endif

#include "test13-2Doc.h"
#include "test13-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest132View

IMPLEMENT_DYNCREATE(Ctest132View, CView)

BEGIN_MESSAGE_MAP(Ctest132View, CView)
	ON_WM_MOVE()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Ctest132View ����/����

Ctest132View::Ctest132View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest132View::~Ctest132View()
{
}

BOOL Ctest132View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest132View ����

void Ctest132View::OnDraw(CDC* pDC)
{
	Ctest132Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(pDoc->rc);
}


// Ctest132View ���

#ifdef _DEBUG
void Ctest132View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest132View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest132Doc* Ctest132View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest132Doc)));
	return (Ctest132Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest132View ��Ϣ�������


void Ctest132View::OnMove(int x, int y)
{
	CView::OnMove(x, y);

	// TODO: �ڴ˴������Ϣ����������
}


void Ctest132View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctest132Doc* pDoc = GetDocument();
	if (pDoc->set) {
        pDoc->rc.left -= 5;
		pDoc->rc.right += 5;
        pDoc->rc.bottom += 1;
		pDoc->rc.top -= 1;
	}
	Invalidate();
	CView::OnMouseMove(nFlags, point);
}


void Ctest132View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctest132Doc* pDoc = GetDocument();
	pDoc->rc.left = point.x - 10;
	pDoc->rc.right = point.x + 10;
	pDoc->rc.top = point.y - 10;
	pDoc->rc.bottom = point.y + 10;
	pDoc->set = true;
	CView::OnLButtonDown(nFlags, point);
}


void Ctest132View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctest132Doc* pDoc = GetDocument();
	pDoc->set = false;
	CView::OnLButtonUp(nFlags, point);
}
