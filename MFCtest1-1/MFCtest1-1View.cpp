
// MFCtest1-1View.cpp : CMFCtest11View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCtest1-1.h"
#endif

#include "MFCtest1-1Doc.h"
#include "MFCtest1-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCtest11View

IMPLEMENT_DYNCREATE(CMFCtest11View, CView)

BEGIN_MESSAGE_MAP(CMFCtest11View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCtest11View ����/����

CMFCtest11View::CMFCtest11View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCtest11View::~CMFCtest11View()
{
}

BOOL CMFCtest11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCtest11View ����

void CMFCtest11View::OnDraw(CDC* pDC)
{
	CMFCtest11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	if (pDoc->set) {
		pDC->Ellipse(pDoc->rc);
	}
}


// CMFCtest11View ���

#ifdef _DEBUG
void CMFCtest11View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCtest11View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCtest11Doc* CMFCtest11View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCtest11Doc)));
	return (CMFCtest11Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCtest11View ��Ϣ�������


void CMFCtest11View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s;
	CClientDC dc(this);
	CMFCtest11Doc* pDoc = GetDocument();
	pDoc->set = true;
	int a = rand() % 100 + 50;
	pDoc->rc.left = point.x + a;
	pDoc->rc.top = point.y + a;
	pDoc->rc.right= point.x + rand()%20 + 50;
	pDoc->rc.bottom = point.y + rand()%30 + 50;
	dc.Ellipse(pDoc->rc);

	Invalidate();

	CView::OnLButtonDown(nFlags, point);
}
