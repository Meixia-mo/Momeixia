
// test4-1View.cpp : Ctest41View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test4-1.h"
#endif

#include "test4-1Doc.h"
#include "test4-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest41View

IMPLEMENT_DYNCREATE(Ctest41View, CView)

BEGIN_MESSAGE_MAP(Ctest41View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Ctest41View ����/����

Ctest41View::Ctest41View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest41View::~Ctest41View()
{
}

BOOL Ctest41View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest41View ����

void Ctest41View::OnDraw(CDC* /*pDC*/)
{
	Ctest41Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest41View ���

#ifdef _DEBUG
void Ctest41View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest41View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest41Doc* Ctest41View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest41Doc)));
	return (Ctest41Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest41View ��Ϣ�������


void Ctest41View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString s;
	s.Format(_T("������ڱ�����"));
	dc.TextOutW(100, 200, s);

	CView::OnLButtonDown(nFlags, point);
}


void Ctest41View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc1(this);
	CString c1;
	c1.Format(_T("   �������̧��"));
	dc1.TextOutW(100, 200, c1);
	CView::OnLButtonUp(nFlags, point);
}
