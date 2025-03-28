/******************************************************************************
* \file      DatatypeCpu.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Complete cpu data type definitions
* \details
*
* \see       https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef DATATYPECPU_H
#define DATATYPECPU_H		20250318L


#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L 
/* since C99 */
#include <stdint.h> 
#endif /*  defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */


/******************************************************************************
**  cpu basic data types
*/
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L 

/* since C99 */

typedef  uint8_t				WORD8;

typedef  uint16_t				WORD16;

typedef  uint32_t				WORD32;

typedef  uint64_t				WORD64;

#else /*  defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */

/* C95 and less */

typedef  unsigned char			WORD8;

typedef  unsigned short			WORD16;

typedef  unsigned long			WORD32;

#endif /*  defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */


#endif /* DATATYPECPU_H */
