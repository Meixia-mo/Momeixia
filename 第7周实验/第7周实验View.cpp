
// 第7周实验View.cpp : C第7周实验View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第7周实验.h"
#endif

#include "第7周实验Doc.h"
#include "第7周实验View.h"
#include "MyDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第7周实验View

IMPLEMENT_DYNCREATE(C第7周实验View, CView)

BEGIN_MESSAGE_MAP(C第7周实验View, CView)
	ON_COMMAND(ID_Puout, &C第7周实验View::OnPuout)
END_MESSAGE_MAP()

// C第7周实验View 构造/析构

C第7周实验View::C第7周实验View()
{
	// TODO: 在此处添加构造代码

}

C第7周实验View::~C第7周实验View()
{
}

BOOL C第7周实验View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第7周实验View 绘制

void C第7周实验View::OnDraw(CDC* /*pDC*/)
{
	C第7周实验Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第7周实验View 诊断

#ifdef _DEBUG
void C第7周实验View::AssertValid() const
{
	CView::AssertValid();
}

void C第7周实验View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第7周实验Doc* C第7周实验View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第7周实验Doc)));
	return (C第7周实验Doc*)m_pDocument;
}
#endif //_DEBUG


// C第7周实验View 消息处理程序


void C第7周实验View::OnPuout()
{
	// TODO: 在此添加命令处理程序代码
	//MyDialog *pD = new MyDialog;
	MyDialog Mdlg = new MyDialog();
	//pD->Create(IDD_DIALOG1);
	ShowWindow(1);
	int  r = Mdlg.DoModal();
	if (r == IDOK) {
		CClientDC dc(this);
		dc.TextOutW(400, 200, _T("你已退出对话框"));
	}
}
