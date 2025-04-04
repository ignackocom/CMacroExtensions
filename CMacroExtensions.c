/******************************************************************************
* \file      CExtencions.c
* \version   2025.03.18.01
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
#pragma clang diagnostic ignored "-Wc23-compat"
#endif /* defined(__clang__) */

#include "CMacroExtensions.h"


long CMACROEXTENSIONS_VERSION(void)
{
    return (CMACROEXTENSIONS_H);
}
