
// �ھ���ʵ��-1View.cpp : C�ھ���ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ھ���ʵ��-1.h"
#endif

#include "�ھ���ʵ��-1Doc.h"
#include "�ھ���ʵ��-1View.h"
#include "MyDialog.h"
#include "MainFrm.h"
#include "fstream"
#include "string"
#include "iostream"
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ھ���ʵ��1View

IMPLEMENT_DYNCREATE(C�ھ���ʵ��1View, CView)

BEGIN_MESSAGE_MAP(C�ھ���ʵ��1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_CLOSE()
END_MESSAGE_MAP()

// C�ھ���ʵ��1View ����/����

C�ھ���ʵ��1View::C�ھ���ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������

}

C�ھ���ʵ��1View::~C�ھ���ʵ��1View()
{
}

BOOL C�ھ���ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�ھ���ʵ��1View ����

void C�ھ���ʵ��1View::OnDraw(CDC* /*pDC*/)
{
	C�ھ���ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�ھ���ʵ��1View ���

#ifdef _DEBUG
void C�ھ���ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void C�ھ���ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�ھ���ʵ��1Doc* C�ھ���ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ھ���ʵ��1Doc)));
	return (C�ھ���ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// C�ھ���ʵ��1View ��Ϣ�������


void C�ھ���ʵ��1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	MyDialog *pD = new MyDialog;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
	/*int r = pD->DoModal();
	CMainFrame* pMain = (CMainFrame*)AfxGetApp()->m_pMainWnd;
	if (r == IDOK) {
		ofstream ofs(pMain->path);
		for(int k=0;k<pMain->ccount;k++)
		ofs << CT2A(pMain->information[k].GetString()) << endl;
	}*/
	CView::OnLButtonDown(nFlags, point);
}


void C�ھ���ʵ��1View::OnClose()
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
}
