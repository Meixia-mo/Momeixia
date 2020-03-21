
// test6-3-1View.cpp : Ctest631View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test6-3-1.h"
#endif

#include "test6-3-1Doc.h"
#include "test6-3-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest631View

IMPLEMENT_DYNCREATE(Ctest631View, CView)

BEGIN_MESSAGE_MAP(Ctest631View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// Ctest631View 构造/析构

Ctest631View::Ctest631View()
{
	// TODO: 在此处添加构造代码
	N = 5;
	set = true;
	for (int i = 0; i < N; i++) {
		int t = (i + 1) * 100;
		CRect rect(t, 0, t + 30, 30);
		cr.Add(rect);
		flag[i] = true;
	}

}

Ctest631View::~Ctest631View()
{
}

BOOL Ctest631View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest631View 绘制

void Ctest631View::OnDraw(CDC* pDC)
{
	Ctest631Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	if (set) {
		for (int i = 0; i < N; i++) {
			SetTimer(i, rand() % 400 + 100, NULL);
			set = false;
		}
	}
	for (int i = 0; i < N; i++) {
		pDC->Ellipse(cr[i]);
	}
}


// Ctest631View 诊断

#ifdef _DEBUG
void Ctest631View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest631View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest631Doc* Ctest631View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest631Doc)));
	return (Ctest631Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest631View 消息处理程序


void Ctest631View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int i = nIDEvent;
	CClientDC dc(this);
	CRect cc;
	GetClientRect(&cc);
	int fbottom = cc.bottom;
	if (flag[i]) {
		cr[i].top += 10;
		cr[i].bottom += 10;
		if (cr[i].bottom >= cc.bottom) {
			flag[i] = false;
		}
	}
	else {
		cr[i].top -= 5;
		cr[i].bottom -= 5;
		if (cr[i].top <= cc.top) {
			flag[i] = true;
		}
	}
	Invalidate();


	CView::OnTimer(nIDEvent);
}
