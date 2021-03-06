/*
 * MUSCLE SmartCard Development ( http://www.linuxnet.com )
 *
 * Copyright (C) 1999
 *  David Corcoran <corcoran@linuxnet.com>
 *
 * $Id: wintypes.h,v 1.3 2005-09-06 20:37:26 rousseau Exp $
 */

/**
 * @file
 * @brief This keeps a list of Windows(R) types.
 */

#ifndef __wintypes_h__
#define __wintypes_h__

#ifdef __cplusplus
extern "C"
{
#endif

#if !defined(WIN32)

#ifndef BYTE
	typedef unsigned char BYTE;
#endif
	typedef unsigned char UCHAR;
	typedef unsigned char *PUCHAR;
	typedef unsigned short USHORT;

#ifndef __COREFOUNDATION_CFPLUGINCOM__
	typedef unsigned long ULONG;
	typedef void *LPVOID;
	typedef short BOOL;
#endif

	typedef unsigned long *PULONG;
	typedef const void *LPCVOID;
	typedef unsigned long DWORD;
	typedef unsigned long *PDWORD;
	typedef unsigned short WORD;
	typedef long LONG;
	typedef long RESPONSECODE;
	typedef const char *LPCTSTR;
	typedef const BYTE *LPCBYTE;
	typedef BYTE *LPBYTE;
	typedef DWORD *LPDWORD;
	typedef char *LPTSTR;

	/* this type is deprecated but still used by old drivers and applications
	 * You should use LPTSTR instead */
	typedef char *LPSTR
#ifdef __GNUC__
		/* __attribute__ is a GCC only extension */
		__attribute__ ((deprecated))
#endif
		;

#else
#include <windows.h>
#endif

#ifdef __cplusplus
}
#endif

#endif
