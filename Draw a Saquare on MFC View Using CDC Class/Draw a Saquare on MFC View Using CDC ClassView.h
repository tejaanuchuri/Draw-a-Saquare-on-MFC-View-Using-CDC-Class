
// Draw a Saquare on MFC View Using CDC ClassView.h : interface of the CDrawaSaquareonMFCViewUsingCDCClassView class
//

#pragma once


class CDrawaSaquareonMFCViewUsingCDCClassView : public CView
{
protected: // create from serialization only
	CDrawaSaquareonMFCViewUsingCDCClassView() noexcept;
	DECLARE_DYNCREATE(CDrawaSaquareonMFCViewUsingCDCClassView)

// Attributes
public:
	CDrawaSaquareonMFCViewUsingCDCClassDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CDrawaSaquareonMFCViewUsingCDCClassView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Draw a Saquare on MFC View Using CDC ClassView.cpp
inline CDrawaSaquareonMFCViewUsingCDCClassDoc* CDrawaSaquareonMFCViewUsingCDCClassView::GetDocument() const
   { return reinterpret_cast<CDrawaSaquareonMFCViewUsingCDCClassDoc*>(m_pDocument); }
#endif

