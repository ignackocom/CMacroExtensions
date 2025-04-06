/******************************************************************************
* \file      BitsReverse.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Reverse bits functions
* \details
*
* \see       
*            and other resources
******************************************************************************/
#ifndef BITSREVERSE_H
#define BITSREVERSE_H		20250318L

#include "Datatype.h"


#ifdef __cplusplus
extern "C" {
#endif


/******************************************************************************
* \brief
*	Reverse the bits of an 8bit value.
*
* \param
*	value - 8bit value.
*
* \return
*	Value with reversed bits.
*
* \code
*   ...
* \endcode
*
*/
UINT8 BITS_REVERSE_UINT8(UINT8 value);

/******************************************************************************
* \brief
*	Reverse the bits of an 16bit value.
*
* \param
*	value - 16bit value.
*
* \return
*	Value with reversed bits.
*
* \code
*   ...
* \endcode
*
*/
UINT16 BITS_REVERSE_UINT16(UINT16 value);

/******************************************************************************
* \brief
*	Reverse the bits of an 32bit value.
*
* \param
*	value - 32bit value.
*
* \return
*	Value with reversed bits.
*
* \code
*   ...
* \endcode
*
*/
UINT32 BITS_REVERSE_UINT32(UINT32 value);

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

/******************************************************************************
* \brief
*	Reverse the bits of an 64bit value.
*
* \param
*	value - 64bit value.
*
* \return
*	Value with reversed bits.
*
* \code
*   ...
* \endcode
*
*/
UINT64 BITS_REVERSE_UINT64(UINT64 value);

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */


#ifdef __cplusplus
}
#endif


#endif /* BITSREVERSE_H */
