
// �ۺ�ʵ����View.cpp : C�ۺ�ʵ����View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ۺ�ʵ����.h"
#endif

#include "�ۺ�ʵ����Set.h"
#include "�ۺ�ʵ����Doc.h"
#include "�ۺ�ʵ����View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ۺ�ʵ����View

IMPLEMENT_DYNCREATE(C�ۺ�ʵ����View, CRecordView)

BEGIN_MESSAGE_MAP(C�ۺ�ʵ����View, CRecordView)
END_MESSAGE_MAP()

// C�ۺ�ʵ����View ����/����

C�ۺ�ʵ����View::C�ۺ�ʵ����View()
	: CRecordView(IDD_MY_FORM)
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

C�ۺ�ʵ����View::~C�ۺ�ʵ����View()
{
}

void C�ۺ�ʵ����View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
}

BOOL C�ۺ�ʵ����View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void C�ۺ�ʵ����View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_�ۺ�ʵ����Set;
	CRecordView::OnInitialUpdate();

}


// C�ۺ�ʵ����View ���

#ifdef _DEBUG
void C�ۺ�ʵ����View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C�ۺ�ʵ����View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C�ۺ�ʵ����Doc* C�ۺ�ʵ����View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ۺ�ʵ����Doc)));
	return (C�ۺ�ʵ����Doc*)m_pDocument;
}
#endif //_DEBUG


// C�ۺ�ʵ����View ���ݿ�֧��
CRecordset* C�ۺ�ʵ����View::OnGetRecordset()
{
	return m_pSet;
}



// C�ۺ�ʵ����View ��Ϣ�������
