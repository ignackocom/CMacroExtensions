/******************************************************************************
* \file      Volatile.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Volatile macros
* \details
*
* \see		 https://github.com/ignackocom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef VOLATILE_H
#define VOLATILE_H		20250318L


/******************************************************************************
* \brief
*	Reads volatile variable.
*
* \param
*	type - Data type.
* \param
*	var - Variable.
*
* \return
*	Value.
*
*/
#define VOLATILE_READ(type,var)			(*((volatile type *)(&(var))))

/******************************************************************************
* \brief
*	Writes volatile variable.
*
* \param
*	type - Data type.
* \param
*	var - Variable.
* \param
*	val - Value.
*
* \return
*	Nothing (void).
*
*/
#define VOLATILE_WRITE(type,var,val)	(*((volatile type *)(&(var))) = (val))


#endif /* VOLATILE_H */
