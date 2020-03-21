
// test 6-3-1View.h : Ctest631View 类的接口
//

#pragma once


class Ctest631View : public CView
{
protected: // 仅从序列化创建
	Ctest631View();
	DECLARE_DYNCREATE(Ctest631View)

// 特性
public:
	Ctest631Doc* GetDocument() const;

// 操作
public:
	int N;
	CArray<CRect, CRect> cr;
	CArray<boolean, boolean> flag;
	bool set;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctest631View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // test 6-3-1View.cpp 中的调试版本
inline Ctest631Doc* Ctest631View::GetDocument() const
   { return reinterpret_cast<Ctest631Doc*>(m_pDocument); }
#endif

