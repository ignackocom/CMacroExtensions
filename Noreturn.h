/******************************************************************************
* \file      Noreturn.h
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Noreturn macros
* \details
*
* \see
*            and other resources
******************************************************************************/

#ifndef NORETURN_H
#define NORETURN_H		20250318L


#if !defined(__cplusplus)

#if !defined(__STDC_VERSION__) || __STDC_VERSION__ < 201112L

/* C89 - C99 */

#define NORETURN

#elif defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L && __STDC_VERSION__ < 202311L

/* C11 - C17 */

#define NORETURN		_Noreturn

#else

/* C23 and higher */

#define NORETURN		[[noreturn]]


#endif /* !defined(__STDC_VERSION__) || defined(__STDC_VERSION__) && __STDC_VERSION__ < 202311L */

#else /* !defined(__cplusplus) */

/* C++ */

#if __cplusplus < 201103L

/* CPP98 */

#define NORETURN

#else

/* CPP11 and higher */

#define NORETURN		[[noreturn]]

#endif

#endif /* !defined(__cplusplus) */


#endif /* NORETURN_H */
