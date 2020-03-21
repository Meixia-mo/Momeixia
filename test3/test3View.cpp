
// test3View.cpp : Ctest3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test3.h"
#endif

#include "test3Doc.h"
#include "test3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest3View

IMPLEMENT_DYNCREATE(Ctest3View, CView)

BEGIN_MESSAGE_MAP(Ctest3View, CView)
END_MESSAGE_MAP()

// Ctest3View 构造/析构

Ctest3View::Ctest3View()
{
	// TODO: 在此处添加构造代码

}

Ctest3View::~Ctest3View()
{
}

BOOL Ctest3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest3View 绘制

void Ctest3View::OnDraw(CDC* /*pDC*/)
{
	Ctest3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctest3View 诊断

#ifdef _DEBUG
void Ctest3View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest3Doc* Ctest3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest3Doc)));
	return (Ctest3Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest3View 消息处理程序
