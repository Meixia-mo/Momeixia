
// test8-3View.cpp : Ctest83View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test8-3.h"
#endif

#include "test8-3Doc.h"
#include "test8-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest83View

IMPLEMENT_DYNCREATE(Ctest83View, CView)

BEGIN_MESSAGE_MAP(Ctest83View, CView)
	ON_COMMAND(ID_Solid, &Ctest83View::OnSolid)
	ON_COMMAND(ID_Rectangle, &Ctest83View::OnRectangle)
	ON_COMMAND(ID_Circle, &Ctest83View::OnCircle)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Ctest83View 构造/析构

Ctest83View::Ctest83View()
{
	// TODO: 在此处添加构造代码

}

Ctest83View::~Ctest83View()
{
}

BOOL Ctest83View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest83View 绘制

void Ctest83View::OnDraw(CDC* pDC)
{
	Ctest83Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctest83View 诊断

#ifdef _DEBUG
void Ctest83View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest83View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest83Doc* Ctest83View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest83Doc)));
	return (Ctest83Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest83View 消息处理程序


void Ctest83View::OnSolid()
{
	// TODO: 在此添加命令处理程序代码
	Ctest83Doc* pDoc = GetDocument();
	pDoc->flagS = true;
}


void Ctest83View::OnRectangle()
{
	// TODO: 在此添加命令处理程序代码
	Ctest83Doc* pDoc = GetDocument();
	pDoc->flagR = true;
}


void Ctest83View::OnCircle()
{
	// TODO: 在此添加命令处理程序代码
	Ctest83Doc* pDoc = GetDocument();
	pDoc->flagC = true;
}


void Ctest83View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctest83Doc* pDoc = GetDocument();
	pDoc->LPoint = point;

	CView::OnLButtonDown(nFlags, point);
}


void Ctest83View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctest83Doc* pDoc = GetDocument();
	pDoc->MPoint = point;

	CView::OnMouseMove(nFlags, point);
}


void Ctest83View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctest83Doc* pDoc = GetDocument();
	CClientDC dc(this);
	if (pDoc->flagS) {
		dc.MoveTo(pDoc->LPoint.x,pDoc->LPoint.y);
		dc.LineTo(pDoc->MPoint.x, pDoc->MPoint.y);
		pDoc->flagS = false;
	}
	else if (pDoc->flagC) {
		dc.Ellipse(pDoc->LPoint.x, pDoc->LPoint.y, pDoc->MPoint.x, pDoc->MPoint.y);
		pDoc->flagC = false;
	}
	else if (pDoc->flagR) {
		dc.Rectangle(pDoc->LPoint.x, pDoc->LPoint.y, pDoc->MPoint.x, pDoc->MPoint.y);
		pDoc->flagR = false;
	}
	CView::OnLButtonUp(nFlags, point);
}
