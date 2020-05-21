
// 第九周实验-1View.cpp : C第九周实验1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第九周实验-1.h"
#endif

#include "第九周实验-1Doc.h"
#include "第九周实验-1View.h"
#include "MyDialog.h"
#include "MainFrm.h"
#include "fstream"
#include "string"
#include "iostream"
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第九周实验1View

IMPLEMENT_DYNCREATE(C第九周实验1View, CView)

BEGIN_MESSAGE_MAP(C第九周实验1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_CLOSE()
END_MESSAGE_MAP()

// C第九周实验1View 构造/析构

C第九周实验1View::C第九周实验1View()
{
	// TODO: 在此处添加构造代码

}

C第九周实验1View::~C第九周实验1View()
{
}

BOOL C第九周实验1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第九周实验1View 绘制

void C第九周实验1View::OnDraw(CDC* /*pDC*/)
{
	C第九周实验1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第九周实验1View 诊断

#ifdef _DEBUG
void C第九周实验1View::AssertValid() const
{
	CView::AssertValid();
}

void C第九周实验1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第九周实验1Doc* C第九周实验1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第九周实验1Doc)));
	return (C第九周实验1Doc*)m_pDocument;
}
#endif //_DEBUG


// C第九周实验1View 消息处理程序


void C第九周实验1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	MyDialog *pD = new MyDialog;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
	/*int r = pD->DoModal();
	CMainFrame* pMain = (CMainFrame*)AfxGetApp()->m_pMainWnd;
	if (r == IDOK) {
		ofstream ofs(pMain->path);
		for(int k=0;k<pMain->ccount;k++)
		ofs << CT2A(pMain->information[k].GetString()) << endl;
	}*/
	CView::OnLButtonDown(nFlags, point);
}


void C第九周实验1View::OnClose()
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
}
