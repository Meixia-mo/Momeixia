
// test13-1View.cpp : Ctest131View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test13-1.h"
#endif

#include "test13-1Doc.h"
#include "test13-1View.h"
#include "Count.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest131View

IMPLEMENT_DYNCREATE(Ctest131View, CView)

BEGIN_MESSAGE_MAP(Ctest131View, CView)
	ON_COMMAND(ID_CountNumber, &Ctest131View::OnCountnumber)
END_MESSAGE_MAP()

// Ctest131View ����/����

Ctest131View::Ctest131View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest131View::~Ctest131View()
{
}

BOOL Ctest131View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest131View ����

void Ctest131View::OnDraw(CDC* /*pDC*/)
{
	Ctest131Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest131View ���

#ifdef _DEBUG
void Ctest131View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest131View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest131Doc* Ctest131View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest131Doc)));
	return (Ctest131Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest131View ��Ϣ�������


void Ctest131View::OnCountnumber()
{
	// TODO: �ڴ���������������
	//Count dlg;
	Count *pD = new Count;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
}
