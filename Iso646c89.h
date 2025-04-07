/******************************************************************************
* \file      Iso646c89.h
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     iso 646 macros for C89
* \details
*
* \see
*            and other resources
******************************************************************************/

#ifndef ISO646C89_H
#define ISO646C89_H		20250318L

#if !defined(__STDC_VERSION__) || __STDC_VERSION__ < 199409L

#ifndef __cplusplus
#define and    &&
#define and_eq &=
#define bitand &
#define bitor  |
#define compl  ~
#define not    !
#define not_eq !=
#define or     ||
#define or_eq  |=
#define xor    ^
#define xor_eq ^=
#endif

#endif

#endif /* ISO646C89_H */
