
// test10-2View.cpp : Ctest102View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// Ctest102View ����/����

Ctest102View::Ctest102View()
{
	// TODO: �ڴ˴���ӹ������
	set = false;

}

Ctest102View::~Ctest102View()
{
}

BOOL Ctest102View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest102View ����

void Ctest102View::OnDraw(CDC* pDC)
{
	Ctest102Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	//pDC->Rectangle(pDoc->rc);
}


// Ctest102View ���

#ifdef _DEBUG
void Ctest102View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest102View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest102Doc* Ctest102View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest102Doc)));
	return (Ctest102Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest102View ��Ϣ�������


void Ctest102View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctest102Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString ss;
	CRect rc;
	GetClientRect(&rc);
	CString t = _T("������90�����ϵ��ַ����뻻�У�");
	CString t1 = _T(" ";)
	ss.Format(_T("%c"), nChar);
	//pDoc->s = pDoc->s +ss;
	int len = pDoc->s.GetLength();
	int slen = (rc.right - rc.left) / len;//��������ַ���ռ�ĳ���
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
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	set = true;
	cpoint = point;
	CView::OnLButtonDown(nFlags, point);
}
