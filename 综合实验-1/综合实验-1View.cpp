
// �ۺ�ʵ��-1View.cpp : C�ۺ�ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ۺ�ʵ��-1.h"
#endif

#include "�ۺ�ʵ��-1Set.h"
#include "�ۺ�ʵ��-1Doc.h"
#include "�ۺ�ʵ��-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ۺ�ʵ��1View

IMPLEMENT_DYNCREATE(C�ۺ�ʵ��1View, CRecordView)

BEGIN_MESSAGE_MAP(C�ۺ�ʵ��1View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &C�ۺ�ʵ��1View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &C�ۺ�ʵ��1View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &C�ۺ�ʵ��1View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &C�ۺ�ʵ��1View::OnRecordLast)
END_MESSAGE_MAP()

// C�ۺ�ʵ��1View ����/����

C�ۺ�ʵ��1View::C�ۺ�ʵ��1View()
	: CRecordView(IDD_MY1_FORM)
	, name(_T(""))
	, ID(0)
	, name1(_T(""))
	, sno(_T(""))
	, dept(_T(""))
	, sex(_T(""))
	, birthday(_T(""))
	, phone(_T(""))
	, add(_T(""))
	, path1(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	path = _T("D:\\�����ļ���\\��һ��\\");

}

C�ۺ�ʵ��1View::~C�ۺ�ʵ��1View()
{
}

void C�ۺ�ʵ��1View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	//DDX_Text(pDX, IDC_EDIT1, name);
	DDX_Text(pDX, IDC_EDIT9, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->m_5);
	DDX_Text(pDX, IDC_EDIT7, m_pSet->m_6);
	DDX_Text(pDX, IDC_EDIT8, m_pSet->m_7);
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_8);
}

BOOL C�ۺ�ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void C�ۺ�ʵ��1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_�ۺ�ʵ��1Set;
	CRecordView::OnInitialUpdate();

}


// C�ۺ�ʵ��1View ���

#ifdef _DEBUG
void C�ۺ�ʵ��1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C�ۺ�ʵ��1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C�ۺ�ʵ��1Doc* C�ۺ�ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ۺ�ʵ��1Doc)));
	return (C�ۺ�ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// C�ۺ�ʵ��1View ���ݿ�֧��
CRecordset* C�ۺ�ʵ��1View::OnGetRecordset()
{
	return m_pSet;
}



// C�ۺ�ʵ��1View ��Ϣ�������

void C�ۺ�ʵ��1View::draw(CString file) {
	CImage img;
	img.Load(file);
	CDC* pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);

	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();

	if (rect_ratio > img_ratio) {
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else {
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}
	img.Draw(pDC->m_hDC, sx, sy, w, h);
}


void C�ۺ�ʵ��1View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	CString filename,s;
	GetDlgItemText(IDC_EDIT1,s);
	filename = path + s;
	//filename = s;
	draw(filename);
}


void C�ۺ�ʵ��1View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT1, s);
	filename = path + s;
	//filename = s;
	draw(filename);
}


void C�ۺ�ʵ��1View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT1, s);
	filename = path + s;
	//filename = s;
	draw(filename);
}


void C�ۺ�ʵ��1View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT1, s);
	filename = path + s;
	//filename = s;
	draw(filename);
}
