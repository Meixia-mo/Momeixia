
// test13-3View.cpp : Ctest133View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test13-3.h"
#endif

#include "test13-3Doc.h"
#include "test13-3View.h"
#include "Circle.h"
#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest133View

IMPLEMENT_DYNCREATE(Ctest133View, CView)

BEGIN_MESSAGE_MAP(Ctest133View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_COMMAND(ID_POPOUT, &Ctest133View::OnPopout)
END_MESSAGE_MAP()

// Ctest133View 构造/析构

Ctest133View::Ctest133View()
{
	// TODO: 在此处添加构造代码

}

Ctest133View::~Ctest133View()
{
}

BOOL Ctest133View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest133View 绘制

void Ctest133View::OnDraw(CDC* pDC)
{
	Ctest133Doc* pDoc = GetDocument();
	if (!pDoc)
		return;
	pDC->Ellipse(pDoc->rc);
	// TODO: 在此处为本机数据添加绘制代码
}


// Ctest133View 诊断

#ifdef _DEBUG
void Ctest133View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest133View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest133Doc* Ctest133View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest133Doc)));
	return (Ctest133Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest133View 消息处理程序


void Ctest133View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMainFrame* pMain = (CMainFrame*)AfxGetApp()->m_pMainWnd;
	Ctest133Doc* pDoc = GetDocument();
	pDoc->rc.left = pMain->cx - pMain->ca;
	pDoc->rc.right = pMain->cx + pMain->ca;
	pDoc->rc.top = pMain->cy - pMain->cb;
	pDoc->rc.bottom = pMain->cy + pMain->cb;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}


void Ctest133View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CView::OnLButtonUp(nFlags, point);
}


void Ctest133View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CView::OnMouseMove(nFlags, point);
}


void Ctest133View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	Circle *pD = new Circle;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);

}
