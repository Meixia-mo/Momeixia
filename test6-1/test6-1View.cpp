
// test6-1View.cpp : Ctest61View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test6-1.h"
#endif

#include "test6-1Doc.h"
#include "test6-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest61View

IMPLEMENT_DYNCREATE(Ctest61View, CView)

BEGIN_MESSAGE_MAP(Ctest61View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Ctest61View ����/����

Ctest61View::Ctest61View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest61View::~Ctest61View()
{
}

BOOL Ctest61View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest61View ����

void Ctest61View::OnDraw(CDC* /*pDC*/)
{
	Ctest61Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest61View ���

#ifdef _DEBUG
void Ctest61View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest61View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest61Doc* Ctest61View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest61Doc)));
	return (Ctest61Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest61View ��Ϣ�������


void Ctest61View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctest61Doc* pDoc = GetDocument();
	pDoc->flag = 1;
	pDoc->x1 = point.x;

	CView::OnLButtonDown(nFlags, point);
}


void Ctest61View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	Ctest61Doc* pDoc = GetDocument();
	if (pDoc->flag == 1) {
          pDoc->count++;
		  if (point.x > pDoc->x2) {
            pDoc->jiange = pDoc->jiange+(point.x - pDoc->x2);
		  }
		  else {
			  pDoc->jiange = pDoc->jiange + (pDoc->x2 - point.x  );
		  }
	     
		  pDoc->x2 = point.x;
	}
	
	CView::OnMouseMove(nFlags, point);
}


void Ctest61View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctest61Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString a;
	a.Format(_T("MouseMove������%d��"), pDoc->count);
	CString b;
	b.Format(_T("MouseMove������%d���ط���һ��"), pDoc->jiange/ pDoc->count);
	dc.TextOutW(10, 10, a);
	dc.TextOutW(10, 30, b);
	pDoc->count = 0;
	pDoc->jiange = 0;

	CView::OnLButtonUp(nFlags, point);
}
