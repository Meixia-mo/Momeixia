
// test4-3View.h : Ctest43View 类的接口
//

#pragma once


class Ctest43View : public CView
{
protected: // 仅从序列化创建
	Ctest43View();
	DECLARE_DYNCREATE(Ctest43View)

// 特性
public:
	Ctest43Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctest43View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // test4-3View.cpp 中的调试版本
inline Ctest43Doc* Ctest43View::GetDocument() const
   { return reinterpret_cast<Ctest43Doc*>(m_pDocument); }
#endif

