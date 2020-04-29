
// test13-2View.cpp : Ctest132View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test13-2.h"
#endif

#include "test13-2Doc.h"
#include "test13-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest132View

IMPLEMENT_DYNCREATE(Ctest132View, CView)

BEGIN_MESSAGE_MAP(Ctest132View, CView)
	ON_WM_MOVE()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Ctest132View 构造/析构

Ctest132View::Ctest132View()
{
	// TODO: 在此处添加构造代码

}

Ctest132View::~Ctest132View()
{
}

BOOL Ctest132View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest132View 绘制

void Ctest132View::OnDraw(CDC* pDC)
{
	Ctest132Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Ellipse(pDoc->rc);
}


// Ctest132View 诊断

#ifdef _DEBUG
void Ctest132View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest132View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest132Doc* Ctest132View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest132Doc)));
	return (Ctest132Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest132View 消息处理程序


void Ctest132View::OnMove(int x, int y)
{
	CView::OnMove(x, y);

	// TODO: 在此处添加消息处理程序代码
}


void Ctest132View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctest132Doc* pDoc = GetDocument();
	if (pDoc->set) {
        pDoc->rc.left -= 5;
		pDoc->rc.right += 5;
        pDoc->rc.bottom += 1;
		pDoc->rc.top -= 1;
	}
	Invalidate();
	CView::OnMouseMove(nFlags, point);
}


void Ctest132View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctest132Doc* pDoc = GetDocument();
	pDoc->rc.left = point.x - 10;
	pDoc->rc.right = point.x + 10;
	pDoc->rc.top = point.y - 10;
	pDoc->rc.bottom = point.y + 10;
	pDoc->set = true;
	CView::OnLButtonDown(nFlags, point);
}


void Ctest132View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctest132Doc* pDoc = GetDocument();
	pDoc->set = false;
	CView::OnLButtonUp(nFlags, point);
}
