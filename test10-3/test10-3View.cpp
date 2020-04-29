
// test10-3View.cpp : Ctest103View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test10-3.h"
#endif

#include "test10-3Doc.h"
#include "test10-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest103View

IMPLEMENT_DYNCREATE(Ctest103View, CView)

BEGIN_MESSAGE_MAP(Ctest103View, CView)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// Ctest103View 构造/析构

Ctest103View::Ctest103View()
{
	// TODO: 在此处添加构造代码
	s = _T(" ");

}

Ctest103View::~Ctest103View()
{
}

BOOL Ctest103View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest103View 绘制

void Ctest103View::OnDraw(CDC* /*pDC*/)
{
	Ctest103Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctest103View 诊断

#ifdef _DEBUG
void Ctest103View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest103View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest103Doc* Ctest103View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest103Doc)));
	return (Ctest103Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest103View 消息处理程序


void Ctest103View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CString ss;
	CRect rc;
	GetClientRect(&rc);
	ss.Format(_T("%c"), nChar);
	CString t1 = _T(" ");
	int len =s.GetLength();
	int slen = (rc.right - rc.left) / len;//算出单个字符所占的长度
	if (len*slen >= rc.right - rc.left) {
		int end = rc.right - rc.left;
		char c1 = s.GetAt(end);
		char c2 = s.GetAt(len);
		int star1 = 0;
		int star2 = end + 1;
		CString cs1;
		cs1.Format(_T("%c"), c1);
		CString cs2;
		cs2.Format(_T("%c"), c2);
		CString strTmp1 = s.Tokenize(cs1, star1);
		dc.TextOutW(0, 5, strTmp1);
		CString strTmp2 = s.Tokenize(cs2, star2);
		dc.TextOutW(40, 5, strTmp2);

	}
	else {
		s = s + t1 + ss;
		dc.TextOutW(0, 5, s);
	}
	s = s + t1 + ss;
	CView::OnChar(nChar, nRepCnt, nFlags);
}
