
// text2-2View.cpp : Ctext22View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "text2-2.h"
#endif

#include "text2-2Doc.h"
#include "text2-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext22View

IMPLEMENT_DYNCREATE(Ctext22View, CView)

BEGIN_MESSAGE_MAP(Ctext22View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// Ctext22View 构造/析构

Ctext22View::Ctext22View()
{
	// TODO: 在此处添加构造代码

}

Ctext22View::~Ctext22View()
{
}

BOOL Ctext22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctext22View 绘制

void Ctext22View::OnDraw(CDC* /*pDC*/)
{
	Ctext22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctext22View 诊断

#ifdef _DEBUG
void Ctext22View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext22Doc* Ctext22View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext22Doc)));
	return (Ctext22Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext22View 消息处理程序


void Ctext22View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CString cc;
	CClientDC dc(this);
	Ctext22Doc* pDoc = GetDocument();
	pDoc->count = pDoc->count + 1;

	CView::OnLButtonDown(nFlags, point);
}


void Ctext22View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctext22Doc* pDoc = GetDocument();
	int a = pDoc->count;
	CString s1;
	s1.Format(_T("%d"), a);
	CClientDC dc(this);
	dc.TextOutW(100, 200, s1);

	CView::OnRButtonDown(nFlags, point);
}
