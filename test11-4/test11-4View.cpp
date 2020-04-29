
// test11-4View.cpp : Ctest114View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test11-4.h"
#endif

#include "test11-4Doc.h"
#include "test11-4View.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest114View

IMPLEMENT_DYNCREATE(Ctest114View, CView)

BEGIN_MESSAGE_MAP(Ctest114View, CView)
	ON_COMMAND(ID_POPOUT, &Ctest114View::OnPopout)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// Ctest114View 构造/析构

Ctest114View::Ctest114View()
{
	// TODO: 在此处添加构造代码

}

Ctest114View::~Ctest114View()
{
}

BOOL Ctest114View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest114View 绘制

void Ctest114View::OnDraw(CDC* /*pDC*/)
{
	Ctest114Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctest114View 诊断

#ifdef _DEBUG
void Ctest114View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest114View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest114Doc* Ctest114View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest114Doc)));
	return (Ctest114Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest114View 消息处理程序


void Ctest114View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg dlg;
	int r = dlg.DoModal();
	if (r == IDOK) {
		
	}
}


void Ctest114View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	MyDlg *pD = new MyDlg;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
	CView::OnLButtonDblClk(nFlags, point);
}
