
// test7-1View.cpp : Ctest71View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test7-1.h"
#endif

#include "test7-1Doc.h"
#include "test7-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest71View

IMPLEMENT_DYNCREATE(Ctest71View, CView)

BEGIN_MESSAGE_MAP(Ctest71View, CView)
END_MESSAGE_MAP()

// Ctest71View ����/����

Ctest71View::Ctest71View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest71View::~Ctest71View()
{
}

BOOL Ctest71View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest71View ����

void Ctest71View::OnDraw(CDC* /*pDC*/)
{
	Ctest71Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest71View ���

#ifdef _DEBUG
void Ctest71View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest71View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest71Doc* Ctest71View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest71Doc)));
	return (Ctest71Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest71View ��Ϣ�������
