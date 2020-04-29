
// test12-4View.cpp : Ctest124View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test12-4.h"
#endif

#include "test12-4Doc.h"
#include "test12-4View.h"
#include "MainFrm.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest124View

IMPLEMENT_DYNCREATE(Ctest124View, CView)

BEGIN_MESSAGE_MAP(Ctest124View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_POPOUT, &Ctest124View::OnPopout)
END_MESSAGE_MAP()

// Ctest124View 构造/析构

Ctest124View::Ctest124View()
{
	// TODO: 在此处添加构造代码

}

Ctest124View::~Ctest124View()
{
}

BOOL Ctest124View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest124View 绘制

void Ctest124View::OnDraw(CDC* /*pDC*/)
{
	Ctest124Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctest124View 诊断

#ifdef _DEBUG
void Ctest124View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest124View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest124Doc* Ctest124View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest124Doc)));
	return (Ctest124Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest124View 消息处理程序


void Ctest124View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CString filename;
	if (r == IDOK) {
		filename = cfd.GetPathName();//取得文件路径
	}
	dc.TextOutW(400, 400, filename);
	CMainFrame* pMain = (CMainFrame*)AfxGetApp()->m_pMainWnd;
	pMain->ss = filename;

	MyDlg *pD = new MyDlg;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
	CView::OnLButtonDblClk(nFlags, point);
}


void Ctest124View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg dlg;
}
