
// �ۺ�ʵ����Set.cpp : C�ۺ�ʵ����Set ���ʵ��
//

#include "stdafx.h"
#include "�ۺ�ʵ����.h"
#include "�ۺ�ʵ����Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ۺ�ʵ����Set ʵ��

// ���������� 2020��6��7��, 14:33

IMPLEMENT_DYNAMIC(C�ۺ�ʵ����Set, CRecordset)

C�ۺ�ʵ����Set::C�ۺ�ʵ����Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = L"";
	m_3 = L"";
	m_nFields = 4;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString C�ۺ�ʵ����Set::GetDefaultConnect()
{
	return _T("DSN=����Դ_������1;DBQ=D:\\\x684c\x9762\x6587\x4ef6\x5939\\\x4e71\x4e03\x516b\x7cdf\\Database4.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString C�ۺ�ʵ����Set::GetDefaultSQL()
{
	return _T("[������]");
}

void C�ۺ�ʵ����Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Text(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Text(pFX, _T("[�ֶ�3]"), m_3);

}
/////////////////////////////////////////////////////////////////////////////
// C�ۺ�ʵ����Set ���

#ifdef _DEBUG
void C�ۺ�ʵ����Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void C�ۺ�ʵ����Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

