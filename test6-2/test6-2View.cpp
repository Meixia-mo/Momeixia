
// test6-2View.cpp : Ctest62View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test6-2.h"
#endif

#include "test6-2Doc.h"
#include "test6-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest62View

IMPLEMENT_DYNCREATE(Ctest62View, CView)

BEGIN_MESSAGE_MAP(Ctest62View, CView)
END_MESSAGE_MAP()

// Ctest62View ����/����

Ctest62View::Ctest62View()
{
	// TODO: �ڴ˴����ӹ������

}

Ctest62View::~Ctest62View()
{
}

BOOL Ctest62View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest62View ����

void Ctest62View::OnDraw(CDC* pDC)
{
	Ctest62Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ�����������ӻ��ƴ���
}


// Ctest62View ���

#ifdef _DEBUG
void Ctest62View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest62View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest62Doc* Ctest62View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest62Doc)));
	return (Ctest62Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest62View ��Ϣ��������