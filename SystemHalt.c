/******************************************************************************
* \file      SystemHalt.c
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Halt function
* \details
*
* \see		 https://github.com/ignackocom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#include <stdio.h>


#if defined(__clang__)
#pragma clang diagnostic ignored "-Wpre-c11-compat"
#endif /* defined(__clang__) */


#include "Noreturn.h"
#include "SystemHalt.h"


NORETURN void SystemHalt(const char* str)
{
	fprintf(stderr, "\n\n");
	fprintf(stderr, "%s", str);
	fprintf(stderr, "\n\n -- System halted! -- ");

	while (1);
}
