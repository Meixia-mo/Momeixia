
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
#include "AddDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ۺ�ʵ����View

IMPLEMENT_DYNCREATE(C�ۺ�ʵ����View, CRecordView)

BEGIN_MESSAGE_MAP(C�ۺ�ʵ����View, CRecordView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
	ON_BN_CLICKED(IDC_BUTTON4, &C�ۺ�ʵ����View::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON2, &C�ۺ�ʵ����View::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &C�ۺ�ʵ����View::OnBnClickedButton3)
END_MESSAGE_MAP()

// C�ۺ�ʵ����View ����/����

C�ۺ�ʵ����View::C�ۺ�ʵ����View()
	: CRecordView(IDD_MY_FORM)
	, ID(0)
	, name(_T(""))
	, sno(_T(""))
	, sex(_T(""))
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
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
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


// C�ۺ�ʵ����View ��ӡ

BOOL C�ۺ�ʵ����View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void C�ۺ�ʵ����View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void C�ۺ�ʵ����View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
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


void C�ۺ�ʵ����View::OnBnClickedButton4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF()) {
		m_pSet->MoveFirst();
	}
	UpdateData(false);
}


void C�ۺ�ʵ����View::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	AddDlg dlg;
	int r = dlg.DoModal();
	if (r == IDOK) {
		long ID11 = dlg.ID;
		CString name11 = dlg.name1;
		CString sno11 = dlg.sno1;
		CString sex11 = dlg.sex1;

		m_pSet->AddNew();
		m_pSet->m_ID = ID11;
		m_pSet->m_1 = name11;
		m_pSet->m_2 = sno11;
		m_pSet->m_3 = sex11;

		m_pSet->Update();
		UpdateData(false);
	}
}


void C�ۺ�ʵ����View::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	AddDlg dlg;
	int r = dlg.DoModal();
	if (r == IDOK) {
		long ID11 = dlg.ID;
		CString name11 = dlg.name1;
		CString sno11 = dlg.sno1;
		CString sex11 = dlg.sex1;

		m_pSet->Edit();
		m_pSet->m_ID = ID11;
		m_pSet->m_1 = name11;
		m_pSet->m_2 = sno11;
		m_pSet->m_3 = sex11;

		m_pSet->Update();
		UpdateData(false);
	}
}
