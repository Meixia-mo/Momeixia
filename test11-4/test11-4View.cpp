
// test11-4View.cpp : Ctest114View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test11-4.h"
#endif

#include "test11-4Doc.h"
#include "test11-4View.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest114View

IMPLEMENT_DYNCREATE(Ctest114View, CView)

BEGIN_MESSAGE_MAP(Ctest114View, CView)
	ON_COMMAND(ID_POPOUT, &Ctest114View::OnPopout)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// Ctest114View ����/����

Ctest114View::Ctest114View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest114View::~Ctest114View()
{
}

BOOL Ctest114View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest114View ����

void Ctest114View::OnDraw(CDC* /*pDC*/)
{
	Ctest114Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest114View ���

#ifdef _DEBUG
void Ctest114View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest114View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest114Doc* Ctest114View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest114Doc)));
	return (Ctest114Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest114View ��Ϣ�������


void Ctest114View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg dlg;
	int r = dlg.DoModal();
	if (r == IDOK) {
		
	}
}


void Ctest114View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	MyDlg *pD = new MyDlg;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
	CView::OnLButtonDblClk(nFlags, point);
}
