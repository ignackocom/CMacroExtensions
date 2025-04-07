/******************************************************************************
* \file      Restrict.h
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Restrict macros
* \details
*
* \see       https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef RESTRICT_H
#define RESTRICT_H		20250318L


/* RESTRICT definition to make compatible C89 and C99 an higher */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L 
#define RESTRICT		restrict
#else
#define RESTRICT
#endif


#endif /* RESTRICT_H */
