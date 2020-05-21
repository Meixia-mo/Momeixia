
// 第七周实验-1View.cpp : C第七周实验1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第七周实验-1.h"
#endif

#include "第七周实验-1Doc.h"
#include "第七周实验-1View.h"
#include "Exchange.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第七周实验1View

IMPLEMENT_DYNCREATE(C第七周实验1View, CView)

BEGIN_MESSAGE_MAP(C第七周实验1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C第七周实验1View 构造/析构

C第七周实验1View::C第七周实验1View()
{
	// TODO: 在此处添加构造代码

}

C第七周实验1View::~C第七周实验1View()
{
}

BOOL C第七周实验1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第七周实验1View 绘制

void C第七周实验1View::OnDraw(CDC* /*pDC*/)
{
	C第七周实验1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第七周实验1View 诊断

#ifdef _DEBUG
void C第七周实验1View::AssertValid() const
{
	CView::AssertValid();
}

void C第七周实验1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第七周实验1Doc* C第七周实验1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第七周实验1Doc)));
	return (C第七周实验1Doc*)m_pDocument;
}
#endif //_DEBUG


// C第七周实验1View 消息处理程序


void C第七周实验1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	//Exchange mdlg = new Exchange();
	//mdlg.ShowWindow(1);
	Exchange *pD = new Exchange;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
	CView::OnLButtonDown(nFlags, point);
}
