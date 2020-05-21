
// 第7周实验View.h : C第7周实验View 类的接口
//

#pragma once


class C第7周实验View : public CView
{
protected: // 仅从序列化创建
	C第7周实验View();
	DECLARE_DYNCREATE(C第7周实验View)

// 特性
public:
	C第7周实验Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C第7周实验View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPuout();
};

#ifndef _DEBUG  // 第7周实验View.cpp 中的调试版本
inline C第7周实验Doc* C第7周实验View::GetDocument() const
   { return reinterpret_cast<C第7周实验Doc*>(m_pDocument); }
#endif

