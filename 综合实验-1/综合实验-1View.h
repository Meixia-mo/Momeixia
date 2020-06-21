
// 综合实验-1View.h : C综合实验1View 类的接口
//

#pragma once

class C综合实验1Set;

class C综合实验1View : public CRecordView
{
protected: // 仅从序列化创建
	C综合实验1View();
	DECLARE_DYNCREATE(C综合实验1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY1_FORM };
#endif
	C综合实验1Set* m_pSet;
	CString path;

// 特性
public:
	C综合实验1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~C综合实验1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
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

#ifndef _DEBUG  // 综合实验-1View.cpp 中的调试版本
inline C综合实验1Doc* C综合实验1View::GetDocument() const
   { return reinterpret_cast<C综合实验1Doc*>(m_pDocument); }
#endif

