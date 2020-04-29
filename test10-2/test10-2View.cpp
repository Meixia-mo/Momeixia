
// test10-2View.cpp : Ctest102View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test10-2.h"
#endif

#include "test10-2Doc.h"
#include "test10-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest102View

IMPLEMENT_DYNCREATE(Ctest102View, CView)

BEGIN_MESSAGE_MAP(Ctest102View, CView)
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Ctest102View 构造/析构

Ctest102View::Ctest102View()
{
	// TODO: 在此处添加构造代码
	set = false;

}

Ctest102View::~Ctest102View()
{
}

BOOL Ctest102View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest102View 绘制

void Ctest102View::OnDraw(CDC* pDC)
{
	Ctest102Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	//pDC->Rectangle(pDoc->rc);
}


// Ctest102View 诊断

#ifdef _DEBUG
void Ctest102View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest102View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest102Doc* Ctest102View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest102Doc)));
	return (Ctest102Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest102View 消息处理程序


void Ctest102View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctest102Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString ss;
	CRect rc;
	GetClientRect(&rc);
	CString t = _T("已输入90个以上的字符，请换行！");
	CString t1 = _T(" ";)
	ss.Format(_T("%c"), nChar);
	//pDoc->s = pDoc->s +ss;
	int len = pDoc->s.GetLength();
	int slen = (rc.right - rc.left) / len;//算出单个字符所占的长度
	if(set){
		int iPos = (cpoint.x-rc.left) / slen;
		int star1 = 0;
		char c1=pDoc->s.GetAt(iPos);
		CString cs1;
		cs1.Format(_T("%c"), c1);
		CString strTmp1 = pDoc->s.Tokenize(cs1,star1);

		int star2 = star1 + iPos;
		int iPos1 = (rc.right - cpoint.x) / slen;
		char c2 = pDoc->s.GetAt(iPos+1);
		CString cs2;
		cs2.Format(_T("%c"), c2);
		CString strTmp2 = pDoc->s.Tokenize(cs2, star2);
		pDoc->s = strTmp1 + t1 + ss + t1 + strTmp2 + t1;
		dc.TextOutW(0, 5, pDoc->s);
		set = false;
	}
	else if (len > 90) {
		pDoc->s = pDoc->s + t1 + ss;
		dc.TextOutW(100, 100, t);
	}
	else {
		pDoc->s = pDoc->s + t1 + ss;
		dc.TextOutW(0, 5, pDoc->s);
	}
    
	CView::OnChar(nChar, nRepCnt, nFlags);
}


void Ctest102View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	set = true;
	cpoint = point;
	CView::OnLButtonDown(nFlags, point);
}
