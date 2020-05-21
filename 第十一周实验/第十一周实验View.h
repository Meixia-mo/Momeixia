
// 第十一周实验View.h : C第十一周实验View 类的接口
//

#pragma once

class C第十一周实验Set;

class C第十一周实验View : public CRecordView
{
protected: // 仅从序列化创建
	C第十一周实验View();
	DECLARE_DYNCREATE(C第十一周实验View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY_FORM };
#endif
	C第十一周实验Set* m_pSet;

// 特性
public:
	C第十一周实验Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~C第十一周实验View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	long ID;
	CString name;
	CString stdno;
	CString sex;
	double stdno1;
};

#ifndef _DEBUG  // 第十一周实验View.cpp 中的调试版本
inline C第十一周实验Doc* C第十一周实验View::GetDocument() const
   { return reinterpret_cast<C第十一周实验Doc*>(m_pDocument); }
#endif

