/******************************************************************************
* \file      Bool.h
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

#undef TRUE
#undef True

#undef FALSE
#undef False


#if !defined(__cplusplus)

	#if !defined(__STDC_VERSION__) || __STDC_VERSION__ < 199901L

		/* C89 */

		typedef enum { FALSE = 0, TRUE = 1, false = 0, true = 1, False = 0, True = 1 } BOOL, bool, Bool;

	#elif defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L && __STDC_VERSION__ < 202311L

		/* C99 - C17 */

		#include <stdbool.h>

		#define BOOL _Bool
		#define Bool _Bool

		#define TRUE true
		#define True true

		#define FALSE false
		#define False false

	#else

		/* C23 and higher */

		typedef bool	BOOL;
		typedef bool	Bool;

		#define FALSE	false
		#define TRUE	true

		#define False	false
		#define True	true

	#endif /* !defined(__STDC_VERSION__) || defined(__STDC_VERSION__) && __STDC_VERSION__ < 202311L */

#else /* !defined(__cplusplus) */

	/* C++ */

	typedef bool	BOOL;
	typedef bool	Bool;

	#define FALSE	false
	#define TRUE	true

	#define False	false
	#define True	true

#endif /* !defined(__cplusplus) */


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
