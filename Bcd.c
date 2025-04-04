/******************************************************************************
* \file      Bcd.c
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


#if defined(__clang__)
#pragma clang unsafe_buffer_usage begin
#endif /* defined(__clang__) */

int ARRAY_BIN_TO_BCD(unsigned char* pBcdArray, const unsigned char* pBinArray, int iLength)
{
    for (int i = 0; i < iLength; i++)
    {
        if (!BIN_IS_VALID(pBinArray[i])) return(-1);
        pBcdArray[i] = (unsigned char)BIN_TO_BCD((unsigned char)pBinArray[i]);
    }
    return(0);
}

int ARRAY_BCD_TO_BIN(unsigned char* pBinArray, const unsigned char* pBcdArray, int iLength)
{
    for (int i = 0; i < iLength; i++)
    {
        if (!BCD_IS_VALID(pBcdArray[i])) return(-1);
        pBinArray[i] = (unsigned char)BCD_TO_BIN((unsigned char)pBcdArray[i]);
    }
    return(0);
}

#if defined(__clang__)
#pragma clang unsafe_buffer_usage end
#endif /* defined(__clang__) */
