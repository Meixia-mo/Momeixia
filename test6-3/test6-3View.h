
// test6-3View.h : Ctest63View 类的接口
//

#pragma once


class Ctest63View : public CView
{
protected: // 仅从序列化创建
	Ctest63View();
	DECLARE_DYNCREATE(Ctest63View)

// 特性
public:
	Ctest63Doc* GetDocument() const;

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
	virtual ~Ctest63View();
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

#ifndef _DEBUG  // test6-3View.cpp 中的调试版本
inline Ctest63Doc* Ctest63View::GetDocument() const
   { return reinterpret_cast<Ctest63Doc*>(m_pDocument); }
#endif

