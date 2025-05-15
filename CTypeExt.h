/******************************************************************************
* \file      CTypeExt.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Contains ctype.h/c extension functions
* \details
*
* \see		 https://github.com/ignackocom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef CTYPEEXT_H
#define CTYPEEXT_H		20250318L


#ifdef __cplusplus
extern "C" {
#endif


	/******************************************************************************
	* \brief
	*	Chech if value is ascii character.
	*
	* \param
	*	c - Character value.
	*
	* \return
	*	True if is ascii, false if not.
	*
	* \code
	*   ...
	*   printf("isascii('A')   = %d\n", isascii('A'));
	*	...
	* \endcode
	*
	*/
	int isascii(int c);


	/******************************************************************************
	* \brief
	*	Chech if value is binary digit character.
	*
	* \param
	*	c - Character value.
	*
	* \return
	*	True if is binary digit, false if not.
	*
	* \code
	*   ...
	*   printf("isbdigit('1')   = %d\n", isbdigit('1'));
	*	...
	* \endcode
	*
	*/
	int isbdigit(int c);

	/******************************************************************************
	* \brief
	*	Chech if value is octal digit character.
	*
	* \param
	*	c - Character value.
	*
	* \return
	*	True if is octal digit, false if not.
	*
	* \code
	*   ...
	*   printf("isodigit('7')   = %d\n", isodigit('7'));
	*	...
	* \endcode
	*
	*/
	int isodigit(int c);


#if !defined(__STDC_VERSION__) || defined(__STDC_VERSION__) && __STDC_VERSION__ < 199901L 

	/******************************************************************************
	* \brief
	*	Chech if value is blank character.
	*
	* \param
	*	c - Character value.
	*
	* \return
	*	True if is blank, false if not.
	*
	* \code
	*   ...
	*   printf("isblank(' ')   = %d\n", isblank(' '));
	*	...
	* \endcode
	*
	*/
	int isblank(int c);

#endif /* !defined(__STDC_VERSION__) || defined(__STDC_VERSION__) && __STDC_VERSION__ < 199901L  */


	/******************************************************************************
	* \brief
	*	Value to ascii.
	*
	* \param
	*	c - value.
	*
	* \return
	*	Ascii character.
	*
	* \code
	*   ...
	*   printf("toascii(0x130) = '%c'\n", toascii(0x130));
	*	...
	* \endcode
	*
	*/
	int toascii(int c);


#ifdef __cplusplus
}
#endif


#endif /* CTYPEEXT_H */
