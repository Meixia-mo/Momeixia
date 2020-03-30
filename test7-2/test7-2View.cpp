
// test7-2View.cpp : Ctest72View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test7-2.h"
#endif

#include "test7-2Doc.h"
#include "test7-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest72View

IMPLEMENT_DYNCREATE(Ctest72View, CView)

BEGIN_MESSAGE_MAP(Ctest72View, CView)
	ON_COMMAND(ID_VIEW_CIRCLE, &Ctest72View::OnViewCircle)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// Ctest72View ����/����

Ctest72View::Ctest72View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest72View::~Ctest72View()
{
}

BOOL Ctest72View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest72View ����

void Ctest72View::OnDraw(CDC* pDC)
{
	Ctest72Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CClientDC dc(this);
    CRect rc;
    GetClientRect(&rc);
	SetTimer(pDoc->r,1500,NULL);
	int color = RGB(pDoc->red, pDoc->green, pDoc->blue);
	CPen newPen(PS_SOLID, 4, color);
	CPen*oldPen = pDC->SelectObject(&newPen);
	if (pDoc->set) {
		pDC->Ellipse(rc.right / 2 - pDoc->r, rc.bottom / 2 - pDoc->r, rc.right / 2 + pDoc->r, rc.bottom / 2 + pDoc->r);
		pDC->SelectObject(oldPen);
	}
	if (rc.right / 2 - pDoc->r <= rc.left|| rc.bottom / 2 - pDoc->r<=rc.top) {
		pDoc->r = 0;
	}
	
}


// Ctest72View ���

#ifdef _DEBUG
void Ctest72View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest72View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest72Doc* Ctest72View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest72Doc)));
	return (Ctest72Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest72View ��Ϣ�������


void Ctest72View::OnViewCircle()
{
	// TODO: �ڴ���������������
	Ctest72Doc* pDoc = GetDocument();
	pDoc->set = true;
	CClientDC dc(this);
	CRect rc;
	GetClientRect(&rc);
	dc.Ellipse(rc.right / 2 - pDoc->r, rc.bottom / 2 - pDoc->r, rc.right / 2 + pDoc->r, rc.bottom / 2 + pDoc->r);
}


void Ctest72View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctest72Doc* pDoc = GetDocument();
	
       pDoc->r += 1;
	
	if (pDoc->red >= 250) {
		pDoc->red = 0;
	}
	if (pDoc->green >= 250) {
		pDoc->green = 0;
	}
	if (pDoc->blue >= 250) {
		pDoc->blue = 0;
	}
	pDoc->red += 30;
	pDoc->green += 10;
	pDoc->blue += 15;
	Invalidate();

	CView::OnTimer(nIDEvent);
}
