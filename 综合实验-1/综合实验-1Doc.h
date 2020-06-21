
// 综合实验-1Doc.h : C综合实验1Doc 类的接口
//


#pragma once
#include "综合实验-1Set.h"


class C综合实验1Doc : public CDocument
{
protected: // 仅从序列化创建
	C综合实验1Doc();
	DECLARE_DYNCREATE(C综合实验1Doc)

// 特性
public:
	C综合实验1Set m_综合实验1Set;

// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~C综合实验1Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 用于为搜索处理程序设置搜索内容的 Helper 函数
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
