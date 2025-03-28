/******************************************************************************
* \file      Swap.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Swap macros
* \details
*
* \see       https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef SWAP_H
#define SWAP_H		20250318L


#define SWAP(n1, n2) \
		do { (n1) ^= (n2); (n2) ^= (n1); (n1) ^= (n2); } while (0)


#endif /* SWAP_H */
