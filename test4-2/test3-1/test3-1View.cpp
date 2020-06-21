
// test3-1View.cpp : Ctest31View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test3-1.h"
#endif

#include "test3-1Doc.h"
#include "test3-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest31View

IMPLEMENT_DYNCREATE(Ctest31View, CView)

BEGIN_MESSAGE_MAP(Ctest31View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Ctest31View 构造/析构

Ctest31View::Ctest31View()
{
	// TODO: 在此处添加构造代码

}

Ctest31View::~Ctest31View()
{
}

BOOL Ctest31View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest31View 绘制

void Ctest31View::OnDraw(CDC* pDC)
{
	Ctest31Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	if (pDoc->set) {
		pDC->Ellipse(pDoc->rc);
	}
}


// Ctest31View 诊断

#ifdef _DEBUG
void Ctest31View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest31View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest31Doc* Ctest31View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest31Doc)));
	return (Ctest31Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest31View 消息处理程序


void Ctest31View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctest31Doc* pDoc = GetDocument();
	pDoc->set = true;
	CClientDC dc(this);
	pDoc->rc.left = point.x;
	pDoc->rc.top = point.y;
	pDoc->rc.left = point.x+rand()%20+100;
	pDoc->rc.top = point.y+rand()%30+100;

	dc.Ellipse(pDoc->rc);
	Invalidate();

	CView::OnLButtonDown(nFlags, point);
}
