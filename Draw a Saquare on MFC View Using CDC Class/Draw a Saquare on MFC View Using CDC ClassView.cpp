
// Draw a Saquare on MFC View Using CDC ClassView.cpp : implementation of the CDrawaSaquareonMFCViewUsingCDCClassView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Draw a Saquare on MFC View Using CDC Class.h"
#endif

#include "Draw a Saquare on MFC View Using CDC ClassDoc.h"
#include "Draw a Saquare on MFC View Using CDC ClassView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDrawaSaquareonMFCViewUsingCDCClassView

IMPLEMENT_DYNCREATE(CDrawaSaquareonMFCViewUsingCDCClassView, CView)

BEGIN_MESSAGE_MAP(CDrawaSaquareonMFCViewUsingCDCClassView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CDrawaSaquareonMFCViewUsingCDCClassView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CDrawaSaquareonMFCViewUsingCDCClassView construction/destruction

CDrawaSaquareonMFCViewUsingCDCClassView::CDrawaSaquareonMFCViewUsingCDCClassView() noexcept
{
	// TODO: add construction code here

}

CDrawaSaquareonMFCViewUsingCDCClassView::~CDrawaSaquareonMFCViewUsingCDCClassView()
{
}

BOOL CDrawaSaquareonMFCViewUsingCDCClassView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CDrawaSaquareonMFCViewUsingCDCClassView drawing

void CDrawaSaquareonMFCViewUsingCDCClassView::OnDraw(CDC* pDC)
{	
	CDrawaSaquareonMFCViewUsingCDCClassDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	pDC->Rectangle(80, 80, 700, 700);

	// TODO: add draw code for native data here
}


// CDrawaSaquareonMFCViewUsingCDCClassView printing


void CDrawaSaquareonMFCViewUsingCDCClassView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CDrawaSaquareonMFCViewUsingCDCClassView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CDrawaSaquareonMFCViewUsingCDCClassView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CDrawaSaquareonMFCViewUsingCDCClassView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CDrawaSaquareonMFCViewUsingCDCClassView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CDrawaSaquareonMFCViewUsingCDCClassView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CDrawaSaquareonMFCViewUsingCDCClassView diagnostics

#ifdef _DEBUG
void CDrawaSaquareonMFCViewUsingCDCClassView::AssertValid() const
{
	CView::AssertValid();
}

void CDrawaSaquareonMFCViewUsingCDCClassView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDrawaSaquareonMFCViewUsingCDCClassDoc* CDrawaSaquareonMFCViewUsingCDCClassView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDrawaSaquareonMFCViewUsingCDCClassDoc)));
	return (CDrawaSaquareonMFCViewUsingCDCClassDoc*)m_pDocument;
}
#endif //_DEBUG


// CDrawaSaquareonMFCViewUsingCDCClassView message handlers
