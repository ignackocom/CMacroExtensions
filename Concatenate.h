/******************************************************************************
* \file      Concatenate.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Concatenate macros
* \details
*
* \see		 https://github.com/ignackocom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef CONCATENATE_H
#define CONCATENATE_H		20250318L


#define CONCATENATE_(t1, t2)			t1##t2

/******************************************************************************
* \brief
*	Concatenate tokens.
*
* \param
*	t1 - Token.
* \param
*	t2 - Token.
*
* \return
*	Pasted tokens.
*
* \note
*
* \code
*   ...
*   CONCAT(my, Var) = 42;
*	...
* \endcode
*
*/
#define CONCATENATE(t1, t2)			CONCATENATE_(t1, t2)


#endif /* CONCATENATE_H */
