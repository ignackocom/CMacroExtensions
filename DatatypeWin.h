/******************************************************************************
* \file      DatatypeWin.h
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


/******************************************************************************
**  win basic data types
*/
#if !defined(__cplusplus)

	#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

		/* since C99 */
		#include <stdint.h>

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

#else /* !defined(__cplusplus) */

	#if __cplusplus > 199711L

        /* since CPP11 */

        #include <cstdint>

        typedef  std::uint8_t				BYTE;

        typedef  std::uint16_t				WORD;

        typedef  std::uint32_t				DWORD;

		typedef  std::uint64_t				QWORD;

    #else

        /* CPP98 */

		typedef  unsigned char			BYTE;

		typedef  unsigned short			WORD;

		typedef  unsigned long			DWORD;

	#endif /* __cplusplus > 199711L */

#endif


/******************************************************************************
**  win data types basic operations get
*/
#define LONIBBLE(byte)			((BYTE)((byte) & 0x0F))

#define HINIBBLE(byte)			((BYTE)(((byte) & 0xF0) >> 4))

#define LOBYTE(word)			((BYTE)((word) & 0x00FF))

#define HIBYTE(word)			((BYTE)(((word) & 0xFF00) >> 8))

#define LOWORD(dword)			((WORD)((dword) & (DWORD)0x0000FFFF))

#define HIWORD(dword)			((WORD)(((dword) & (DWORD)0xFFFF0000) >> 16))

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L

#define LODWORD(qword)			((DWORD)((qword) & (QWORD)0x00000000FFFFFFFF))

#define HIDWORD(qword)			((DWORD)(((qword) & (QWORD)0xFFFFFFFF00000000) >> 32))

#endif /*  defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */


/******************************************************************************
**  win data types basic operations make
*/
#define MAKEBYTE(high,low)		((BYTE)((((BYTE)high) << 4) | (low)))

#define MAKEWORD(high,low)		((WORD)((((WORD)high) << 8 ) | (low)))

#define MAKEDWORD(high,low)		((DWORD)((((DWORD)high) << 16 ) | (low)))

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L

#define MAKEQWORD(high,low)		((QWORD)((((QWORD)high) << 32 ) | (low)))

#endif /*  defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */


#endif /* DATATYPEWIN_H */
