
// �ھ���ʵ��-2View.cpp : C�ھ���ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ھ���ʵ��-2.h"
#endif

#include "�ھ���ʵ��-2Doc.h"
#include "�ھ���ʵ��-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ھ���ʵ��2View

IMPLEMENT_DYNCREATE(C�ھ���ʵ��2View, CView)

BEGIN_MESSAGE_MAP(C�ھ���ʵ��2View, CView)
END_MESSAGE_MAP()

// C�ھ���ʵ��2View ����/����

C�ھ���ʵ��2View::C�ھ���ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������

}

C�ھ���ʵ��2View::~C�ھ���ʵ��2View()
{
}

BOOL C�ھ���ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�ھ���ʵ��2View ����

void C�ھ���ʵ��2View::OnDraw(CDC* /*pDC*/)
{
	C�ھ���ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�ھ���ʵ��2View ���

#ifdef _DEBUG
void C�ھ���ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void C�ھ���ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�ھ���ʵ��2Doc* C�ھ���ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ھ���ʵ��2Doc)));
	return (C�ھ���ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// C�ھ���ʵ��2View ��Ϣ�������
