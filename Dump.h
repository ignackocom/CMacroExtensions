/******************************************************************************
* \file      Dump.h
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Dump macros
* \details
*
* \see
*            and other resources
******************************************************************************/

#ifndef PRINTVAR_H
#define PRINTVAR_H		20250318L


#define PRINT_VARIABLE(var) 		printf("%s = %d\n",#var,(var))
#define PRINT_VARIABLE_U(var) 		printf("%s = %u\n",#var,(var))

#define PRINT_VARIABLE_L(var)		printf("%s = %ld\n",#var,(var))
#define PRINT_VARIABLE_UL(var)		printf("%s = %lu\n",#var,(var))

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L

#define PRINT_VARIABLE_LL(var)		printf("%s = %lld\n",#var,(var))
#define PRINT_VARIABLE_ULL(var)		printf("%s = %llu\n",#var,(var))

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */

#define PRINT_VARIABLE_SIZE_T(var)	printf("%s = %zu\n",#var,(var))


#define PRINT_POINTER(var)			printf("%s = %p\n",#var,(var))


#define PRINT_STRING(var)			printf("%s = %s\n",#var,(var))


#endif /* PRINTVAR_H */
