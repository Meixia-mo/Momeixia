
// MFCAtest1-2View.cpp : CMFCAtest12View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCAtest1-2.h"
#endif

#include "MFCAtest1-2Doc.h"
#include "MFCAtest1-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCAtest12View

IMPLEMENT_DYNCREATE(CMFCAtest12View, CView)

BEGIN_MESSAGE_MAP(CMFCAtest12View, CView)
END_MESSAGE_MAP()

// CMFCAtest12View ����/����

CMFCAtest12View::CMFCAtest12View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCAtest12View::~CMFCAtest12View()
{
}

BOOL CMFCAtest12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCAtest12View ����

void CMFCAtest12View::OnDraw(CDC* pDC)
{
	CMFCAtest12Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect rc;
	GetClientRect(&rc);
	pDC->Ellipse(rc);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCAtest12View ���

#ifdef _DEBUG
void CMFCAtest12View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCAtest12View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCAtest12Doc* CMFCAtest12View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCAtest12Doc)));
	return (CMFCAtest12Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCAtest12View ��Ϣ�������
