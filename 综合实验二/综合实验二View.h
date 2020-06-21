
// 综合实验二View.h : C综合实验二View 类的接口
//

#pragma once

class C综合实验二Set;

class C综合实验二View : public CRecordView
{
protected: // 仅从序列化创建
	C综合实验二View();
	DECLARE_DYNCREATE(C综合实验二View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY_FORM };
#endif
	C综合实验二Set* m_pSet;
	CString path;

// 特性
public:
	C综合实验二Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	void draw(CString file);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~C综合实验二View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	long ID;
	CString name1;
	CString sno;
	CString dept;
	CString sex;
	CString birthday;
	CString phone;
	CString add;
	CString path1;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
};

#ifndef _DEBUG  // 综合实验二View.cpp 中的调试版本
inline C综合实验二Doc* C综合实验二View::GetDocument() const
   { return reinterpret_cast<C综合实验二Doc*>(m_pDocument); }
#endif

