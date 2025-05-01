/******************************************************************************
* \file      SystemAbort.c
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Abort function
* \details
*
* \see
*            and other resources
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#if defined(__clang__)
#pragma clang diagnostic ignored "-Wpre-c11-compat"
#endif /* defined(__clang__) */

#include "Noreturn.h"
#include "SystemAbort.h"


NORETURN void SystemAbort(const char* str)
{
	fprintf(stderr, "\n\n");
	fprintf(stderr, "%s", str);
	fprintf(stderr, "\n\n -- System aborted! -- ");

	abort();
}
