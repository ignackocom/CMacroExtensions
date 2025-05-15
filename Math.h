/******************************************************************************
* \file      Math.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Math macros
* \details
*
* \see		 https://github.com/ignackocom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/
#ifndef MATH_H
#define MATH_H		20250318L


/******************************************************************************
* \brief
*	Check if the number is odd.
*
* \param
*	n - Number to check.
*
* \return
*	true, false.
*
*/
#define IS_ODD(n)               ( (n) & 1 )

/******************************************************************************
* \brief
*	Check if the number is even.
*
* \param
*	n - Number to check.
*
* \return
*	true, false.
*
*/
#define IS_EVEN(n)              ( !IS_ODD(n) )


/******************************************************************************
* \brief
*	Check if the number is between minimum and maximum.
*
* \param
*	n - Number to check.
* \param
*	min - Minimum.
* \param
*	max - Maximum.
*
* \return
*	true, false.
*
*/
#define IS_BETWEEN(n, min, max)	(((n) >= (min)) && ((n) <= (max)))


/******************************************************************************
* \brief
*	Inserts the value of a number into an interval based on the minimum and maximum.
*
* \param
*	n - Number.
* \param
*	min - Minimum.
* \param
*	max - Maximum.
*
* \return
*	New number value.
*
*/
#define CLIP(n, min, max)		(((n) < (min)) ? (min) : ((n) > (max)) ? (max) : (n))

/******************************************************************************
* \brief
*	Inserts the value of a number into an interval based on the maximum.
*
* \param
*	n - Number.
* \param
*	max - Maximum.
*
* \return
*	New number value.
*
*/
#define UCLIP(n, max)			(((n) > (max)) ? (max) : (n))

/******************************************************************************
* \brief
*	Inserts the value of a number into an interval based on the minimum.
*
* \param
*	n - Number.
* \param
*	min - Minimum.
*
* \return
*	New number value.
*
*/
#define LCLIP(n, min)			(((n) < (min)) ? (min) : (n))


/******************************************************************************
* \brief
*	Return the sign of the number.
*
* \param
*	n - Number.
*
* \return
*	-1, 0, 1.
*
*/
#define SIGN(n)                 ( (n) > 0 ? 1 : ( (n) < 0 ? -1 : 0 ) )


/******************************************************************************
* \brief
*	Return the absolute value of the number.
*
* \param
*	n - Number.
*
* \return
*	Absolute value.
*
*/
#define ABS(n)                  ( (n) > 0 ? (n) : (-(n)) )


/******************************************************************************
* \brief
*	Return the difference of numbers.
*
* \param
*	n1 - Number.
* \param
*	n2 - Number.
*
* \return
*	Difference of numbers.
*
*/
#define DIFF(n1, n2)            ABS((n1)-(n2))


/******************************************************************************
* \brief
*	Return the minimum value of numbers.
*
* \param
*	n1 - Number.
* \param
*	n2 - Number.
*
* \return
*	Minimum value.
*
*/
#define MIN(n1, n2)             ( (n1) < (n2) ? (n1) : (n2) )

/******************************************************************************
* \brief
*	Return the maximum value of numbers.
*
* \param
*	n1 - Number.
* \param
*	n2 - Number.
*
* \return
*	Maximum value.
*
*/
#define MAX(n1, n2)             ( (n1) > (n2) ? (n1) : (n2) )


#endif /* MATH_H */
