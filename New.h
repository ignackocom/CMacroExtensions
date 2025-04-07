/******************************************************************************
* \file      New.h
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     New and delete macros
* \details
*
* \see       
*            and other resources
******************************************************************************/
#ifndef NEW_H
#define NEW_H		20250318L


#include <stdlib.h>


#define NEW(size)       malloc(size)

#define DELETE(ptr)     free(ptr)


#endif /* NEW_H */
