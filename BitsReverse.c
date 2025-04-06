/******************************************************************************
* \file      BitsReverse.c
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Reverse bits functions
* \details
*
* \see       
*            and other resources
******************************************************************************/

#include <limits.h>

#include "BitsReverse.h"


UINT8 BITS_REVERSE_UINT8(UINT8 value)
{
    int bit_count;
    UINT8 reversed;
    
    reversed = 0;

    /* number of bits in the type (e.g., 8 for unsigned char) */
    bit_count = sizeof(value) * CHAR_BIT;

    for (int i = 0; i < bit_count; i++) {
        /* shift the reversed number to the left to make space for the next bit */
        reversed <<= 1;
        /* add the least significant bit of num to the reversed number */
        reversed |= (value & 1);
        /* shift num to the right to process the next bit */
        value >>= 1;
    }

    return(reversed);
}

UINT16 BITS_REVERSE_UINT16(UINT16 value)
{
    int bit_count;
    UINT16 reversed;

    reversed = 0;

    /* number of bits in the type (e.g., 16 for unsigned short) */
    bit_count = sizeof(value) * CHAR_BIT;

    for (int i = 0; i < bit_count; i++) {
        /* shift the reversed number to the left to make space for the next bit */
        reversed <<= 1;
        /* add the least significant bit of num to the reversed number */
        reversed |= (value & 1);
        /* shift num to the right to process the next bit */
        value >>= 1;
    }

    return(reversed);
}

UINT32 BITS_REVERSE_UINT32(UINT32 value)
{
    int bit_count;
    UINT32 reversed;

    reversed = 0UL;

    /* number of bits in the type (e.g., 32 for unsigned long) */
    bit_count = sizeof(value) * CHAR_BIT;

    for (int i = 0; i < bit_count; i++) {
        /* shift the reversed number to the left to make space for the next bit */
        reversed <<= 1;
        /* add the least significant bit of num to the reversed number */
        reversed |= (value & 1L);
        /* shift num to the right to process the next bit */
        value >>= 1;
    }

    return(reversed);
}

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

UINT64 BITS_REVERSE_UINT64(UINT64 value)
{
    int bit_count;
    UINT64 reversed;

    reversed = 0ULL;

    /* number of bits in the type (e.g., 64 for unsigned long long) */
    bit_count = sizeof(value) * CHAR_BIT;

    for (int i = 0; i < bit_count; i++) {
        /* shift the reversed number to the left to make space for the next bit */
        reversed <<= 1;
        /* add the least significant bit of num to the reversed number */
        reversed |= (value & 1LL);
        /* shift num to the right to process the next bit */
        value >>= 1;
    }

    return(reversed);
}

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */
