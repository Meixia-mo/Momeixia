
// test11-2Doc.h : Ctest112Doc ��Ľӿ�
//


#pragma once


class Ctest112Doc : public CDocument
{
protected: // �������л�����
	Ctest112Doc();
	DECLARE_DYNCREATE(Ctest112Doc)

// ����
public:

// ����
public:
	bool set,set1, set2;
	int cx, cy;
	int rx, ry;

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~Ctest112Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
