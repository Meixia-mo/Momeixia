
// test4-2View.cpp : Ctest42View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test4-2.h"
#endif

#include "test4-2Doc.h"
#include "test4-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest42View

IMPLEMENT_DYNCREATE(Ctest42View, CView)

BEGIN_MESSAGE_MAP(Ctest42View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Ctest42View ����/����

Ctest42View::Ctest42View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest42View::~Ctest42View()
{
}

BOOL Ctest42View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest42View ����

void Ctest42View::OnDraw(CDC* /*pDC*/)
{
	Ctest42Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest42View ���

#ifdef _DEBUG
void Ctest42View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest42View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest42Doc* Ctest42View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest42Doc)));
	return (Ctest42Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest42View ��Ϣ�������


void Ctest42View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctest42Doc* pDoc = GetDocument();
	CString s;
	CClientDC dc(this);
	s.Format(_T("A+B=%d"), pDoc->A + pDoc->B);
	dc.TextOutW(200, 200, s);

	CView::OnLButtonDown(nFlags, point);
}
