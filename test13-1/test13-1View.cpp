
// test13-1View.cpp : Ctest131View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test13-1.h"
#endif

#include "test13-1Doc.h"
#include "test13-1View.h"
#include "Count.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest131View

IMPLEMENT_DYNCREATE(Ctest131View, CView)

BEGIN_MESSAGE_MAP(Ctest131View, CView)
	ON_COMMAND(ID_CountNumber, &Ctest131View::OnCountnumber)
END_MESSAGE_MAP()

// Ctest131View 构造/析构

Ctest131View::Ctest131View()
{
	// TODO: 在此处添加构造代码

}

Ctest131View::~Ctest131View()
{
}

BOOL Ctest131View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest131View 绘制

void Ctest131View::OnDraw(CDC* /*pDC*/)
{
	Ctest131Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctest131View 诊断

#ifdef _DEBUG
void Ctest131View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest131View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest131Doc* Ctest131View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest131Doc)));
	return (Ctest131Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest131View 消息处理程序


void Ctest131View::OnCountnumber()
{
	// TODO: 在此添加命令处理程序代码
	//Count dlg;
	Count *pD = new Count;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
}
