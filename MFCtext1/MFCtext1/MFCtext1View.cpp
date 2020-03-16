
// MFCtext1View.cpp : CMFCtext1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCtext1.h"
#endif

#include "MFCtext1Doc.h"
#include "MFCtext1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCtext1View

IMPLEMENT_DYNCREATE(CMFCtext1View, CView)

BEGIN_MESSAGE_MAP(CMFCtext1View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
//	ON_WM_LBUTTONDOWN()
ON_WM_MBUTTONDBLCLK()
ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCtext1View 构造/析构

CMFCtext1View::CMFCtext1View()
{
	// TODO: 在此处添加构造代码

}

CMFCtext1View::~CMFCtext1View()
{
}

BOOL CMFCtext1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCtext1View 绘制

void CMFCtext1View::OnDraw(CDC* pDC)
{
	CMFCtext1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	CClientDC dc(this);
	
	int red = 20;
	int green = 30, blue = 40;
	int width = 2, row = 20;
	int color = RGB(red, green, blue);
	
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码

}


// CMFCtext1View 打印

BOOL CMFCtext1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFCtext1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMFCtext1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMFCtext1View 诊断

#ifdef _DEBUG
void CMFCtext1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCtext1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCtext1Doc* CMFCtext1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCtext1Doc)));
	return (CMFCtext1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCtext1View 消息处理程序


//void CMFCtext1View::OnLButtonDown(UINT nFlags, CPoint point)
//{
//	// TODO: 在此添加消息处理程序代码和/或调用默认值
//
//
//	CView::OnLButtonDown(nFlags, point);
//}


void CMFCtext1View::OnMButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnMButtonDblClk(nFlags, point);
}


void CMFCtext1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s;
	//s.Format(_T("%d,%d"), point.x, point.y);
	CClientDC dc(this);
	CMFCtext1Doc* pDoc = GetDocument();
	int red = 20;
	int green = 30, blue = 40;
	int width = 2, row = 20;
	int color = RGB(red, green, blue);
	CPen newPen(PS_SOLID, width, color);
	int b = 200, a = 100;
	int r = rand() % (b - a) + a;
	dc.Ellipse(point.x-r, point.y-r, point.x+r, point.y+ rand() % (b - a) + a);
	dc.SelectObject(newPen);


	CView::OnLButtonDown(nFlags, point);
}
