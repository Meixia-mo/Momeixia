
// �ۺ�ʵ����View.h : C�ۺ�ʵ����View ��Ľӿ�
//

#pragma once

class C�ۺ�ʵ����Set;

class C�ۺ�ʵ����View : public CRecordView
{
protected: // �������л�����
	C�ۺ�ʵ����View();
	DECLARE_DYNCREATE(C�ۺ�ʵ����View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY_FORM };
#endif
	C�ۺ�ʵ����Set* m_pSet;

// ����
public:
	C�ۺ�ʵ����Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~C�ۺ�ʵ����View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // �ۺ�ʵ����View.cpp �еĵ��԰汾
inline C�ۺ�ʵ����Doc* C�ۺ�ʵ����View::GetDocument() const
   { return reinterpret_cast<C�ۺ�ʵ����Doc*>(m_pDocument); }
#endif

