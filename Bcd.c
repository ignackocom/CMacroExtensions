/******************************************************************************
* \file      Bcd.c
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Bcd functions
* \details
*
* \see       
*            and other resources
******************************************************************************/
#include "Bcd.h"


#define BIN_IS_VALID(bin)	((bin >= 0 && bin <= 99)?1:0)

#define BCD_IS_VALID(bcd)	(((bcd & 0xF0) <= 0x90 && (bcd & 0x0F) <= 0x09)?1:0)


#if defined(__clang__)
#pragma clang unsafe_buffer_usage begin
#endif /* defined(__clang__) */

int ARRAY_BIN_TO_BCD(unsigned char* pDstBcdArray, const unsigned char* pSrcBinArray, int iLength)
{
    for (int i = 0; i < iLength; i++)
    {
        if (!BIN_IS_VALID(pSrcBinArray[i])) return(-1);
        pDstBcdArray[i] = (unsigned char)BIN_TO_BCD((unsigned char)pSrcBinArray[i]);
    }
    return(0);
}

int ARRAY_BCD_TO_BIN(unsigned char* pDstBinArray, const unsigned char* pSrcBcdArray, int iLength)
{
    for (int i = 0; i < iLength; i++)
    {
        if (!BCD_IS_VALID(pSrcBcdArray[i])) return(-1);
        pDstBinArray[i] = (unsigned char)BCD_TO_BIN((unsigned char)pSrcBcdArray[i]);
    }
    return(0);
}

#if defined(__clang__)
#pragma clang unsafe_buffer_usage end
#endif /* defined(__clang__) */
