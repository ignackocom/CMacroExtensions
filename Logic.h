/******************************************************************************
* \file      Logic.h
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Logic macros
* \details
*
* \see
*            and other resources
******************************************************************************/

#ifndef LOGIC_H
#define LOGIC_H		20250318L


/* Bitwise operations defined as macros */


/* Bitwise NOT */
#define BITWISE_NOT(x)		( ~(x))

/* Bitwise AND */
#define BITWISE_AND(x, y)	(  (x) & (y))

/* Bitwise NAND */
#define BITWISE_NAND(x, y)	(~((x) & (y)))

/* Bitwise OR */
#define BITWISE_OR(x, y)	(  (x) | (y))

/* Bitwise NOR */
#define BITWISE_NOR(x, y)	(~((x) | (y)))

/* Bitwise XOR */
#define BITWISE_XOR(x, y)	(  (x) ^ (y))

/* Bitwise XNOR */
#define BITWISE_XNOR(x, y)	(~((x) ^ (y)))


#endif /* LOGIC_H */
