
// ������ʵ��-1View.cpp : C������ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������ʵ��-1.h"
#endif

#include "������ʵ��-1Doc.h"
#include "������ʵ��-1View.h"
#include "Exchange.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C������ʵ��1View

IMPLEMENT_DYNCREATE(C������ʵ��1View, CView)

BEGIN_MESSAGE_MAP(C������ʵ��1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C������ʵ��1View ����/����

C������ʵ��1View::C������ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������

}

C������ʵ��1View::~C������ʵ��1View()
{
}

BOOL C������ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C������ʵ��1View ����

void C������ʵ��1View::OnDraw(CDC* /*pDC*/)
{
	C������ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C������ʵ��1View ���

#ifdef _DEBUG
void C������ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void C������ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C������ʵ��1Doc* C������ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C������ʵ��1Doc)));
	return (C������ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// C������ʵ��1View ��Ϣ�������


void C������ʵ��1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	//Exchange mdlg = new Exchange();
	//mdlg.ShowWindow(1);
	Exchange *pD = new Exchange;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
	CView::OnLButtonDown(nFlags, point);
}
