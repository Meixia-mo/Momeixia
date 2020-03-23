
// test7-2View.h : Ctest72View 类的接口
//

#pragma once


class Ctest72View : public CView
{
protected: // 仅从序列化创建
	Ctest72View();
	DECLARE_DYNCREATE(Ctest72View)

// 特性
public:
	Ctest72Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctest72View();
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

#ifndef _DEBUG  // test7-2View.cpp 中的调试版本
inline Ctest72Doc* Ctest72View::GetDocument() const
   { return reinterpret_cast<Ctest72Doc*>(m_pDocument); }
#endif

