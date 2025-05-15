/******************************************************************************
* \file      Swap.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Swap macros
* \details
*
* \see		 https://github.com/ignackocom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef SWAP_H
#define SWAP_H		20250318L


#define SWAP(n1, n2) \
		do { (n1) ^= (n2); (n2) ^= (n1); (n1) ^= (n2); } while (0)


#endif /* SWAP_H */
