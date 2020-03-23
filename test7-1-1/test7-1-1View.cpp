
// test7-1-1View.cpp : Ctest711View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test7-1-1.h"
#endif

#include "test7-1-1Doc.h"
#include "test7-1-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest711View

IMPLEMENT_DYNCREATE(Ctest711View, CView)

BEGIN_MESSAGE_MAP(Ctest711View, CView)
	ON_COMMAND(ID_VIEW_CIRCLE, &Ctest711View::OnViewCircle)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// Ctest711View ����/����

Ctest711View::Ctest711View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest711View::~Ctest711View()
{
}

BOOL Ctest711View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest711View ����

void Ctest711View::OnDraw(CDC* /*pDC*/)
{
	Ctest711Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	SetTimer(pDoc->r, 1500, NULL);
	if (pDoc->set) {
    CClientDC dc(this);
	CRect rc;
	GetClientRect(&rc);
	dc.Ellipse(rc.right / 2 - pDoc->r, rc.bottom / 2 - pDoc->r, rc.right / 2 + pDoc->r, rc.bottom / 2 + pDoc->r);
  }
	
}


// Ctest711View ���

#ifdef _DEBUG
void Ctest711View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest711View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest711Doc* Ctest711View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest711Doc)));
	return (Ctest711Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest711View ��Ϣ�������


void Ctest711View::OnViewCircle()
{
	// TODO: �ڴ���������������
	Ctest711Doc* pDoc = GetDocument();
	pDoc->set = true;
	CClientDC dc(this);
	CRect rc;
	GetClientRect(&rc);
	dc.Ellipse(rc.right / 2 - pDoc->r, rc.bottom / 2 - pDoc->r, rc.right / 2 + pDoc->r, rc.bottom / 2 + pDoc->r);
}


void Ctest711View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctest711Doc* pDoc = GetDocument();
	pDoc->r += 1;
	Invalidate();

	CView::OnTimer(nIDEvent);
}
