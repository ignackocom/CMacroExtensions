/******************************************************************************
* \file      SystemHalt.c
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Halt function
* \details
*
* \see
*            and other resources
******************************************************************************/

#include <stdio.h>


#if defined(__clang__)
#pragma clang diagnostic ignored "-Wpre-c11-compat"
#endif /* defined(__clang__) */


#include "Noreturn.h"
#include "SystemHalt.h"


NORETURN void halt(const char* str)
{
	fprintf(stderr, "\n\n");
	fprintf(stderr, "%s", str);
	fprintf(stderr, "\n\n -- System halted! -- ");

	while (1);
}
