/******************************************************************************
* \file      BitsPerType.h
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Bits per type macros
* \details
*
* \see
*            and other resources
******************************************************************************/

#ifndef BITSPERTYPE_H
#define BITSPERTYPE_H		20250318L


#include <limits.h>


/******************************************************************************
* \brief
*	Calculate bits per basic data type.
*
* \param
*	type - Basic data type (char, short, long, unsigned long, ...).
*
* \return
*	Number of bits per type.
*
* \note
*
* \code
*   ...
*   printf("char      Bits %ld\n", BITS_PER_TYPE(char));
*   printf("short     Bits %ld\n", BITS_PER_TYPE(short));
*   printf("int       Bits %ld\n", BITS_PER_TYPE(int));
*   printf("long      Bits %ld\n", BITS_PER_TYPE(long));
*	...
* \endcode
*
*/
#define BITS_PER_TYPE(type)     ((size_t)(sizeof(type) * CHAR_BIT))


#endif /* BITSPERTYPE_H */
