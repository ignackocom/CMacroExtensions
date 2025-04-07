/******************************************************************************
* \file      StdargExt.h
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Stdarg extension macros
* \details
*
* \see       https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef STDARGEXT_H
#define STDARGEXT_H		20250318L


#include <stdarg.h>


#if !defined(__STDC_VERSION__) || defined(__STDC_VERSION__) && __STDC_VERSION__ < 199901L 

#ifndef va_copy
#define va_copy(dst, src)  ((void)((dst) = (src)))
#endif

#endif /* !defined(__STDC_VERSION__) || defined(__STDC_VERSION__) && __STDC_VERSION__ < 199901L  */


#endif /* STDARGEXT_H */
