
// test3View.cpp : Ctest3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test3.h"
#endif

#include "test3Doc.h"
#include "test3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest3View

IMPLEMENT_DYNCREATE(Ctest3View, CView)

BEGIN_MESSAGE_MAP(Ctest3View, CView)
END_MESSAGE_MAP()

// Ctest3View ����/����

Ctest3View::Ctest3View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest3View::~Ctest3View()
{
}

BOOL Ctest3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest3View ����

void Ctest3View::OnDraw(CDC* /*pDC*/)
{
	Ctest3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest3View ���

#ifdef _DEBUG
void Ctest3View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest3Doc* Ctest3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest3Doc)));
	return (Ctest3Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest3View ��Ϣ�������
