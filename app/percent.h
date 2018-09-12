#pragma once
#include "_Picture.h"
#include "_Font.h"

// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CPercent wrapper class

class CPercent : public CWnd
{
protected:
	DECLARE_DYNCREATE(CPercent)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0xA0ED9404, 0x6466, 0x11CF, { 0xBC, 0x8B, 0x20, 0x74, 0x2, 0xC1, 0x6, 0x27 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle,
						const RECT& rect, CWnd* pParentWnd, UINT nID, 
						CCreateContext* pContext = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); 
	}

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, 
				UINT nID, CFile* pPersist = NULL, BOOL bStorage = FALSE,
				BSTR bstrLicKey = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); 
	}

// Attributes
public:
enum
{
    NoMouseControl = 0,
    Relative = 1,
    SnapTo = 2
}enumMouseMode;
enum
{
    NoBevel = 0,
    BevelRaised = 1,
    BevelLowered = 2
}enumBevelStyle;
enum
{
    NoBorder = 0,
    BorderBeveled = 1,
    BorderFramed = 2
}enumBorderType;
enum
{
    AlignLeft = 0,
    AlignRight = 1,
    AlignCenter = 2
}enumAlignType;
enum
{
    NoDigital = 0,
    DigitalFixed = 1,
    DigitalFloating = 2
}enumDigitalStyle;
enum
{
    NoFrame = 0,
    FrameRectangle = 1,
    FrameCircle = 2,
    UserDefinedFrame = 3
}enumFrameStyle;
enum
{
    LinearDisplay = 0,
    RadialDisplay = 1
}enumDisplayMode;
enum
{
    Percentage = 0,
    Ratio = 1
}enumPercentMode;
enum
{
    DirectionForward = 0,
    DirectionBackward = 1
}enumDirection;
enum
{
    Horizontal = 0,
    Vertical = 1
}enumOrientation;
enum
{
    OnOffNegative = 0,
    PercentColor = 1,
    NoPercentStyle = 2
}enumPercentStyle;
enum
{
    ShapeRectangle = 0,
    ShapeEllipse = 1,
    ShapeTank = 2,
    User_Defined_Shape = 3
}enumShapeStyle;


// Operations
public:

// _DPercent

