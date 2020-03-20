
// test6-2View.cpp : Ctest62View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test6-2.h"
#endif

#include "test6-2Doc.h"
#include "test6-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest62View

IMPLEMENT_DYNCREATE(Ctest62View, CView)

BEGIN_MESSAGE_MAP(Ctest62View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Ctest62View ����/����

Ctest62View::Ctest62View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest62View::~Ctest62View()
{
}

BOOL Ctest62View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest62View ����

void Ctest62View::OnDraw(CDC* pDC)
{
	Ctest62Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDC->Rectangle(pDoc->rc);

	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest62View ���

#ifdef _DEBUG
void Ctest62View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest62View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest62Doc* Ctest62View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest62Doc)));
	return (Ctest62Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest62View ��Ϣ�������


void Ctest62View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctest62Doc* pDoc = GetDocument();
	CRect c;
	GetClientRect(&c);
	switch (nChar)
	{
	case VK_LEFT:if (pDoc->rc.left > 0) {
		pDoc->rc.left -= 5;
		pDoc->rc.right -= 5;
	}break;
	case VK_RIGHT:if (pDoc->rc.right < c.right) {
		pDoc->rc.left += 5;
		pDoc->rc.right += 5;
	}break;
	case VK_UP:if (pDoc->rc.top > 0) {
		pDoc->rc.top -= 5;
		pDoc->rc.bottom -= 5;
	}break;
	case VK_DOWN:if (pDoc->rc.bottom <c.bottom) {
		pDoc->rc.top += 5;
		pDoc->rc.bottom += 5;
	}break;
	case VK_HOME:if(pDoc->rc.top>0 && pDoc->rc.left>0){
		pDoc->rc.left -= 5;
		pDoc->rc.top -= 5;
	}break;
	case VK_END: {
		pDoc->rc.left += 5;
		pDoc->rc.top += 5;
	}break;
	default:
		break;
	}
	Invalidate();
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void Ctest62View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctest62Doc* pDoc = GetDocument();
	pDoc->rc.top = pDoc->top;
	pDoc->rc.left = pDoc->left;
	pDoc->rc.bottom = pDoc->bottom;
	pDoc->rc.right = pDoc->right;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
