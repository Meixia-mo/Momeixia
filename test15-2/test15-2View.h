
// test15-2View.h : Ctest152View 类的接口
//

#pragma once


class Ctest152View : public CView
{
protected: // 仅从序列化创建
	Ctest152View();
	DECLARE_DYNCREATE(Ctest152View)

// 特性
public:
	Ctest152Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctest152View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // test15-2View.cpp 中的调试版本
inline Ctest152Doc* Ctest152View::GetDocument() const
   { return reinterpret_cast<Ctest152Doc*>(m_pDocument); }
#endif

