
// text2-2View.cpp : Ctext22View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text2-2.h"
#endif

#include "text2-2Doc.h"
#include "text2-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext22View

IMPLEMENT_DYNCREATE(Ctext22View, CView)

BEGIN_MESSAGE_MAP(Ctext22View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// Ctext22View ����/����

Ctext22View::Ctext22View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext22View::~Ctext22View()
{
}

BOOL Ctext22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext22View ����

void Ctext22View::OnDraw(CDC* /*pDC*/)
{
	Ctext22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext22View ���

#ifdef _DEBUG
void Ctext22View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext22Doc* Ctext22View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext22Doc)));
	return (Ctext22Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext22View ��Ϣ�������


void Ctext22View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CString cc;
	CClientDC dc(this);
	Ctext22Doc* pDoc = GetDocument();
	pDoc->count = pDoc->count + 1;

	CView::OnLButtonDown(nFlags, point);
}


void Ctext22View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctext22Doc* pDoc = GetDocument();
	int a = pDoc->count;
	CString s1;
	s1.Format(_T("%d"), a);
	CClientDC dc(this);
	dc.TextOutW(100, 200, s1);

	CView::OnRButtonDown(nFlags, point);
}
