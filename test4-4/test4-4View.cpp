
// test4-4View.cpp : Ctest44View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test4-4.h"
#endif

#include "test4-4Doc.h"
#include "test4-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest44View

IMPLEMENT_DYNCREATE(Ctest44View, CView)

BEGIN_MESSAGE_MAP(Ctest44View, CView)
//	ON_WM_LBUTTONDOWN()
ON_WM_LBUTTONDOWN()
ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// Ctest44View 构造/析构

Ctest44View::Ctest44View()
{
	// TODO: 在此处添加构造代码

}

Ctest44View::~Ctest44View()
{
}

BOOL Ctest44View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest44View 绘制

void Ctest44View::OnDraw(CDC* pDC)
{
	Ctest44Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CClientDC dc(this);
	dc.Rectangle(pDoc->A);
	dc.Rectangle(pDoc->B);
	dc.Rectangle(pDoc->C);
	dc.Rectangle(pDoc->D);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctest44View 诊断

#ifdef _DEBUG
void Ctest44View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest44View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest44Doc* Ctest44View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest44Doc)));
	return (Ctest44Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest44View 消息处理程序


//void Ctest44View::OnLButtonDown(UINT nFlags, CPoint point)
//{
//	// TODO: 在此添加消息处理程序代码和/或调用默认值
//	Ctest44Doc* pDoc = GetDocument();
//
//	CView::OnLButtonDown(nFlags, point);
//}


void Ctest44View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	Ctest44Doc* pDoc = GetDocument();
	
	if (pDoc->A.left <= point.x&&pDoc->A.right >= point.x&&pDoc->A.top <= point.y&&pDoc->A.bottom >= point.y) {
		CString s;
		s.Format(_T("%d"),pDoc-> a);
		dc.TextOutW(pDoc->A.left + 40, pDoc->A.top + 40, s);
	}
	else if (pDoc->B.left <= point.x&&pDoc->B.right >= point.x&&pDoc->B.top <= point.y&&pDoc->B.bottom >= point.y) {
		CString s;
		s.Format(_T("%d"), pDoc->b);
		dc.TextOutW(pDoc->B.left + 40, pDoc->B.top + 40, s);
	}
	else if (pDoc->C.left <= point.x&&pDoc->C.right >= point.x&&pDoc->C.top <= point.y&&pDoc->C.bottom >= point.y) {
		CString s;
		s.Format(_T("%d"),pDoc->a + pDoc->b);
		dc.TextOutW(pDoc->C.left + 40, pDoc->C.top + 40, s);
	}
	else if (pDoc->D.left <= point.x&&pDoc->D.right >= point.x&&pDoc->D.top <= point.y&&pDoc->D.bottom >= point.y) {
		pDoc->count++;
		if (pDoc->count == 1) {
			CString s;
			s.Format(_T("+"));
			dc.TextOutW(pDoc->D.left + 40, pDoc->D.top + 40, s);
		}
		else if (pDoc->count == 2) {
			CString s;
			s.Format(_T("  -"));
			dc.TextOutW(pDoc->D.left + 40, pDoc->D.top + 40, s);
		}
		else if (pDoc->count == 3) {
			CString s;
			s.Format(_T("×"));
			dc.TextOutW(pDoc->D.left + 40, pDoc->D.top + 40, s);
		}
		else if (pDoc->count == 4) {
			CString s;
			s.Format(_T("÷"));
			dc.TextOutW(pDoc->D.left + 40, pDoc->D.top + 40, s);
		}
		
	}
	else {
		CString s;
		s.Format(_T("无效"));
		dc.TextOutW(point.x, point.y, s);
	}

	CView::OnLButtonDown(nFlags, point);
}


void Ctest44View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	Ctest44Doc* pDoc = GetDocument();
	if (pDoc->count==1) {
		CString s;
		s.Format(_T("%d"), pDoc->a + pDoc->b);
		dc.TextOutW(pDoc->C.left + 40, pDoc->C.top + 40, s);
	}
	else if (pDoc->count == 2) {
		CString s;
		s.Format(_T(" %d"), pDoc->a - pDoc->b);
		dc.TextOutW(pDoc->C.left + 40, pDoc->C.top + 40, s);
	}
	else if (pDoc->count == 3) {
		CString s;
		s.Format(_T("%d"), pDoc->a * pDoc->b);
		dc.TextOutW(pDoc->C.left + 40, pDoc->C.top + 40, s);
	}
	else if (pDoc->count == 4) {
		CString s;
		s.Format(_T("  %d"), pDoc->a / pDoc->b);
		dc.TextOutW(pDoc->C.left + 40, pDoc->C.top + 40, s);
		pDoc->count = 0;
	}
	CView::OnRButtonDown(nFlags, point);
}
