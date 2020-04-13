
// test10-1View.cpp : Ctest101View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test10-1.h"
#endif

#include "test10-1Doc.h"
#include "test10-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest101View

IMPLEMENT_DYNCREATE(Ctest101View, CView)

BEGIN_MESSAGE_MAP(Ctest101View, CView)
	ON_WM_KEYDOWN()
	ON_WM_CHAR()
END_MESSAGE_MAP()

// Ctest101View 构造/析构

Ctest101View::Ctest101View()
{
	// TODO: 在此处添加构造代码

}

Ctest101View::~Ctest101View()
{
}

BOOL Ctest101View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest101View 绘制

void Ctest101View::OnDraw(CDC* pDC)
{
	Ctest101Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(pDoc->rc);
}


// Ctest101View 诊断

#ifdef _DEBUG
void Ctest101View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest101View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest101Doc* Ctest101View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest101Doc)));
	return (Ctest101Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest101View 消息处理程序


void Ctest101View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void Ctest101View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	Ctest101Doc* pDoc = GetDocument();
	CString ss;
	CString t = _T("已输入90个以上的字符，请换行！");
	ss.Format(_T("%c"), nChar);
    pDoc->s = pDoc->s + ss;
	int len=pDoc->s.GetLength();
	if (len > 90) {
		dc.TextOutW(100, 100, t);
	}
	else {
		dc.TextOutW(0, 5, pDoc->s);
	}
	CView::OnChar(nChar, nRepCnt, nFlags);
}
