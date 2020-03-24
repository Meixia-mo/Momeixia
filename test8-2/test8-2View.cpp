
// test8-2View.cpp : Ctest82View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test8-2.h"
#endif

#include "test8-2Doc.h"
#include "test8-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest82View

IMPLEMENT_DYNCREATE(Ctest82View, CView)

BEGIN_MESSAGE_MAP(Ctest82View, CView)
END_MESSAGE_MAP()

// Ctest82View 构造/析构

Ctest82View::Ctest82View()
{
	// TODO: 在此处添加构造代码
	BITMAP BM;
	m_Bitmap.LoadBitmapW(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

Ctest82View::~Ctest82View()
{
}

BOOL Ctest82View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest82View 绘制

void Ctest82View::OnDraw(CDC* pDC)
{
	Ctest82Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);
}


// Ctest82View 诊断

#ifdef _DEBUG
void Ctest82View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest82View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest82Doc* Ctest82View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest82Doc)));
	return (Ctest82Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest82View 消息处理程序
