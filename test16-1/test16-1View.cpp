
// test16-1View.cpp : Ctest161View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test16-1.h"
#endif

#include "test16-1Doc.h"
#include "test16-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest161View

IMPLEMENT_DYNCREATE(Ctest161View, CView)

BEGIN_MESSAGE_MAP(Ctest161View, CView)
END_MESSAGE_MAP()

// Ctest161View ����/����

Ctest161View::Ctest161View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest161View::~Ctest161View()
{
}

BOOL Ctest161View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest161View ����

void Ctest161View::OnDraw(CDC* /*pDC*/)
{
	Ctest161Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest161View ���

#ifdef _DEBUG
void Ctest161View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest161View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest161Doc* Ctest161View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest161Doc)));
	return (Ctest161Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest161View ��Ϣ�������
