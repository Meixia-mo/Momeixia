
// test5-1View.cpp : Ctest51View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test5-1.h"
#endif

#include "test5-1Doc.h"
#include "test5-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest51View

IMPLEMENT_DYNCREATE(Ctest51View, CView)

BEGIN_MESSAGE_MAP(Ctest51View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Ctest51View 构造/析构

Ctest51View::Ctest51View()
{
	// TODO: 在此处添加构造代码

}

Ctest51View::~Ctest51View()
{
}

BOOL Ctest51View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest51View 绘制

void Ctest51View::OnDraw(CDC* /*pDC*/)
{
	Ctest51Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctest51View 诊断

#ifdef _DEBUG
void Ctest51View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest51View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest51Doc* Ctest51View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest51Doc)));
	return (Ctest51Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest51View 消息处理程序


void Ctest51View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctest51Doc* pDoc = GetDocument();
	CClientDC dc(this);
	pDoc->x = point.x;
	pDoc->y = point.y;
	pDoc->flag = 0;
	CString s;
	s.Format(_T("按下鼠标左键时鼠标的位置为：%d  %d"), point.x, point.y);
	dc.TextOutW(10,10,s);

	CView::OnLButtonDown(nFlags, point);
}


void Ctest51View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CRect rc;
	Ctest51Doc* pDoc = GetDocument();
	dc.Rectangle(pDoc->x, pDoc->y, point.x, point.y);
	pDoc->flag = 1;

	CView::OnLButtonUp(nFlags, point);
}


void Ctest51View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctest51Doc* pDoc = GetDocument(); 
	CClientDC dc(this);
	CString s;
	if (pDoc->flag == 0) {
		s.Format(_T("鼠标的位置为：%d %d"), point.x, point.y);
		dc.TextOutW(10, 40,s);
	}

	CView::OnMouseMove(nFlags, point);
}
