
// �ۺ�ʵ��-1View.h : C�ۺ�ʵ��1View ��Ľӿ�
//

#pragma once

class C�ۺ�ʵ��1Set;

class C�ۺ�ʵ��1View : public CRecordView
{
protected: // �������л�����
	C�ۺ�ʵ��1View();
	DECLARE_DYNCREATE(C�ۺ�ʵ��1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY1_FORM };
#endif
	C�ۺ�ʵ��1Set* m_pSet;
	CString path;

// ����
public:
	C�ۺ�ʵ��1Doc* GetDocument() const;

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
	virtual ~C�ۺ�ʵ��1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString name;
	long ID;
	CString name1;
	CString sno;
	CString dept;
	CString sex;
	CString birthday;
	CString phone;
	CString add;
	afx_msg
		void draw(CString file);
	void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	CString path1;
};

#ifndef _DEBUG  // �ۺ�ʵ��-1View.cpp �еĵ��԰汾
inline C�ۺ�ʵ��1Doc* C�ۺ�ʵ��1View::GetDocument() const
   { return reinterpret_cast<C�ۺ�ʵ��1Doc*>(m_pDocument); }
#endif

