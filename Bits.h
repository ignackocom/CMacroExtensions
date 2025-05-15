/******************************************************************************
* \file      BitsU.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Bits macros
* \details
*
* \see		 https://github.com/ignackocom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef BITS_H
#define BITS_H		20250318L


#include <limits.h>


/******************************************************************************
* \brief
*	Creates a mask with the specified bit (0-based index) set to 1.
*
* \param
*	type - The basic data type.
* \param
*	bit - The bit number.
*
* \return
*	Mask value.
*
* \note
*
* \code
*   ...
*   byte = BIT(short,2);
*	...
* \endcode
*
*/
#define BIT(type, bit)		(((type)1) << (bit))

/******************************************************************************
* \brief
*	Gets the specified bit (0-based index) in value.
*
* \param
*	type - The basic data type.
* \param
*	value - The value.
* \param
*	bit - The bit number.
*
* \return
*	Bit.
*
* \note
*
* \code
*   ...
*   byte = BIT_GET(unsigned char,byte,2);
*	...
* \endcode
*
*/
#define BIT_GET(type, value, bit)		(((value) >> (bit)) & ((type)1))

/******************************************************************************
* \brief
*	Sets the specified bit (0-based index) in value to 1.
*
* \param
*	type - The basic data type.
* \param
*	value - The value.
* \param
*	bit - The bit number.
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   BIT_SET(unsigned char, byte, 2);
*	...
* \endcode
*
*/
#define BIT_SET(type, value, bit)	((value) |= (((type)1) << (bit)))

/******************************************************************************
* \brief
*	Clears the specified bit (0-based index) in value, setting it to 0.
*
* \param
*	type - The basic data type.
* \param
*	value - The value.
* \param
*	bit - The bit number.
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   BIT_CLEAR(unsigned char,byte,2);
*	...
* \endcode
*
*/
#define BIT_CLEAR(type, value, bit)		((value) &= ~(((type)1) << (bit)))

/******************************************************************************
* \brief
*	Toggles the specified bit (0-based index) in value, 
*   switching it from 1 to 0 or from 0 to 1.
*
* \param
*	type - The basic data type.
* \param
*	value - The value.
* \param
*	bit - The bit number.
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   BIT_TOGGLE(unsigned char,byte,2);
*	...
* \endcode
*
*/
#define BIT_TOGGLE(type, value, bit)	((value) ^= (((type)1) << (bit)))

/******************************************************************************
* \brief
*	Checks if the specified bit (0-based index) in value is set (1). 
*
* \param
*	type - The basic data type.
* \param
*	value - The value.
* \param
*	bit - The bit number.
*
* \return
*	Returns a non-zero value if the bit is set, and 0 otherwise.
*
* \note
*
* \code
*   ...
*   b = BIT_IS_SET(unsigned char,value,2);
*	...
* \endcode
*
*/
#define BIT_IS_SET(type, value, bit)		(((value) & (((type)1) << (bit))) != 0)

/******************************************************************************
* \brief
*	Checks if the specified bit (0-based index) in value is set (0).
*
* \param
*	type - The basic data type.
* \param
*	value - The value.
* \param
*	bit - The bit number.
*
* \return
*	Returns a non-zero value if the bit is set, and 0 otherwise.
*
* \note
*
* \code
*   ...
*   b = BIT_IS_CLEARED(unsigned char,value,2);
*	...
* \endcode
*
*/
#define BIT_IS_CLEARED(type, value, bit)		(((value) & (((type)1) << (bit))) == 0)



/******************************************************************************
*  Bits api
*/

/******************************************************************************
* \brief
*	Sets multiple bits in value based on the provided mask.
*
* \param
*	value - The value.
* \param
*	mask - The provided mask.
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   BITS_SET(value,3);
*	...
* \endcode
*
*/
#define BITS_SET(value, mask)			((value) |= (mask))

/******************************************************************************
* \brief
*	Clears multiple bits in value based on the provided mask.
*
* \param
*	value - The value.
* \param
*	mask - The provided mask.
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   BITS_CLEAR(value,3);
*	...
* \endcode
*
*/
#define BITS_CLEAR(value, mask)			((value) &= ~(mask))

/******************************************************************************
* \brief
*	Toggles multiple bits in value based on the provided mask.
*
* \param
*	value - The value.
* \param
*	mask - The provided mask.
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   BITS_TOGGLE(value,3);
*	...
* \endcode
*
*/
#define BITS_TOGGLE(value, mask)		((value) ^= (mask))



/******************************************************************************
**  Lsb api
*/

#define LSB(type,value)		            (((value) & ((type)1))?1:0)

#define LSB_SET(type,value)             ((value) |= ((type)1))

#define LSB_CLEAR(type,value)           ((value) &= ~((type)1))

#define LSB_TOGGLE(type,value)          ((value) ^= ((type)1))



/******************************************************************************
**  Msb api
*/
#define MSB(type,value)                 (((value) & (((type)1) << (sizeof(value) * CHAR_BIT - 1)))?1:0)

#define MSB_SET(type,value)             ((value) |= (((type)1) << (sizeof(value) * CHAR_BIT - 1)))

#define MSB_CLEAR(type,value)           ((value) &= ~(((type)1) << (sizeof(value) * CHAR_BIT - 1)))

#define MSB_TOGGLE(type,value)          ((value) ^= (((type)1) << (sizeof(value) * CHAR_BIT - 1)))



#endif /* BITS_H */
