
// ��ʮһ��ʵ��Set.cpp : C��ʮһ��ʵ��Set ���ʵ��
//

#include "stdafx.h"
#include "��ʮһ��ʵ��.h"
#include "��ʮһ��ʵ��Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ʮһ��ʵ��Set ʵ��

// ���������� 2020��5��21��, 22:08

IMPLEMENT_DYNAMIC(C��ʮһ��ʵ��Set, CRecordset)

C��ʮһ��ʵ��Set::C��ʮһ��ʵ��Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = 0.0;
	m_3 = L"";
	m_nFields = 4;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString C��ʮһ��ʵ��Set::GetDefaultConnect()
{
	return _T("DSN=���ݿ�_ѧ����Ϣ��3;DBQ=D:\\\x684c\x9762\x6587\x4ef6\x5939\\\x4e71\x4e03\x516b\x7cdf\\Database2.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString C��ʮһ��ʵ��Set::GetDefaultSQL()
{
	return _T("[ѧ����Ϣ��]");
}

void C��ʮһ��ʵ��Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Double(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Text(pFX, _T("[�ֶ�3]"), m_3);

}
/////////////////////////////////////////////////////////////////////////////
// C��ʮһ��ʵ��Set ���

#ifdef _DEBUG
void C��ʮһ��ʵ��Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void C��ʮһ��ʵ��Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

