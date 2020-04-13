
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
	pDC->Rectangle(pDoc->rc);
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
	CClientDC dc(this);
	Ctest102Doc* pDoc = GetDocument();
	CString ss;
	CString t = _T("������90�����ϵ��ַ����뻻�У�");
	ss.Format(_T("%c"), nChar);
	pDoc->s = pDoc->s +ss;
	int len = pDoc->s.GetLength();
	if (len > 90) {
		dc.TextOutW(100, 100, t);
	}
	else {
		dc.TextOutW(0, 5, pDoc->s);
	}

	CView::OnChar(nChar, nRepCnt, nFlags);
}


void Ctest102View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctest102Doc* pDoc = GetDocument();
	pDoc->s.Tokenize();

	CView::OnLButtonDown(nFlags, point);
}
