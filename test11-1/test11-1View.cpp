
// test11-1View.cpp : Ctest111View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test11-1.h"
#endif

#include "test11-1Doc.h"
#include "test11-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest111View

IMPLEMENT_DYNCREATE(Ctest111View, CView)

BEGIN_MESSAGE_MAP(Ctest111View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Ctest111View 构造/析构

Ctest111View::Ctest111View()
{
	// TODO: 在此处添加构造代码

}

Ctest111View::~Ctest111View()
{
}

BOOL Ctest111View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest111View 绘制

void Ctest111View::OnDraw(CDC* pDC)
{
	Ctest111Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->c.x - pDoc->r, pDoc->c.y - pDoc->r1, pDoc->c.x + pDoc->r, pDoc->c.y + pDoc->r1);

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctest111View 诊断

#ifdef _DEBUG
void Ctest111View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest111View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest111Doc* Ctest111View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest111Doc)));
	return (Ctest111Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest111View 消息处理程序


void Ctest111View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctest111Doc* pDoc = GetDocument();
	pDoc->set = true;
	pDoc->c = point;
	CView::OnLButtonDown(nFlags, point);
}


void Ctest111View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctest111Doc* pDoc = GetDocument();
	if (pDoc->set) {
      pDoc->c = point;
	  Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}


void Ctest111View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctest111Doc* pDoc = GetDocument();
	pDoc->c = point;
	Invalidate();
	pDoc->set = false;
	CView::OnLButtonUp(nFlags, point);
}
