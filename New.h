/******************************************************************************
* \file      New.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     New and delete macros
* \details
*
* \see		 https://github.com/ignackocom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef NEW_H
#define NEW_H		20250318L


#include <stdlib.h>


#define NEW(size)       malloc(size)

#define DELETE(ptr)     free(ptr)


#endif /* NEW_H */
