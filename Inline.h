/******************************************************************************
* \file      Inline.h
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Inline macros
* \details
*
* \see       https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef INLINE_H
#define INLINE_H		20250318L


/* INLINE definition to make compatible C89 and C99 an higher */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L 
#define INLINE      inline
#else
#define INLINE
#endif


#endif /* INLINE_H */
