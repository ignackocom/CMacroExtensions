/******************************************************************************
* \file      BitsPrint.c
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Print bits functions
* \details
*
* \see		 https://github.com/ignackocom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/
#include <limits.h>
#include <stdio.h>

#if defined(__clang__)
#pragma clang diagnostic ignored "-Wold-style-cast"
#endif /* defined(__clang__) */

#include "BitsPrint.h"


void BITS_PRINT_UINT8(UINT8 value)
{
    size_t bits;
    bits = sizeof(value) * CHAR_BIT;
    while (bits--) putchar((value) & (((UINT8)1) << bits) ? '1' : '0');
    return;
}

void BITS_PRINT_UINT16(UINT16 value)
{
    size_t bits;
    bits = sizeof(value) * CHAR_BIT;
    while (bits--) putchar((value) & (((UINT16)1) << bits) ? '1' : '0');
    return;
}

void BITS_PRINT_UINT32(UINT32 value)
{
    size_t bits;
    bits = sizeof(value) * CHAR_BIT;
    while (bits--) putchar((value) & (((UINT32)1) << bits) ? '1' : '0');
    return;
}

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L

void BITS_PRINT_UINT64(UINT64 value)
{
    size_t bits;
    bits = sizeof(value) * CHAR_BIT;
    while (bits--) putchar((value) & (((UINT64)1) << bits) ? '1' : '0');
    return;
}

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */
