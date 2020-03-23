
// test7-1-1View.cpp : Ctest711View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test7-1-1.h"
#endif

#include "test7-1-1Doc.h"
#include "test7-1-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest711View

IMPLEMENT_DYNCREATE(Ctest711View, CView)

BEGIN_MESSAGE_MAP(Ctest711View, CView)
	ON_COMMAND(ID_VIEW_CIRCLE, &Ctest711View::OnViewCircle)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// Ctest711View 构造/析构

Ctest711View::Ctest711View()
{
	// TODO: 在此处添加构造代码

}

Ctest711View::~Ctest711View()
{
}

BOOL Ctest711View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest711View 绘制

void Ctest711View::OnDraw(CDC* /*pDC*/)
{
	Ctest711Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	SetTimer(pDoc->r, 1500, NULL);
	if (pDoc->set) {
    CClientDC dc(this);
	CRect rc;
	GetClientRect(&rc);
	dc.Ellipse(rc.right / 2 - pDoc->r, rc.bottom / 2 - pDoc->r, rc.right / 2 + pDoc->r, rc.bottom / 2 + pDoc->r);
  }
	
}


// Ctest711View 诊断

#ifdef _DEBUG
void Ctest711View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest711View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest711Doc* Ctest711View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest711Doc)));
	return (Ctest711Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest711View 消息处理程序


void Ctest711View::OnViewCircle()
{
	// TODO: 在此添加命令处理程序代码
	Ctest711Doc* pDoc = GetDocument();
	pDoc->set = true;
	CClientDC dc(this);
	CRect rc;
	GetClientRect(&rc);
	dc.Ellipse(rc.right / 2 - pDoc->r, rc.bottom / 2 - pDoc->r, rc.right / 2 + pDoc->r, rc.bottom / 2 + pDoc->r);
}


void Ctest711View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctest711Doc* pDoc = GetDocument();
	pDoc->r += 1;
	Invalidate();

	CView::OnTimer(nIDEvent);
}
