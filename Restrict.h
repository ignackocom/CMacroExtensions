/******************************************************************************
* \file      Restrict.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Restrict macros
* \details
*
* \see		 https://github.com/ignackocom
*			 https://en.cppreference.com/w/c
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
