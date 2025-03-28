/******************************************************************************
* \file      Null.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Null macros
* \details
*
* \see       https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef NULL_H
#define NULL_H		20250318L


#ifndef NULL
	#ifdef __cplusplus
		#define NULL        (0L)
	#else /* __cplusplus */
		#define NULL        ((void*) 0)
	#endif /* __cplusplus */
#endif


#endif /* NULL_H */
