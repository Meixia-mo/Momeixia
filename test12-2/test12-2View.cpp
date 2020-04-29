
// test12-2View.cpp : Ctest122View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test12-2.h"
#endif

#include "test12-2Doc.h"
#include "test12-2View.h"
#include "MyDlg.h"
#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest122View

IMPLEMENT_DYNCREATE(Ctest122View, CView)

BEGIN_MESSAGE_MAP(Ctest122View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_POPOUT, &Ctest122View::OnPopout)
END_MESSAGE_MAP()

// Ctest122View 构造/析构

Ctest122View::Ctest122View()
{
	// TODO: 在此处添加构造代码

}

Ctest122View::~Ctest122View()
{
}

BOOL Ctest122View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest122View 绘制

void Ctest122View::OnDraw(CDC* /*pDC*/)
{
	Ctest122Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctest122View 诊断

#ifdef _DEBUG
void Ctest122View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest122View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest122Doc* Ctest122View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest122Doc)));
	return (Ctest122Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest122View 消息处理程序


void Ctest122View::OnLButtonDblClk(UINT nFlags, CPoint point)
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
	//Ctest122Doc* pDoc = GetDocument();
	//pDoc->s = filename;
	CMainFrame* pMain = (CMainFrame*)AfxGetApp()->m_pMainWnd;
	pMain->ss = filename;

	MyDlg *pD = new MyDlg;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
	CView::OnLButtonDblClk(nFlags, point);
}


void Ctest122View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg dlg;
	/*int r = dlg.DoModal();
	if (r == IDOK) {}*/
}
