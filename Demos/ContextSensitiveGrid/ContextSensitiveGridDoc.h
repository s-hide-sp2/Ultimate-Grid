// ContextSensitiveGridDoc.h : interface of the CContextSensitiveGridDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CONTEXTSENSITIVEGRIDDOC_H__BC1D8F9D_F912_11D3_9831_0020359647BF__INCLUDED_)
#define AFX_CONTEXTSENSITIVEGRIDDOC_H__BC1D8F9D_F912_11D3_9831_0020359647BF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CContextSensitiveGridDoc : public CDocument
{
protected: // create from serialization only
	CContextSensitiveGridDoc();
	DECLARE_DYNCREATE(CContextSensitiveGridDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CContextSensitiveGridDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CContextSensitiveGridDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CContextSensitiveGridDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CONTEXTSENSITIVEGRIDDOC_H__BC1D8F9D_F912_11D3_9831_0020359647BF__INCLUDED_)
