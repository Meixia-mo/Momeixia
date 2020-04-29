
// test11-2View.cpp : Ctest112View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// Ctest112View 构造/析构

Ctest112View::Ctest112View()
{
	// TODO: 在此处添加构造代码
}

Ctest112View::~Ctest112View()
{
}

BOOL Ctest112View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest112View 绘制

void Ctest112View::OnDraw(CDC* pDC)
{
	Ctest112Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO: 在此处为本机数据添加绘制代码
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


// Ctest112View 诊断

#ifdef _DEBUG
void Ctest112View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest112View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest112Doc* Ctest112View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest112Doc)));
	return (Ctest112Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest112View 消息处理程序


void Ctest112View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
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
	// TODO: 在此添加消息处理程序代码和/或调用默认值
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
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctest112Doc* pDoc = GetDocument();
	pDoc->set2 = true;
	CView::OnLButtonDblClk(nFlags, point);
}
