
// ��ʮһ��ʵ��View.h : C��ʮһ��ʵ��View ��Ľӿ�
//

#pragma once

class C��ʮһ��ʵ��Set;

class C��ʮһ��ʵ��View : public CRecordView
{
protected: // �������л�����
	C��ʮһ��ʵ��View();
	DECLARE_DYNCREATE(C��ʮһ��ʵ��View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY_FORM };
#endif
	C��ʮһ��ʵ��Set* m_pSet;

// ����
public:
	C��ʮһ��ʵ��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~C��ʮһ��ʵ��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	long ID;
	CString name;
	CString stdno;
	CString sex;
	double stdno1;
};

#ifndef _DEBUG  // ��ʮһ��ʵ��View.cpp �еĵ��԰汾
inline C��ʮһ��ʵ��Doc* C��ʮһ��ʵ��View::GetDocument() const
   { return reinterpret_cast<C��ʮһ��ʵ��Doc*>(m_pDocument); }
#endif

