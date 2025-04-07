/******************************************************************************
* \file      Unused.h
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Unused macros
* \details
*
* \see       https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef UNUSED_H
#define UNUSED_H		20250318L


#if defined(__GNUC__) && __GNUC__ > 3 && __GNUC_MINOR__ >= 1
#define UNUSED __attribute__((unused))
#elif defined (__clang__)
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif


#endif /* UNUSED_H */
