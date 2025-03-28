/******************************************************************************
* \file      DatatypeWin.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Windows data type definitions
* \details
*
* \see       https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef DATATYPEWIN_H
#define DATATYPEWIN_H		20250318L


#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L 
/* since C99 */
#include <stdint.h> 
#endif /*  defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */


/******************************************************************************
**  win basic data types
*/
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L 

/* since C99 */

typedef  uint8_t				BYTE;

typedef  uint16_t				WORD;

typedef  uint32_t				DWORD;

typedef  uint64_t				QWORD;

#else /*  defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */

/* C95 and less */

typedef  unsigned char			BYTE;

typedef  unsigned short			WORD;

typedef  unsigned long			DWORD;

#endif /*  defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */


/******************************************************************************
**  win data types basic operations get
*/
#define LONIBBLE(byte)			((byte) & 0x0F)

#define HINIBBLE(byte)			(((byte) & 0xF0) >> 4)

#define LOBYTE(word)			((word) & 0x00FF)

#define HIBYTE(word)			(((word) & 0xFF00) >> 8)

#define LOWORD(dword)			((dword) & 0x0000FFFFUL)

#define HIWORD(dword)			(((dword) & 0xFFFF0000UL) >> 16)

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L 

#define LODWORD(qword)			((DWORD)((qword) & 0x00000000FFFFFFFFULL))

#define HIDWORD(qword)			((DWORD)(((qword) & 0xFFFFFFFF00000000ULL) >> 32))

#endif /*  defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */


/******************************************************************************
**  win data types basic operations make
*/
#define MAKEBYTE(high,low)		(((high) << 4) | (low))

#define MAKEWORD(high,low)		(((high) << 8 ) | (low))

#define MAKEDWORD(high,low)		(((high) << 16 ) | (low))

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L 

#define MAKEQWORD(high,low)		(((high) << 32 ) | (low))

#endif /*  defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */


#endif /* DATATYPEWIN_H */
