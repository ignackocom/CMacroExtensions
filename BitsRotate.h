/******************************************************************************
* \file      BitsRotate.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Bits rotate macros
* \details
*
* \see		 https://github.com/ignackocom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/
#ifndef BITSROTATE_H
#define BITSROTATE_H		20250318L


#include <limits.h>


/******************************************************************************
* \brief
*	Rotates the bits of value to the left by bits positions.
*
* \param
*	value - The value to rotate.
* \param
*	bits - The number of bits to rotate.
*
* \return
*	Rotated value.
*
* \note
*
* \code
*   ...
*   byte = ROTATE_LEFT(byte, 2);
*	...
* \endcode
*
*/
#define ROTATE_LEFT(value, bits) \
    (((value) << (bits)) | ((value) >> (sizeof(value) * CHAR_BIT - (bits))))

/******************************************************************************
* \brief
*	Rotates the bits of value to the right by bits positions.
*
* \param
*	value - The value to rotate.
* \param
*	bits - The number of bits to rotate.
*
* \return
*	Rotated value.
*
* \note
*
* \code
*   ...
*   byte = ROTATE_RIGHT(byte, 4);	
*   ...
* \endcode
*
*/
#define ROTATE_RIGHT(value, bits) \
    (((value) >> (bits)) | ((value) << (sizeof(value) * CHAR_BIT - (bits))))


#endif /* BITSROTATE_H */
