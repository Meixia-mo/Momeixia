
// test8-1View.h : Ctest81View 类的接口
//

#pragma once


class Ctest81View : public CView
{
protected: // 仅从序列化创建
	Ctest81View();
	DECLARE_DYNCREATE(Ctest81View)

// 特性
public:
	Ctest81Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctest81View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowName();
};

#ifndef _DEBUG  // test8-1View.cpp 中的调试版本
inline Ctest81Doc* Ctest81View::GetDocument() const
   { return reinterpret_cast<Ctest81Doc*>(m_pDocument); }
#endif

