/******************************************************************************
* \file      Dec.c
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Dec functions
* \details
*
* \see		 https://github.com/ignackocom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#if defined(__clang__)
#pragma clang diagnostic ignored "-Wold-style-cast"
#endif /* defined(__clang__) */

#include "Dec.h"


#define BIN_IS_VALID(bin)   ( ((bin)>=0 && (bin) <= 9) ? 1 : 0 )

#define DEC_IS_VALID(dec)   ( ((dec)>='0' && (dec)<='9') ? 1 : 0 )


#if defined(__clang__)
#pragma clang unsafe_buffer_usage begin
#endif /* defined(__clang__) */

int ARRAY_BIN_TO_DEC(unsigned char* pDstDecArray, const unsigned char* pSrcBinArray, int iLength)
{
    int i;
    for (i = 0; i < iLength; i++)
    {
        if (!BIN_IS_VALID(pSrcBinArray[i])) return(-1);
        pDstDecArray[i] = (unsigned char)BIN_TO_DEC((unsigned char)pSrcBinArray[i]);
    }
    return(0);
}

int ARRAY_DEC_TO_BIN(unsigned char* pDstBinArray, const unsigned char* pSrcDecArray, int iLength)
{
    int i;
    for (i = 0; i < iLength; i++)
    {
        if (!DEC_IS_VALID(pSrcDecArray[i])) return(-1);
        pDstBinArray[i] = (unsigned char)DEC_TO_BIN((unsigned char)pSrcDecArray[i]);
    }
    return(0);
}

#if defined(__clang__)
#pragma clang unsafe_buffer_usage end
#endif /* defined(__clang__) */
