
// test16-1View.h : Ctest161View 类的接口
//

#pragma once


class Ctest161View : public CView
{
protected: // 仅从序列化创建
	Ctest161View();
	DECLARE_DYNCREATE(Ctest161View)

// 特性
public:
	Ctest161Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctest161View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // test16-1View.cpp 中的调试版本
inline Ctest161Doc* Ctest161View::GetDocument() const
   { return reinterpret_cast<Ctest161Doc*>(m_pDocument); }
#endif

