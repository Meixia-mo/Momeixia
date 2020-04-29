
// test11-3View.cpp : Ctest113View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test11-3.h"
#endif

#include "test11-3Doc.h"
#include "test11-3View.h"
#include "AddDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest113View

IMPLEMENT_DYNCREATE(Ctest113View, CView)

BEGIN_MESSAGE_MAP(Ctest113View, CView)
	ON_COMMAND(ID_POPOUT, &Ctest113View::OnPopout)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// Ctest113View 构造/析构

Ctest113View::Ctest113View()
{
	// TODO: 在此处添加构造代码

}

Ctest113View::~Ctest113View()
{
}

BOOL Ctest113View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest113View 绘制

void Ctest113View::OnDraw(CDC* /*pDC*/)
{
	Ctest113Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctest113View 诊断

#ifdef _DEBUG
void Ctest113View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest113View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest113Doc* Ctest113View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest113Doc)));
	return (Ctest113Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest113View 消息处理程序


void Ctest113View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	AddDlg dlg;
	int r = dlg.DoModal();
	if (r == IDOK) {
		float aa, bb, cc;
		aa = dlg.a;
		bb = dlg.b;
		dlg.c = aa + bb;
	}
}


void Ctest113View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	AddDlg *pD = new AddDlg;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
	CView::OnLButtonDblClk(nFlags, point);
}
