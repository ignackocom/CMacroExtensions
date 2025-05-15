/******************************************************************************
* \file      DatatypeCpu.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Complete cpu data type definitions
* \details
*
* \see		 https://github.com/ignackocom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef DATATYPECPU_H
#define DATATYPECPU_H		20250318L


/******************************************************************************
**  cpu basic data types
*/
#if !defined(__cplusplus)

	#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

		/* since C99 */
		#include <stdint.h>

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

#else /* !defined(__cplusplus) */

	#if __cplusplus > 199711L

        /* since CPP11 */

        #include <cstdint>

        typedef  std::uint8_t				WORD8;

        typedef  std::uint16_t				WORD16;

        typedef  std::uint32_t				WORD32;

		typedef  std::uint64_t				WORD64;

    #else

        /* CPP98 */

		typedef  unsigned char			WORD8;

		typedef  unsigned short			WORD16;

		typedef  unsigned long			WORD32;

	#endif /* __cplusplus > 199711L */

#endif /* !defined(__cplusplus) */


#endif /* DATATYPECPU_H */
