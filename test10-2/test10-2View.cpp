
// test10-2View.cpp : Ctest102View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test10-2.h"
#endif

#include "test10-2Doc.h"
#include "test10-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest102View

IMPLEMENT_DYNCREATE(Ctest102View, CView)

BEGIN_MESSAGE_MAP(Ctest102View, CView)
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Ctest102View 构造/析构

Ctest102View::Ctest102View()
{
	// TODO: 在此处添加构造代码

}

Ctest102View::~Ctest102View()
{
}

BOOL Ctest102View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest102View 绘制

void Ctest102View::OnDraw(CDC* pDC)
{
	Ctest102Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(pDoc->rc);
}


// Ctest102View 诊断

#ifdef _DEBUG
void Ctest102View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest102View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest102Doc* Ctest102View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest102Doc)));
	return (Ctest102Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest102View 消息处理程序


void Ctest102View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	Ctest102Doc* pDoc = GetDocument();
	CString ss;
	CString t = _T("已输入90个以上的字符，请换行！");
	ss.Format(_T("%c"), nChar);
	pDoc->s = pDoc->s +ss;
	int len = pDoc->s.GetLength();
	if (len > 90) {
		dc.TextOutW(100, 100, t);
	}
	else {
		dc.TextOutW(0, 5, pDoc->s);
	}

	CView::OnChar(nChar, nRepCnt, nFlags);
}


void Ctest102View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctest102Doc* pDoc = GetDocument();
	pDoc->s.Tokenize();

	CView::OnLButtonDown(nFlags, point);
}
