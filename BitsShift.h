/******************************************************************************
* \file      BitsShift.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Bits shift macros
* \details
*
* \see		 https://github.com/ignackocom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/
#ifndef BITSSHIFT_H
#define BITSSHIFT_H		20250318L


/******************************************************************************
* \brief
*	Shifts the bits of value to the left by bits positions.
*
* \param
*	value - The value to shift.
* \param
*	bits - The number of bits to shift.
*
* \return
*	Shifted value.
*
* \note
*
* \code
*   ...
*   byte = SHIFT_LEFT(byte, 2);
*	...
* \endcode
*
*/
#define SHIFT_LEFT(value, bits)    ((value) << (bits))

/******************************************************************************
* \brief
*	Shifts the bits of value to the right by bits positions.
*
* \param
*	value - The value to shift.
* \param
*	bits - The number of bits to shift.
*
* \return
*	Shifted value.
*
* \note
*
* \code
*   ...
*   byte = SHIFT_RIGHT(byte, 2);
*	...
* \endcode
*
*/
#define SHIFT_RIGHT(value, bits)   ((value) >> (bits))


#endif /* BITSSHIFT_H */
