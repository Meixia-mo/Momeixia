
// test6-3View.cpp : Ctest63View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test6-3.h"
#endif

#include "test6-3Doc.h"
#include "test6-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest63View

IMPLEMENT_DYNCREATE(Ctest63View, CView)

BEGIN_MESSAGE_MAP(Ctest63View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// Ctest63View ����/����

Ctest63View::Ctest63View()
{
	// TODO: �ڴ˴���ӹ������
	N = 5;
	set = true;
	//flag = true;
	for (int i = 0; i < N; i++) {
		int t = (i + 1) * 100;
		CRect rect(t, 0, t + 30, 30);
		cr.Add(rect);
		bool f = true;
		flag.Add(f);
	}
}

Ctest63View::~Ctest63View()
{
}

BOOL Ctest63View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest63View ����

void Ctest63View::OnDraw(CDC* pDC)
{
	Ctest63Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	if (set) {
		for (int i = 0; i < N; i++) {
			SetTimer(i, rand() % 400 + 100, NULL);
			set = false;
		}
	}
	for (int i = 0; i < N; i++) {
		pDC->Ellipse(cr[i]);
	}
}


// Ctest63View ���

#ifdef _DEBUG
void Ctest63View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest63View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest63Doc* Ctest63View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest63Doc)));
	return (Ctest63Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest63View ��Ϣ�������


void Ctest63View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int i = nIDEvent;
	CClientDC dc(this);
	CRect cc;
	GetClientRect(&cc);
	int fbottom = cc.bottom;
	if (flag[i]) {
		cr[i].top += 10;
		cr[i].bottom += 10;
		if (cr[i].bottom >= cc.bottom) {
			flag[i] = false;
			
		}
	}
	else {
		cr[i].top -= 5;
		cr[i].bottom -= 5;
		if (cr[i].top <= cc.top) {
			flag[i] = true;
		}
	}
	Invalidate();

	CView::OnTimer(nIDEvent);
}
