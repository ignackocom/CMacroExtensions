/******************************************************************************
* \file      Stringify.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Stringify macros
* \details
*
* \see       https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef STRINGIFY_H
#define STRINGIFY_H		20250318L


#define STRINGIFY__(x)    #x

#define STRINGIFY(x)      STRINGIFY__(x)


#endif /* STRINGIFY_H */
