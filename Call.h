/******************************************************************************
* \file      Call.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Call macros
* \details
*
* \see		 https://github.com/ignackocom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef CALL_H
#define CALL_H		20250318L


#define CALL(a, b)		a b


/******************************************************************************
* Example of use
*
* ...
* CALL(printf, ("%d %d %s\n",1, 2, "abc"));
* ...
*
* results in
*   printf("%d %d %s\n", 1, 2, "abc");
* 
*/


#endif /* CALL_H */
