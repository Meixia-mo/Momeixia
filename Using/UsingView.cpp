
// UsingView.cpp : CUsingView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Using.h"
#endif

#include "UsingDoc.h"
#include "UsingView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"w32.h"
#include"w32D\w32D.h"


// CUsingView

IMPLEMENT_DYNCREATE(CUsingView, CView)

BEGIN_MESSAGE_MAP(CUsingView, CView)
END_MESSAGE_MAP()

// CUsingView ����/����

CUsingView::CUsingView()
{
	// TODO: �ڴ˴���ӹ������

}

CUsingView::~CUsingView()
{
}

BOOL CUsingView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CUsingView ����

void CUsingView::OnDraw(CDC* pDC)
{
	CUsingDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s = CString(pchar());
	pDC->TextOutW(100, 100, s);

	CString ss;
	ss.Format(_T("%d,���ǴӶ�̬�ⷵ�ص�ֵ��"), GetInt());
	pDC->TextOutW(100, 200, ss);
}


// CUsingView ���

#ifdef _DEBUG
void CUsingView::AssertValid() const
{
	CView::AssertValid();
}

void CUsingView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUsingDoc* CUsingView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUsingDoc)));
	return (CUsingDoc*)m_pDocument;
}
#endif //_DEBUG


// CUsingView ��Ϣ�������
