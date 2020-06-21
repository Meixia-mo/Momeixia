
// UsingView.cpp : CUsingView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Using.h"
#endif

#include "UsingDoc.h"
#include "UsingView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"w32.h"
#include"w32D\w32D.h"


// CUsingView

IMPLEMENT_DYNCREATE(CUsingView, CView)

BEGIN_MESSAGE_MAP(CUsingView, CView)
END_MESSAGE_MAP()

// CUsingView 构造/析构

CUsingView::CUsingView()
{
	// TODO: 在此处添加构造代码

}

CUsingView::~CUsingView()
{
}

BOOL CUsingView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CUsingView 绘制

void CUsingView::OnDraw(CDC* pDC)
{
	CUsingDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	int n = 5;
	int j = factorial(5);
	CString s;
	s.Format( _T("5的阶层为：%d"), j);
	pDC->TextOutW(100, 100, s);

	FAC fac; 
	CString ss;
	ss.Format(_T("30.0的弧度值：%fΠ"), fac.convert(30.0));
	pDC->TextOutW(100, 200, ss);

	CString s1;
	s1.Format(_T("这是动态库，5的阶层为：%d"), GetInt(5));
	pDC->TextOutW(500, 100, s1);

	FAC1 fac1;
	CString ss1;
	ss1.Format(_T("这是动态库，30.0的弧度值：%fΠ"), fac1.convert(30.0));
	pDC->TextOutW(500, 200, ss);
}


// CUsingView 诊断

#ifdef _DEBUG
void CUsingView::AssertValid() const
{
	CView::AssertValid();
}

void CUsingView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUsingDoc* CUsingView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUsingDoc)));
	return (CUsingDoc*)m_pDocument;
}
#endif //_DEBUG


// CUsingView 消息处理程序
