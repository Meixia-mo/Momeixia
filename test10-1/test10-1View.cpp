
// test10-1View.cpp : Ctest101View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test10-1.h"
#endif

#include "test10-1Doc.h"
#include "test10-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest101View

IMPLEMENT_DYNCREATE(Ctest101View, CView)

BEGIN_MESSAGE_MAP(Ctest101View, CView)
	ON_WM_KEYDOWN()
	ON_WM_CHAR()
END_MESSAGE_MAP()

// Ctest101View ����/����

Ctest101View::Ctest101View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest101View::~Ctest101View()
{
}

BOOL Ctest101View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest101View ����

void Ctest101View::OnDraw(CDC* pDC)
{
	Ctest101Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(pDoc->rc);
}


// Ctest101View ���

#ifdef _DEBUG
void Ctest101View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest101View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest101Doc* Ctest101View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest101Doc)));
	return (Ctest101Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest101View ��Ϣ�������


void Ctest101View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void Ctest101View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	Ctest101Doc* pDoc = GetDocument();
	CString ss;
	CString t = _T("������90�����ϵ��ַ����뻻�У�");
	ss.Format(_T("%c"), nChar);
    pDoc->s = pDoc->s + ss;
	int len=pDoc->s.GetLength();
	if (len > 90) {
		dc.TextOutW(100, 100, t);
	}
	else {
		dc.TextOutW(0, 5, pDoc->s);
	}
	CView::OnChar(nChar, nRepCnt, nFlags);
}
