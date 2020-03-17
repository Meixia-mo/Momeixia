
// test6-1View.cpp : Ctest61View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test6-1.h"
#endif

#include "test6-1Doc.h"
#include "test6-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest61View

IMPLEMENT_DYNCREATE(Ctest61View, CView)

BEGIN_MESSAGE_MAP(Ctest61View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Ctest61View 构造/析构

Ctest61View::Ctest61View()
{
	// TODO: 在此处添加构造代码

}

Ctest61View::~Ctest61View()
{
}

BOOL Ctest61View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest61View 绘制

void Ctest61View::OnDraw(CDC* /*pDC*/)
{
	Ctest61Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctest61View 诊断

#ifdef _DEBUG
void Ctest61View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest61View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest61Doc* Ctest61View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest61Doc)));
	return (Ctest61Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest61View 消息处理程序


void Ctest61View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctest61Doc* pDoc = GetDocument();
	pDoc->flag = 1;
	pDoc->x1 = point.x;

	CView::OnLButtonDown(nFlags, point);
}


void Ctest61View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	Ctest61Doc* pDoc = GetDocument();
	if (pDoc->flag == 1) {
          pDoc->count++;
		  if (point.x > pDoc->x2) {
            pDoc->jiange = pDoc->jiange+(point.x - pDoc->x2);
		  }
		  else {
			  pDoc->jiange = pDoc->jiange + (pDoc->x2 - point.x  );
		  }
	     
		  pDoc->x2 = point.x;
	}
	
	CView::OnMouseMove(nFlags, point);
}


void Ctest61View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctest61Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString a;
	a.Format(_T("MouseMove发生了%d次"), pDoc->count);
	CString b;
	b.Format(_T("MouseMove横向间隔%d像素放生一次"), pDoc->jiange/ pDoc->count);
	dc.TextOutW(10, 10, a);
	dc.TextOutW(10, 30, b);
	pDoc->count = 0;
	pDoc->jiange = 0;

	CView::OnLButtonUp(nFlags, point);
}
