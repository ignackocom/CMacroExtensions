/******************************************************************************
* \file      StringExt.c
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     String extension macros and functions
* \details
*
* \see		 https://github.com/ignackocom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/
#include <string.h>
#include <ctype.h>

#include "Bool.h"
#include "Null.h"
#include "StringExt.h"


bool string_is_terminated(const char* str, size_t len)
{
	return( memchr(str, EOS, len) ? true : false );
}

#if defined(__clang__)
#pragma clang diagnostic ignored "-Wold-style-cast"
#endif /* defined(__clang__) */

#if defined(__clang__)
#pragma clang diagnostic ignored "-Wzero-as-null-pointer-constant"
#endif /* defined(__clang__) */

#if defined(__clang__)
#pragma clang unsafe_buffer_usage begin
#endif /* defined(__clang__) */

void string_upper(char* dst, const char* src)
{
	do {
		*dst++ = (char)toupper((int)*src);
	} while (*src++);

	return;
}

void string_lower(char* dst, const char* src)
{
	do {
		*dst++ = (char)tolower((int)*src);
	} while (*src++);

	return;
}

void string_reverse(char* str)
{
	if (str != NULL && *str != EOS) // Non-null pointer; non-empty string
	{
		char* end = str + strlen(str) - 1;
		while (str < end)
		{
			char tmp = *str;
			*str++ = *end;
			*end-- = tmp;
		}
	}
}

#if defined(__clang__)
#pragma clang unsafe_buffer_usage end
#endif /* defined(__clang__) */
