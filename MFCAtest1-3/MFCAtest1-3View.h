
// MFCAtest1-3View.h : CMFCAtest13View 类的接口
//

#pragma once


class CMFCAtest13View : public CView
{
protected: // 仅从序列化创建
	CMFCAtest13View();
	DECLARE_DYNCREATE(CMFCAtest13View)

// 特性
public:
	CMFCAtest13Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCAtest13View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCAtest1-3View.cpp 中的调试版本
inline CMFCAtest13Doc* CMFCAtest13View::GetDocument() const
   { return reinterpret_cast<CMFCAtest13Doc*>(m_pDocument); }
#endif

