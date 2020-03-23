
// test7-1View.cpp : Ctest71View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test7-1.h"
#endif

#include "test7-1Doc.h"
#include "test7-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest71View

IMPLEMENT_DYNCREATE(Ctest71View, CView)

BEGIN_MESSAGE_MAP(Ctest71View, CView)
END_MESSAGE_MAP()

// Ctest71View 构造/析构

Ctest71View::Ctest71View()
{
	// TODO: 在此处添加构造代码

}

Ctest71View::~Ctest71View()
{
}

BOOL Ctest71View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest71View 绘制

void Ctest71View::OnDraw(CDC* /*pDC*/)
{
	Ctest71Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctest71View 诊断

#ifdef _DEBUG
void Ctest71View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest71View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest71Doc* Ctest71View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest71Doc)));
	return (Ctest71Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest71View 消息处理程序
