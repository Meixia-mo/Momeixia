
// test6-1Doc.h : Ctest61Doc ��Ľӿ�
//


#pragma once


class Ctest61Doc : public CDocument
{
protected: // �������л�����
	Ctest61Doc();
	DECLARE_DYNCREATE(Ctest61Doc)

// ����
public:

// ����
public:
	int count;
	int jiange;
	int x1,x2;
	int flag;
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
	virtual ~Ctest61Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ�����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};