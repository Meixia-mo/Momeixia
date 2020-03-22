
// MFCAtest1-2View.cpp : CMFCAtest12View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCAtest1-2.h"
#endif

#include "MFCAtest1-2Doc.h"
#include "MFCAtest1-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCAtest12View

IMPLEMENT_DYNCREATE(CMFCAtest12View, CView)

BEGIN_MESSAGE_MAP(CMFCAtest12View, CView)
END_MESSAGE_MAP()

// CMFCAtest12View 构造/析构

CMFCAtest12View::CMFCAtest12View()
{
	// TODO: 在此处添加构造代码

}

CMFCAtest12View::~CMFCAtest12View()
{
}

BOOL CMFCAtest12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCAtest12View 绘制

void CMFCAtest12View::OnDraw(CDC* pDC)
{
	CMFCAtest12Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect rc;
	GetClientRect(&rc);
	pDC->Ellipse(rc);

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCAtest12View 诊断

#ifdef _DEBUG
void CMFCAtest12View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCAtest12View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCAtest12Doc* CMFCAtest12View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCAtest12Doc)));
	return (CMFCAtest12Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCAtest12View 消息处理程序
