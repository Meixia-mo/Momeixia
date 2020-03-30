
// test7-2View.cpp : Ctest72View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test7-2.h"
#endif

#include "test7-2Doc.h"
#include "test7-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest72View

IMPLEMENT_DYNCREATE(Ctest72View, CView)

BEGIN_MESSAGE_MAP(Ctest72View, CView)
	ON_COMMAND(ID_VIEW_CIRCLE, &Ctest72View::OnViewCircle)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// Ctest72View 构造/析构

Ctest72View::Ctest72View()
{
	// TODO: 在此处添加构造代码

}

Ctest72View::~Ctest72View()
{
}

BOOL Ctest72View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest72View 绘制

void Ctest72View::OnDraw(CDC* pDC)
{
	Ctest72Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CClientDC dc(this);
    CRect rc;
    GetClientRect(&rc);
	SetTimer(pDoc->r,1500,NULL);
	int color = RGB(pDoc->red, pDoc->green, pDoc->blue);
	CPen newPen(PS_SOLID, 4, color);
	CPen*oldPen = pDC->SelectObject(&newPen);
	if (pDoc->set) {
		pDC->Ellipse(rc.right / 2 - pDoc->r, rc.bottom / 2 - pDoc->r, rc.right / 2 + pDoc->r, rc.bottom / 2 + pDoc->r);
		pDC->SelectObject(oldPen);
	}
	if (rc.right / 2 - pDoc->r <= rc.left|| rc.bottom / 2 - pDoc->r<=rc.top) {
		pDoc->r = 0;
	}
	
}


// Ctest72View 诊断

#ifdef _DEBUG
void Ctest72View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest72View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest72Doc* Ctest72View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest72Doc)));
	return (Ctest72Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest72View 消息处理程序


void Ctest72View::OnViewCircle()
{
	// TODO: 在此添加命令处理程序代码
	Ctest72Doc* pDoc = GetDocument();
	pDoc->set = true;
	CClientDC dc(this);
	CRect rc;
	GetClientRect(&rc);
	dc.Ellipse(rc.right / 2 - pDoc->r, rc.bottom / 2 - pDoc->r, rc.right / 2 + pDoc->r, rc.bottom / 2 + pDoc->r);
}


void Ctest72View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctest72Doc* pDoc = GetDocument();
	
       pDoc->r += 1;
	
	if (pDoc->red >= 250) {
		pDoc->red = 0;
	}
	if (pDoc->green >= 250) {
		pDoc->green = 0;
	}
	if (pDoc->blue >= 250) {
		pDoc->blue = 0;
	}
	pDoc->red += 30;
	pDoc->green += 10;
	pDoc->blue += 15;
	Invalidate();

	CView::OnTimer(nIDEvent);
}
