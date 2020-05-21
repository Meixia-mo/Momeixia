
// test15-2View.cpp : Ctest152View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test15-2.h"
#endif

#include "test15-2Doc.h"
#include "test15-2View.h"
#include "MyPicture.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest152View

IMPLEMENT_DYNCREATE(Ctest152View, CView)

BEGIN_MESSAGE_MAP(Ctest152View, CView)
	ON_COMMAND(ID_Popout, &Ctest152View::OnPopout)
END_MESSAGE_MAP()

// Ctest152View 构造/析构

Ctest152View::Ctest152View()
{
	// TODO: 在此处添加构造代码

}

Ctest152View::~Ctest152View()
{
}

BOOL Ctest152View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest152View 绘制

void Ctest152View::OnDraw(CDC* /*pDC*/)
{
	Ctest152Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctest152View 诊断

#ifdef _DEBUG
void Ctest152View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest152View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest152Doc* Ctest152View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest152Doc)));
	return (Ctest152Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest152View 消息处理程序


void Ctest152View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyPicture *pD = new MyPicture;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
}
