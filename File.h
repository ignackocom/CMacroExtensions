/******************************************************************************
* \file      File.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     File macros
* \details
*
* \see		 https://github.com/ignackocom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef FILE_H
#define FILE_H		20250318L


#include <string.h>


/* file separator */
#if defined(_WIN16) || defined(_WIN32) || defined(_WIN64) || \
    defined(__WIN32__) || defined(__TOS_WIN__) || defined(__WINDOWS__) || \
    defined(__CYGWIN__) || defined(__CYGWIN64__) || \
    defined(__MINGW32__) || defined(__MINGW64__) || \
    defined(_WIN32_WCE) || defined(WIN32_PLATFORM_HPC2000) || \
    defined(WIN32_PLATFORM_HPCPRO) || defined(WIN32_PLATFORM_PSPC) || \
    defined(WIN32_PLATFORM_WFSP	) || \
    defined(MSDOS) || defined(__MSDOS__) || defined(_MSDOS) || defined(__DOS__)
#define FILE_SEPARATOR  '\\'
#else
#define FILE_SEPARATOR  '/'
#endif


/* __FILE__ short name */
#define FILE_SHORT      (strrchr(__FILE__,FILE_SEPARATOR) ? strrchr(__FILE__,FILE_SEPARATOR)+1 : __FILE__)


#endif /* FILE_H */
