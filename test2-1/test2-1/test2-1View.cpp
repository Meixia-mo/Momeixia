
// test2-1View.cpp : Ctest21View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test2-1.h"
#endif

#include "test2-1Doc.h"
#include "test2-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest21View

IMPLEMENT_DYNCREATE(Ctest21View, CView)

BEGIN_MESSAGE_MAP(Ctest21View, CView)
END_MESSAGE_MAP()

// Ctest21View ����/����

Ctest21View::Ctest21View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest21View::~Ctest21View()
{
}

BOOL Ctest21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest21View ����

void Ctest21View::OnDraw(CDC* pDC)
{
	Ctest21Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	int b = pDoc->A;
	CString c = pDoc->s;
	CString ss;
	ss.Format(_T("%d"), b);
	pDC->TextOutW(100, 200, ss);
	pDC->TextOutW(200, 200, c);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest21View ���

#ifdef _DEBUG
void Ctest21View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest21View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest21Doc* Ctest21View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest21Doc)));
	return (Ctest21Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest21View ��Ϣ�������
