
// �ۺ�ʵ��-1Set.h: C�ۺ�ʵ��1Set ��Ľӿ�
//


#pragma once

// ���������� 2020��5��26��, 20:37

class C�ۺ�ʵ��1Set : public CRecordset
{
public:
	C�ۺ�ʵ��1Set(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(C�ۺ�ʵ��1Set)

// �ֶ�/��������

// �����ַ�������(�������)��ӳ���ݿ��ֶ�(ANSI �������͵� CStringA �� Unicode
// �������͵� CStringW)��ʵ���������͡�
//  ����Ϊ��ֹ ODBC ��������ִ�п���
// ����Ҫ��ת�������ϣ�������Խ���Щ��Ա����Ϊ
// CString ���ͣ�ODBC ��������ִ�����б�Ҫ��ת����
// (ע��: ����ʹ�� 3.5 �����߰汾�� ODBC ��������
// ��ͬʱ֧�� Unicode ����Щת��)��

	long	m_ID;
	CStringW	m_1;
	CStringW	m_2;
	CStringW	m_3;
	CStringW	m_4;
	CStringW	m_5;
	CStringW	m_6;
	CStringW	m_7;
	CStringW	m_8;

// ��д
	// �����ɵ��麯����д
	public:
	virtual CString GetDefaultConnect();	// Ĭ�������ַ���

	virtual CString GetDefaultSQL(); 	// ��¼����Ĭ�� SQL
	virtual void DoFieldExchange(CFieldExchange* pFX);	// RFX ֧��

// ʵ��
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

};

