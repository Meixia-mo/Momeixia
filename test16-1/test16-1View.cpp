
// test16-1View.cpp : Ctest161View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test16-1.h"
#endif

#include "test16-1Doc.h"
#include "test16-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest161View

IMPLEMENT_DYNCREATE(Ctest161View, CView)

BEGIN_MESSAGE_MAP(Ctest161View, CView)
END_MESSAGE_MAP()

// Ctest161View 构造/析构

Ctest161View::Ctest161View()
{
	// TODO: 在此处添加构造代码

}

Ctest161View::~Ctest161View()
{
}

BOOL Ctest161View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest161View 绘制

void Ctest161View::OnDraw(CDC* /*pDC*/)
{
	Ctest161Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctest161View 诊断

#ifdef _DEBUG
void Ctest161View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest161View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest161Doc* Ctest161View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest161Doc)));
	return (Ctest161Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest161View 消息处理程序
