/******************************************************************************
* \file      Cast.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Type cast macros
* \details
*
* \see		 https://github.com/ignackocom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef CAST_H
#define CAST_H		20250318L


/******************************************************************************
* \brief
*	Basic data type cast.
*
* \param
*	v - Any value or variable.
*
* \return
*	Value in another data type.
*
* \note
*
* \code
*   ...
*   byte = CAST(word, unsigned char);
*	...
* \endcode
*
*/
#define CAST(v,type)		(type)(v)


/******************************************************************************
* \brief
*	Basic data type pointer cast.
*
* \param
*	v - Any pointer.
*
* \return
*	Pointer in another data type.
*
* \note
*
* \code
*   ...
*   usptr = CAST_PTR(&word, unsigned short);
*	...
* \endcode
*
*/
#define CAST_PTR(v,type)	(type*)(v)


#endif /* CAST_H */
