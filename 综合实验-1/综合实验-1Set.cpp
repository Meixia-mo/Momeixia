
// �ۺ�ʵ��-1Set.cpp : C�ۺ�ʵ��1Set ���ʵ��
//

#include "stdafx.h"
#include "�ۺ�ʵ��-1.h"
#include "�ۺ�ʵ��-1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ۺ�ʵ��1Set ʵ��

// ���������� 2020��5��26��, 20:37

IMPLEMENT_DYNAMIC(C�ۺ�ʵ��1Set, CRecordset)

C�ۺ�ʵ��1Set::C�ۺ�ʵ��1Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = L"";
	m_3 = L"";
	m_4 = L"";
	m_5 = L"";
	m_6 = L"";
	m_7 = L"";
	m_8 = L"";
	m_nFields = 9;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString C�ۺ�ʵ��1Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x4e91\x6df1\x5b66\x9662\x5b66\x751f\x4fe1\x606f;DBQ=D:\\\x684c\x9762\x6587\x4ef6\x5939\\\x4e71\x4e03\x516b\x7cdf\\Database3.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString C�ۺ�ʵ��1Set::GetDefaultSQL()
{
	return _T("[����ѧԺѧ����Ϣ��]");
}

void C�ۺ�ʵ��1Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Text(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Text(pFX, _T("[�ֶ�3]"), m_3);
	RFX_Text(pFX, _T("[�ֶ�4]"), m_4);
	RFX_Text(pFX, _T("[�ֶ�5]"), m_5);
	RFX_Text(pFX, _T("[�ֶ�6]"), m_6);
	RFX_Text(pFX, _T("[�ֶ�7]"), m_7);
	RFX_Text(pFX, _T("[�ֶ�8]"), m_8);

}
/////////////////////////////////////////////////////////////////////////////
// C�ۺ�ʵ��1Set ���

#ifdef _DEBUG
void C�ۺ�ʵ��1Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void C�ۺ�ʵ��1Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

