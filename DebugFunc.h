/******************************************************************************
* \file      DebugFunc.h
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Debug func macros
* \details
*
* \see       https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef DEBUGFUNC_H
#define DEBUGFUNC_H		20250318L


#if defined(DEBUG) || defined(_DEBUG)

#include <stdio.h>

#define DEBUG_ENTER(funcname)  fprintf(stderr, "Entering %s (%s:%ld)\n",  (funcname), __FILE__, (long)__LINE__)

#define DEBUG_EXIT(funcname)   fprintf(stderr, "Exiting %s (%s:%ld)\n", (funcname), __FILE__, (long)__LINE__)

#else /* defined(DEBUG) || defined(_DEBUG) */

#define DEBUG_ENTER(funcname) 

#define DEBUG_EXIT(funcname) 

#endif /* defined(DEBUG) || defined(_DEBUG) */


/******************************************************************************
* Example of use
*
* ...
* char* strcpy(char* pDest, char* pSrc)
* {
*	DEBUG_ENTER("strcpy");
* 
*	while (*pDest = *pSrc);
* 
*	DEBUG_EXIT("strcpy");
* 
*   return(pDest);
* }
* ...
*
*/


#endif /* DEBUGFUNC_H */
