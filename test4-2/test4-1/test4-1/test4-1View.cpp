
// test4-1View.cpp : Ctest41View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test4-1.h"
#endif

#include "test4-1Doc.h"
#include "test4-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest41View

IMPLEMENT_DYNCREATE(Ctest41View, CView)

BEGIN_MESSAGE_MAP(Ctest41View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Ctest41View 构造/析构

Ctest41View::Ctest41View()
{
	// TODO: 在此处添加构造代码

}

Ctest41View::~Ctest41View()
{
}

BOOL Ctest41View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest41View 绘制

void Ctest41View::OnDraw(CDC* /*pDC*/)
{
	Ctest41Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctest41View 诊断

#ifdef _DEBUG
void Ctest41View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest41View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest41Doc* Ctest41View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest41Doc)));
	return (Ctest41Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest41View 消息处理程序


void Ctest41View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CString s;
	s.Format(_T("左键正在被按下"));
	dc.TextOutW(100, 200, s);

	CView::OnLButtonDown(nFlags, point);
}


void Ctest41View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc1(this);
	CString c1;
	c1.Format(_T("   左键正在抬起"));
	dc1.TextOutW(100, 200, c1);
	CView::OnLButtonUp(nFlags, point);
}
