/******************************************************************************
* \file      Func.h
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Func macros
* \details
*
* \see       https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef FUNC_H
#define FUNC_H		20250318L


/* function name definition */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus)
#define func_(n)			((void)0)
#else
#define func_(n)			const char __func__[] = (n)
#endif


/* function name macro */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) 
#define FUNC_NAME(n)		__func__
#else
#define FUNC_NAME(n)		(n)
#endif


/******************************************************************************
* Example of use
*
* ...
* int main(void)
* {
*	func__("main");
*	printf("%s\n", __func__);
* }
* ...
* or
* ...
* int main(void)
* {
*	printf("%s\n", FUNC_NAME("main"));
* }
* ...
*
*/


#endif /* FUNC_H */
