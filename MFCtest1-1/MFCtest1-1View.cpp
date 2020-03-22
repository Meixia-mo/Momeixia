
// MFCtest1-1View.cpp : CMFCtest11View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCtest1-1.h"
#endif

#include "MFCtest1-1Doc.h"
#include "MFCtest1-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCtest11View

IMPLEMENT_DYNCREATE(CMFCtest11View, CView)

BEGIN_MESSAGE_MAP(CMFCtest11View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCtest11View 构造/析构

CMFCtest11View::CMFCtest11View()
{
	// TODO: 在此处添加构造代码

}

CMFCtest11View::~CMFCtest11View()
{
}

BOOL CMFCtest11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCtest11View 绘制

void CMFCtest11View::OnDraw(CDC* pDC)
{
	CMFCtest11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	if (pDoc->set) {
		pDC->Ellipse(pDoc->rc);
	}
}


// CMFCtest11View 诊断

#ifdef _DEBUG
void CMFCtest11View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCtest11View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCtest11Doc* CMFCtest11View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCtest11Doc)));
	return (CMFCtest11Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCtest11View 消息处理程序


void CMFCtest11View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s;
	CClientDC dc(this);
	CMFCtest11Doc* pDoc = GetDocument();
	pDoc->set = true;
	int a = rand() % 100 + 50;
	pDoc->rc.left = point.x + a;
	pDoc->rc.top = point.y + a;
	pDoc->rc.right= point.x + rand()%20 + 50;
	pDoc->rc.bottom = point.y + rand()%30 + 50;
	dc.Ellipse(pDoc->rc);

	Invalidate();

	CView::OnLButtonDown(nFlags, point);
}
