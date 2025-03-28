/******************************************************************************
* \file      Bool.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Bool constants, definitions and macros
* \details
*
* \see       
*            and other resources
******************************************************************************/

#ifndef BOOL_H
#define BOOL_H		20250318L


#undef BOOL
#undef Bool
#if !defined(__STDC_VERSION__) || defined(__STDC_VERSION__) && __STDC_VERSION__ < 202311L
#undef bool
#endif

#undef TRUE
#undef True
#if !defined(__STDC_VERSION__) || defined(__STDC_VERSION__) && __STDC_VERSION__ < 202311L
#undef true
#endif

#undef FALSE
#undef False
#if !defined(__STDC_VERSION__) || defined(__STDC_VERSION__) && __STDC_VERSION__ < 202311L
#undef false
#endif



#if !defined(__STDC_VERSION__) || defined(__STDC_VERSION__) && __STDC_VERSION__ < 202311L

/* C18 and lower */

typedef enum { FALSE = 0, TRUE = 1, false = 0, true = 1, False = 0, True = 1 } BOOL, bool, Bool;

#else /* !defined(__STDC_VERSION__) || defined(__STDC_VERSION__) && __STDC_VERSION__ < 202311L */

/* C23 and higher */

typedef enum { FALSE = 0, TRUE = 1, False = 0, True = 1 } BOOL, Bool;

#endif /* !defined(__STDC_VERSION__) || defined(__STDC_VERSION__) && __STDC_VERSION__ < 202311L */



#define TRUE_NAME			"true"

#define FALSE_NAME			"false"



/******************************************************************************
* \brief
*	Get bool from value.
*
* \param
*	value - Any value.
*
* \return
*	True or false.
*
* \note
*
* \code
*   ...
*   printf("GET_BOOL(10) = %d\n", GET_BOOL(10));
*   printf("GET_BOOL(0)  = %d\n", GET_BOOL(0));
*	...
* \endcode
*
*/
#define GET_BOOL(value)       (!(!(value)))



/******************************************************************************
* \brief
*	Bool to string.
*
* \param
*	b - Bool value true or false.
*
* \return
*	String "true" or "false".
*
* \note
*
* \code
*   ...
*   printf("TRUE         = \"%s\"\n", BOOL_TO_STRING(TRUE));
*   printf("FALSE        = \"%s\"\n", BOOL_TO_STRING(FALSE));
*	...
* \endcode
*
*/
#define BOOL_TO_STRING(b)	((b) ? TRUE_NAME : FALSE_NAME)



#endif /* BOOL_H */
