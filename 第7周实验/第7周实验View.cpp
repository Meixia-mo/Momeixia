
// ��7��ʵ��View.cpp : C��7��ʵ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��7��ʵ��.h"
#endif

#include "��7��ʵ��Doc.h"
#include "��7��ʵ��View.h"
#include "MyDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��7��ʵ��View

IMPLEMENT_DYNCREATE(C��7��ʵ��View, CView)

BEGIN_MESSAGE_MAP(C��7��ʵ��View, CView)
	ON_COMMAND(ID_Puout, &C��7��ʵ��View::OnPuout)
END_MESSAGE_MAP()

// C��7��ʵ��View ����/����

C��7��ʵ��View::C��7��ʵ��View()
{
	// TODO: �ڴ˴���ӹ������

}

C��7��ʵ��View::~C��7��ʵ��View()
{
}

BOOL C��7��ʵ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��7��ʵ��View ����

void C��7��ʵ��View::OnDraw(CDC* /*pDC*/)
{
	C��7��ʵ��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��7��ʵ��View ���

#ifdef _DEBUG
void C��7��ʵ��View::AssertValid() const
{
	CView::AssertValid();
}

void C��7��ʵ��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��7��ʵ��Doc* C��7��ʵ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��7��ʵ��Doc)));
	return (C��7��ʵ��Doc*)m_pDocument;
}
#endif //_DEBUG


// C��7��ʵ��View ��Ϣ�������


void C��7��ʵ��View::OnPuout()
{
	// TODO: �ڴ���������������
	//MyDialog *pD = new MyDialog;
	MyDialog Mdlg = new MyDialog();
	//pD->Create(IDD_DIALOG1);
	ShowWindow(1);
	int  r = Mdlg.DoModal();
	if (r == IDOK) {
		CClientDC dc(this);
		dc.TextOutW(400, 200, _T("�����˳��Ի���"));
	}
}
