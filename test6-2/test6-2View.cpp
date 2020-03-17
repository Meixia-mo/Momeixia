
// test6-2View.cpp : Ctest62View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test6-2.h"
#endif

#include "test6-2Doc.h"
#include "test6-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest62View

IMPLEMENT_DYNCREATE(Ctest62View, CView)

BEGIN_MESSAGE_MAP(Ctest62View, CView)
END_MESSAGE_MAP()

// Ctest62View 构造/析构

Ctest62View::Ctest62View()
{
	// TODO: 在此处添加构造代码

}

Ctest62View::~Ctest62View()
{
}

BOOL Ctest62View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest62View 绘制

void Ctest62View::OnDraw(CDC* pDC)
{
	Ctest62Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctest62View 诊断

#ifdef _DEBUG
void Ctest62View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest62View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest62Doc* Ctest62View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest62Doc)));
	return (Ctest62Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest62View 消息处理程序
