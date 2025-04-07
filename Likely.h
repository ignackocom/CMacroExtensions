/******************************************************************************
* \file      Likely.h
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Likely macros
* \details
*
* \see
*            and other resources
******************************************************************************/

#ifndef LIKELY_H
#define LIKELY_H		20250318L


#if defined(__GNUC__) && (__GNUC__ > 2) || defined(__clang__)
#define LIKELY(expr)    (__builtin_expect(!!(expr), 1))
#define UNLIKELY(expr)  (__builtin_expect(!!(expr), 0))
#else
#define LIKELY(expr)    (expr)
#define UNLIKELY(expr)  (expr)
#endif


#endif /* LIKELY_H */
