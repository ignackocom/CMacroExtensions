/******************************************************************************
* \file      Hex.h
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Hex functions
* \details
*
* \see
*            and other resources
******************************************************************************/

#if defined(__clang__)
#pragma clang diagnostic ignored "-Wold-style-cast"
#endif /* defined(__clang__) */

#include "Hex.h"


#define BIN_IS_VALID(bin)   ( ((bin)>=0 && (bin) <= 0xF) ? 1 : 0 )

#define HEX_IS_VALID(dec)   ( ((dec)>='0' && (dec)<='9') ? 1 : \
							  ((dec)>='A' && (dec)<='F') ? 1 : \
	                          ((dec)>='a' && (dec)<='f') ? 1 : 0)


#if defined(__clang__)
#pragma clang unsafe_buffer_usage begin
#endif /* defined(__clang__) */

int ARRAY_BIN_TO_HEX(unsigned char* pDstHexArray, const unsigned char* pSrcBinArray, int iLength)
{
    int i;
    for (i = 0; i < iLength; i++)
    {
        if (!BIN_IS_VALID(pSrcBinArray[i])) return(-1);
        pDstHexArray[i] = (unsigned char)BIN_TO_HEX((unsigned char)pSrcBinArray[i]);
    }
    return(0);
}

int ARRAY_HEX_TO_BIN(unsigned char* pDstBinArray, const unsigned char* pSrcHexArray, int iLength)
{
    int i;
    for (i = 0; i < iLength; i++)
    {
        if (!HEX_IS_VALID(pSrcHexArray[i])) return(-1);
        pDstBinArray[i] = (unsigned char)HEX_TO_BIN((unsigned char)pSrcHexArray[i]);
    }
    return(0);
}

#if defined(__clang__)
#pragma clang unsafe_buffer_usage end
#endif /* defined(__clang__) */
