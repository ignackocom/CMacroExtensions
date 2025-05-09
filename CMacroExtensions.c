/******************************************************************************
* \file      CExtencions.c
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     C Macro Extensions,
*            a library collection of commonly used macros in the C language.
*            C89, C99 and >C99 compatible.
*
* \see
*            and other resources
******************************************************************************/


#if defined(__clang__)
#pragma clang diagnostic ignored "-Wpre-c11-compat"
#endif /* defined(__clang__) */


#include "CMacroExtensions.h"


long CMACROEXTENSIONS_VERSION(void)
{
    return (CMACROEXTENSIONS_H);
}
