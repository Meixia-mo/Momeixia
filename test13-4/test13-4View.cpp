
// test13-4View.cpp : Ctest134View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test13-4.h"
#endif

#include "test13-4Doc.h"
#include "test13-4View.h"
#include "Count.h"
#include "MainFrm.h"
#include "AColor.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest134View

IMPLEMENT_DYNCREATE(Ctest134View, CView)

BEGIN_MESSAGE_MAP(Ctest134View, CView)
	ON_COMMAND(ID_POPOUT, &Ctest134View::OnPopout)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_AddColor, &Ctest134View::OnAddcolor)
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// Ctest134View 构造/析构

Ctest134View::Ctest134View()
{
	// TODO: 在此处添加构造代码
	set = false;
	flag = false;
}

Ctest134View::~Ctest134View()
{
}

BOOL Ctest134View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest134View 绘制

void Ctest134View::OnDraw(CDC* pDC)
{
	Ctest134Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Ellipse(rc);
	CMainFrame* pMain = (CMainFrame*)AfxGetApp()->m_pMainWnd;
	if (set) {
		CPen pen;
		pen.CreatePen(PS_DOT, 1, RGB(0, 250, 0));
		
		//将画笔选入设备上下文pDC
		CPen*   pOldPen = (CPen*)pDC->SelectObject(&pen);
		// 画矩形
		pDC->Rectangle(pMain->cx - pMain->ca, pMain->cy - pMain->cb, pMain->cx + pMain->ca, pMain->cy + pMain->cb);
		set=false;
	}
	if (flag) {
		CBrush brush;
		//将画刷的颜色定为蓝色
		brush.CreateSolidBrush(RGB(pMain->red, pMain->green, pMain->blue1));
		//将画刷选入设备上下文pDC
		CBrush* pOldBrush = (CBrush*)pDC->SelectObject(&brush);
		pDC->Ellipse(pMain->cx - pMain->ca, pMain->cy - pMain->cb, pMain->cx + pMain->ca, pMain->cy + pMain->cb);
		flag = false;
	}
}


// Ctest134View 诊断

#ifdef _DEBUG
void Ctest134View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest134View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest134Doc* Ctest134View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest134Doc)));
	return (Ctest134Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest134View 消息处理程序


void Ctest134View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	Count *pD = new Count;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);

}


void Ctest134View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMainFrame* pMain = (CMainFrame*)AfxGetApp()->m_pMainWnd;
	if (point.x <= pMain->cx && point.y <= pMain->cy) {
		if (pMain->cx - point.x <= pMain->ca && pMain->cy - point.y <= pMain->cb) {
			set = true;
		}
	}
	if (point.x > pMain->cx && point.y <= pMain->cy) {
		if (point.x - pMain->cx  <= pMain->ca && pMain->cy - point.y <= pMain->cb) {
			set = true;
		}
	}
	if (point.x <= pMain->cx && point.y >= pMain->cy) {
		if (pMain->cx - point.x < pMain->ca && point.y - pMain->cy <= pMain->cb) {
			set = true;
		}
	}
	if (point.x >= pMain->cx && point.y >= pMain->cy) {
		if (point.x - pMain->cx < pMain->ca && point.y - pMain->cy <= pMain->cb) {
			set = true;
		}
	}
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}


void Ctest134View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMainFrame* pMain = (CMainFrame*)AfxGetApp()->m_pMainWnd;
	rc.left = pMain->cx - pMain->ca;
	rc.right = pMain->cx + pMain->ca;
	rc.top = pMain->cy - pMain->cb;
	rc.bottom = pMain->cy + pMain->cb;
	Invalidate();
	CView::OnLButtonDblClk(nFlags, point);
}


void Ctest134View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	set = false;
	Invalidate();
	CView::OnLButtonUp(nFlags, point);
}


void Ctest134View::OnAddcolor()
{
	// TODO: 在此添加命令处理程序代码
	AColor *pD1 = new AColor;
	pD1->Create(IDD_DIALOG2);
	pD1->ShowWindow(1);
}


void Ctest134View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = true;
	Invalidate();
	CView::OnRButtonDown(nFlags, point);
}
