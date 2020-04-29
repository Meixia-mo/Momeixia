
// test12-1View.cpp : Ctest121View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test12-1.h"
#endif

#include "test12-1Doc.h"
#include "test12-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest121View

IMPLEMENT_DYNCREATE(Ctest121View, CView)

BEGIN_MESSAGE_MAP(Ctest121View, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// Ctest121View 构造/析构

Ctest121View::Ctest121View()
{
	// TODO: 在此处添加构造代码

}

Ctest121View::~Ctest121View()
{
}

BOOL Ctest121View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest121View 绘制

void Ctest121View::OnDraw(CDC* /*pDC*/)
{
	Ctest121Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctest121View 诊断

#ifdef _DEBUG
void Ctest121View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest121View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest121Doc* Ctest121View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest121Doc)));
	return (Ctest121Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest121View 消息处理程序


void Ctest121View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CString filename;
	if (r == IDOK) {
		 filename = cfd.GetPathName();//取得文件路径
	}
	dc.TextOutW(100, 100, filename);
    CView::OnLButtonDblClk(nFlags, point);
}
