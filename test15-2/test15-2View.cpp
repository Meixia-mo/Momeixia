
// test15-2View.cpp : Ctest152View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test15-2.h"
#endif

#include "test15-2Doc.h"
#include "test15-2View.h"
#include "MyPicture.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest152View

IMPLEMENT_DYNCREATE(Ctest152View, CView)

BEGIN_MESSAGE_MAP(Ctest152View, CView)
	ON_COMMAND(ID_Popout, &Ctest152View::OnPopout)
END_MESSAGE_MAP()

// Ctest152View ����/����

Ctest152View::Ctest152View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest152View::~Ctest152View()
{
}

BOOL Ctest152View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest152View ����

void Ctest152View::OnDraw(CDC* /*pDC*/)
{
	Ctest152Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest152View ���

#ifdef _DEBUG
void Ctest152View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest152View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest152Doc* Ctest152View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest152Doc)));
	return (Ctest152Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest152View ��Ϣ�������


void Ctest152View::OnPopout()
{
	// TODO: �ڴ���������������
	MyPicture *pD = new MyPicture;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
}
