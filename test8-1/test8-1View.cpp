
// test8-1View.cpp : Ctest81View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test8-1.h"
#endif

#include "test8-1Doc.h"
#include "test8-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest81View

IMPLEMENT_DYNCREATE(Ctest81View, CView)

BEGIN_MESSAGE_MAP(Ctest81View, CView)
	ON_COMMAND(ID_SHOW_NAME, &Ctest81View::OnShowName)
END_MESSAGE_MAP()

// Ctest81View 构造/析构

Ctest81View::Ctest81View()
{
	// TODO: 在此处添加构造代码

}

Ctest81View::~Ctest81View()
{
}

BOOL Ctest81View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest81View 绘制

void Ctest81View::OnDraw(CDC* /*pDC*/)
{
	Ctest81Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctest81View 诊断

#ifdef _DEBUG
void Ctest81View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest81View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest81Doc* Ctest81View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest81Doc)));
	return (Ctest81Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest81View 消息处理程序


void Ctest81View::OnShowName()
{
	// TODO: 在此添加命令处理程序代码
	CString s;
	CClientDC dc(this);
	s.Format(_T("我是莫美霞。"));
	dc.TextOutW(200, 100, s);
}
