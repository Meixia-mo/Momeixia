
// test2-1View.h : Ctest21View 类的接口
//

#pragma once


class Ctest21View : public CView
{
protected: // 仅从序列化创建
	Ctest21View();
	DECLARE_DYNCREATE(Ctest21View)

// 特性
public:
	Ctest21Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctest21View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // test2-1View.cpp 中的调试版本
inline Ctest21Doc* Ctest21View::GetDocument() const
   { return reinterpret_cast<Ctest21Doc*>(m_pDocument); }
#endif

