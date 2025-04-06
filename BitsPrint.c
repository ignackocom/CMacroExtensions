/******************************************************************************
* \file      BitsPrint.c
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Print bits functions
* \details
*
* \see       
*            and other resources
******************************************************************************/
#include <limits.h>
#include <stdio.h>

#include "BitsPrint.h"


void BITS_PRINT_UINT8(UINT8 value)
{
    size_t bits;
    bits = sizeof(value) * CHAR_BIT;
    while (bits--) putchar((value) & (1U << bits) ? '1' : '0');
    return;
}

void BITS_PRINT_UINT16(UINT16 value)
{
    size_t bits;
    bits = sizeof(value) * CHAR_BIT;
    while (bits--) putchar((value) & (1U << bits) ? '1' : '0');
    return;
}

void BITS_PRINT_UINT32(UINT32 value)
{
    size_t bits;
    bits = sizeof(value) * CHAR_BIT;
    while (bits--) putchar((value) & (1UL << bits) ? '1' : '0');
    return;
}

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

void BITS_PRINT_UINT64(UINT64 value)
{
    size_t bits;
    bits = sizeof(value) * CHAR_BIT;
    while (bits--) putchar((value) & (1ULL << bits) ? '1' : '0');
    return;
}

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */
