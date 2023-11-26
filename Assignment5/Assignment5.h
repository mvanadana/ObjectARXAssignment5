// Assignment5.h : main header file for the Assignment5 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols
#include <Windows.h>
#include<arxHeaders.h>
#include <dbents.h>

// CAssignment5App
// See Assignment5.cpp for the implementation of this class
//

class CAssignment5App : public CWinApp
{
public:
	CAssignment5App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
