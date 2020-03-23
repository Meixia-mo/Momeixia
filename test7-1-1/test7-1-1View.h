
// test7-1-1View.h : Ctest711View 类的接口
//

#pragma once


class Ctest711View : public CView
{
protected: // 仅从序列化创建
	Ctest711View();
	DECLARE_DYNCREATE(Ctest711View)

// 特性
public:
	Ctest711Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctest711View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnViewCircle();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // test7-1-1View.cpp 中的调试版本
inline Ctest711Doc* Ctest711View::GetDocument() const
   { return reinterpret_cast<Ctest711Doc*>(m_pDocument); }
#endif