// Functions
//

	void ShowPropertyPage()
	{
		InvokeHelper(0x31, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Redraw()
	{
		InvokeHelper(0x32, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void RedrawStatic()
	{
		InvokeHelper(0x33, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void AboutBox()
	{
		InvokeHelper(DISPID_ABOUTBOX, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	LPUNKNOWN GetClass()
	{
		LPUNKNOWN result;
		InvokeHelper(0xc8, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, NULL);
		return result;
	}

// Properties
//

CPicture GetBackPicture()
{
	LPDISPATCH result;
	GetProperty(0x1, VT_DISPATCH, (void*)&result);
	return CPicture(result);
}
void SetBackPicture(LPDISPATCH propVal)
{
	SetProperty(0x1, VT_DISPATCH, propVal);
}
BOOL GetEnabled()
{
	BOOL result;
	GetProperty(DISPID_ENABLED, VT_BOOL, (void*)&result);
	return result;
}
void SetEnabled(BOOL propVal)
{
	SetProperty(DISPID_ENABLED, VT_BOOL, propVal);
}
long GetBevelInner()
{
	long result;
	GetProperty(0x2, VT_I4, (void*)&result);
	return result;
}
void SetBevelInner(long propVal)
{
	SetProperty(0x2, VT_I4, propVal);
}
long GetBevelOuter()
{
	long result;
	GetProperty(0x3, VT_I4, (void*)&result);
	return result;
}
void SetBevelOuter(long propVal)
{
	SetProperty(0x3, VT_I4, propVal);
}
short GetBevelWidth()
{
	short result;
	GetProperty(0x4, VT_I2, (void*)&result);
	return result;
}
void SetBevelWidth(short propVal)
{
	SetProperty(0x4, VT_I2, propVal);
}
short GetBorderWidth()
{
	short result;
	GetProperty(0x5, VT_I2, (void*)&result);
	return result;
}
void SetBorderWidth(short propVal)
{
	SetProperty(0x5, VT_I2, propVal);
}
BOOL GetOutline()
{
	BOOL result;
	GetProperty(0x6, VT_BOOL, (void*)&result);
	return result;
}
void SetOutline(BOOL propVal)
{
	SetProperty(0x6, VT_BOOL, propVal);
}
long GetOutlineAlign()
{
	long result;
	GetProperty(0x7, VT_I4, (void*)&result);
	return result;
}
void SetOutlineAlign(long propVal)
{
	SetProperty(0x7, VT_I4, propVal);
}
unsigned long GetOutlineColor()
{
	unsigned long result;
	GetProperty(0x8, VT_UI4, (void*)&result);
	return result;
}
void SetOutlineColor(unsigned long propVal)
{
	SetProperty(0x8, VT_UI4, propVal);
}
CString GetOutlineTitle()
{
	CString result;
	GetProperty(0x9, VT_BSTR, (void*)&result);
	return result;
}
void SetOutlineTitle(CString propVal)
{
	SetProperty(0x9, VT_BSTR, propVal);
}
short GetOutlineWidth()
{
	short result;
	GetProperty(0xa, VT_I2, (void*)&result);
	return result;
}
void SetOutlineWidth(short propVal)
{
	SetProperty(0xa, VT_I2, propVal);
}
short GetPortions()
{
	short result;
	GetProperty(0xb, VT_I2, (void*)&result);
	return result;
}
void SetPortions(short propVal)
{
	SetProperty(0xb, VT_I2, propVal);
}
short GetPortionID()
{
	short result;
	GetProperty(0xc, VT_I2, (void*)&result);
	return result;
}
void SetPortionID(short propVal)
{
	SetProperty(0xc, VT_I2, propVal);
}
unsigned long GetPortionColor()
{
	unsigned long result;
	GetProperty(0xd, VT_UI4, (void*)&result);
	return result;
}
void SetPortionColor(unsigned long propVal)
{
	SetProperty(0xd, VT_UI4, propVal);
}
CPicture GetPortionPicture()
{
	LPDISPATCH result;
	GetProperty(0xe, VT_DISPATCH, (void*)&result);
	return CPicture(result);
}
void SetPortionPicture(LPDISPATCH propVal)
{
	SetProperty(0xe, VT_DISPATCH, propVal);
}
double GetPortionValue()
{
	double result;
	GetProperty(0xf, VT_R8, (void*)&result);
	return result;
}
void SetPortionValue(double propVal)
{
	SetProperty(0xf, VT_R8, propVal);
}
unsigned long GetPortionDigitalColor()
{
	unsigned long result;
	GetProperty(0x10, VT_UI4, (void*)&result);
	return result;
}
void SetPortionDigitalColor(unsigned long propVal)
{
	SetProperty(0x10, VT_UI4, propVal);
}
double GetPortionDigitalX()
{
	double result;
	GetProperty(0x11, VT_R8, (void*)&result);
	return result;
}
void SetPortionDigitalX(double propVal)
{
	SetProperty(0x11, VT_R8, propVal);
}
double GetPortionDigitalY()
{
	double result;
	GetProperty(0x12, VT_R8, (void*)&result);
	return result;
}
void SetPortionDigitalY(double propVal)
{
	SetProperty(0x12, VT_R8, propVal);
}
double GetStartAngle()
{
	double result;
	GetProperty(0x13, VT_R8, (void*)&result);
	return result;
}
void SetStartAngle(double propVal)
{
	SetProperty(0x13, VT_R8, propVal);
}
long GetDigitalStyle()
{
	long result;
	GetProperty(0x14, VT_I4, (void*)&result);
	return result;
}
void SetDigitalStyle(long propVal)
{
	SetProperty(0x14, VT_I4, propVal);
}
long GetDirection()
{
	long result;
	GetProperty(0x15, VT_I4, (void*)&result);
	return result;
}
void SetDirection(long propVal)
{
	SetProperty(0x15, VT_I4, propVal);
}
double GetMax()
{
	double result;
	GetProperty(0x16, VT_R8, (void*)&result);
	return result;
}
void SetMax(double propVal)
{
	SetProperty(0x16, VT_R8, propVal);
}
double GetMin()
{
	double result;
	GetProperty(0x17, VT_R8, (void*)&result);
	return result;
}
void SetMin(double propVal)
{
	SetProperty(0x17, VT_R8, propVal);
}
long GetOrientation()
{
	long result;
	GetProperty(0x18, VT_I4, (void*)&result);
	return result;
}
void SetOrientation(long propVal)
{
	SetProperty(0x18, VT_I4, propVal);
}
long GetDisplayMode()
{
	long result;
	GetProperty(0x19, VT_I4, (void*)&result);
	return result;
}
void SetDisplayMode(long propVal)
{
	SetProperty(0x19, VT_I4, propVal);
}
long GetPercentMode()
{
	long result;
	GetProperty(0x1a, VT_I4, (void*)&result);
	return result;
}
void SetPercentMode(long propVal)
{
	SetProperty(0x1a, VT_I4, propVal);
}
unsigned long GetBackColor()
{
	unsigned long result;
	GetProperty(DISPID_BACKCOLOR, VT_UI4, (void*)&result);
	return result;
}
void SetBackColor(unsigned long propVal)
{
	SetProperty(DISPID_BACKCOLOR, VT_UI4, propVal);
}
CString GetFrameShape()
{
	CString result;
	GetProperty(0x1b, VT_BSTR, (void*)&result);
	return result;
}
void SetFrameShape(CString propVal)
{
	SetProperty(0x1b, VT_BSTR, propVal);
}
long GetFrameStyle()
{
	long result;
	GetProperty(0x1c, VT_I4, (void*)&result);
	return result;
}
void SetFrameStyle(long propVal)
{
	SetProperty(0x1c, VT_I4, propVal);
}
double GetFrameLeft()
{
	double result;
	GetProperty(0x1d, VT_R8, (void*)&result);
	return result;
}
void SetFrameLeft(double propVal)
{
	SetProperty(0x1d, VT_R8, propVal);
}
double GetFrameTop()
{
	double result;
	GetProperty(0x1e, VT_R8, (void*)&result);
	return result;
}
void SetFrameTop(double propVal)
{
	SetProperty(0x1e, VT_R8, propVal);
}
double GetFrameRight()
{
	double result;
	GetProperty(0x1f, VT_R8, (void*)&result);
	return result;
}
void SetFrameRight(double propVal)
{
	SetProperty(0x1f, VT_R8, propVal);
}
double GetFrameBottom()
{
	double result;
	GetProperty(0x20, VT_R8, (void*)&result);
	return result;
}
void SetFrameBottom(double propVal)
{
	SetProperty(0x20, VT_R8, propVal);
}
unsigned long GetFrameColor()
{
	unsigned long result;
	GetProperty(0x21, VT_UI4, (void*)&result);
	return result;
}
void SetFrameColor(unsigned long propVal)
{
	SetProperty(0x21, VT_UI4, propVal);
}
CPicture GetFramePicture()
{
	LPDISPATCH result;
	GetProperty(0x22, VT_DISPATCH, (void*)&result);
	return CPicture(result);
}
void SetFramePicture(LPDISPATCH propVal)
{
	SetProperty(0x22, VT_DISPATCH, propVal);
}
BOOL GetAutoRedraw()
{
	BOOL result;
	GetProperty(0x23, VT_BOOL, (void*)&result);
	return result;
}
void SetAutoRedraw(BOOL propVal)
{
	SetProperty(0x23, VT_BOOL, propVal);
}
double GetDigitalPosition()
{
	double result;
	GetProperty(0x24, VT_R8, (void*)&result);
	return result;
}
void SetDigitalPosition(double propVal)
{
	SetProperty(0x24, VT_R8, propVal);
}
COleFont GetFont()
{
	LPDISPATCH result;
	GetProperty(DISPID_FONT, VT_DISPATCH, (void*)&result);
	return COleFont(result);
}
void SetFont(LPDISPATCH propVal)
{
	SetProperty(DISPID_FONT, VT_DISPATCH, propVal);
}
double GetPortionPercent()
{
	double result;
	GetProperty(0x25, VT_R8, (void*)&result);
	return result;
}
void SetPortionPercent(double propVal)
{
	SetProperty(0x25, VT_R8, propVal);
}
double Get_PortionValue()
{
	double result;
	GetProperty(0x0, VT_R8, (void*)&result);
	return result;
}
void Set_PortionValue(double propVal)
{
	SetProperty(0x0, VT_R8, propVal);
}
CString GetFontName()
{
	CString result;
	GetProperty(0x26, VT_BSTR, (void*)&result);
	return result;
}
void SetFontName(CString propVal)
{
	SetProperty(0x26, VT_BSTR, propVal);
}
float GetFontSize()
{
	float result;
	GetProperty(0x27, VT_R4, (void*)&result);
	return result;
}
void SetFontSize(float propVal)
{
	SetProperty(0x27, VT_R4, propVal);
}
BOOL GetFontBold()
{
	BOOL result;
	GetProperty(0x28, VT_BOOL, (void*)&result);
	return result;
}
void SetFontBold(BOOL propVal)
{
	SetProperty(0x28, VT_BOOL, propVal);
}
BOOL GetFontItalic()
{
	BOOL result;
	GetProperty(0x29, VT_BOOL, (void*)&result);
	return result;
}
void SetFontItalic(BOOL propVal)
{
	SetProperty(0x29, VT_BOOL, propVal);
}
BOOL GetFontStrikethru()
{
	BOOL result;
	GetProperty(0x2a, VT_BOOL, (void*)&result);
	return result;
}
void SetFontStrikethru(BOOL propVal)
{
	SetProperty(0x2a, VT_BOOL, propVal);
}
BOOL GetFontUnderline()
{
	BOOL result;
	GetProperty(0x2b, VT_BOOL, (void*)&result);
	return result;
}
void SetFontUnderline(BOOL propVal)
{
	SetProperty(0x2b, VT_BOOL, propVal);
}
CString GetDigitalFormat()
{
	CString result;
	GetProperty(0x2c, VT_BSTR, (void*)&result);
	return result;
}
void SetDigitalFormat(CString propVal)
{
	SetProperty(0x2c, VT_BSTR, propVal);
}
long GetMouseControl()
{
	long result;
	GetProperty(0x2d, VT_I4, (void*)&result);
	return result;
}
void SetMouseControl(long propVal)
{
	SetProperty(0x2d, VT_I4, propVal);
}
BOOL GetSingleBuffer()
{
	BOOL result;
	GetProperty(0x2e, VT_BOOL, (void*)&result);
	return result;
}
void SetSingleBuffer(BOOL propVal)
{
	SetProperty(0x2e, VT_BOOL, propVal);
}
BOOL GetFocusOutline()
{
	BOOL result;
	GetProperty(0x2f, VT_BOOL, (void*)&result);
	return result;
}
void SetFocusOutline(BOOL propVal)
{
	SetProperty(0x2f, VT_BOOL, propVal);
}
OLE_HANDLE GethWnd()
{
	OLE_HANDLE result;
	GetProperty(DISPID_HWND, VT_I4, (void*)&result);
	return result;
}
void SethWnd(OLE_HANDLE propVal)
{
	SetProperty(DISPID_HWND, VT_I4, propVal);
}
CString GetConfiguration()
{
	CString result;
	GetProperty(0x30, VT_BSTR, (void*)&result);
	return result;
}
void SetConfiguration(CString propVal)
{
	SetProperty(0x30, VT_BSTR, propVal);
}


};