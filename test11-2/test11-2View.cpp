
// test11-2View.cpp : Ctest112View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test11-2.h"
#endif

#include "test11-2Doc.h"
#include "test11-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest112View

IMPLEMENT_DYNCREATE(Ctest112View, CView)

BEGIN_MESSAGE_MAP(Ctest112View, CView)
	ON_WM_TIMER()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// Ctest112View ����/����

Ctest112View::Ctest112View()
{
	// TODO: �ڴ˴���ӹ������
}

Ctest112View::~Ctest112View()
{
}

BOOL Ctest112View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest112View ����

void Ctest112View::OnDraw(CDC* pDC)
{
	Ctest112Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	/*CRect rc;
	CClientDC dc(this);
	GetClientRect(&rc);
	if (pDoc->set) {
		pDoc->cx = rc.left;
		pDoc->cy = (rc.bottom - rc.top) / 2;
		pDoc->rx = rc.right;
		pDoc->set = false;
	}*/
	pDC->Ellipse(pDoc->cx, pDoc->cy, pDoc->cx + 30, pDoc->cy + 30);
}


// Ctest112View ���

#ifdef _DEBUG
void Ctest112View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest112View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest112Doc* Ctest112View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest112Doc)));
	return (Ctest112Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest112View ��Ϣ�������


void Ctest112View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctest112Doc* pDoc = GetDocument();
	if (pDoc->set2) {
		pDoc->cx += 0;
	}
	else if (pDoc->set1 && pDoc->set2 == false) {
		pDoc->cx += 10;
	}
	else if (pDoc->set1 == false && pDoc->set2 == false) {
		pDoc->cx -= 10;
	}
	if (pDoc->cx >= pDoc->rx) {
		pDoc->set1 = false;
	}
	Invalidate();
	CView::OnTimer(nIDEvent);
}


void Ctest112View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctest112Doc* pDoc = GetDocument();
	SetTimer(1, 100, NULL);
	CRect rc;
	CClientDC dc(this);
	GetClientRect(&rc);
	pDoc->cx = rc.left;
	pDoc->cy = (rc.bottom - rc.top) / 2;
	pDoc->rx = rc.right;
	
	if (pDoc->cx < pDoc->rx) {
      pDoc->set1 = true;
	}
	else {
		pDoc->set1 = false;
	}
	pDoc->set2 = false;
	CView::OnLButtonDown(nFlags, point);
}


void Ctest112View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctest112Doc* pDoc = GetDocument();
	pDoc->set2 = true;
	CView::OnLButtonDblClk(nFlags, point);
}
