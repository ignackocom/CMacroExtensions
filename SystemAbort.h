/******************************************************************************
* \file      SystemAbort.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Abort function
* \details
*
* \see		 https://github.com/ignackocom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef SYSTEMHALT_H
#define SYSTEMHALT_H		20250318L


#ifdef __cplusplus
extern "C" {
#endif


	/******************************************************************************
	* \brief
	*	System abort function with error message.
	*
	* \param
	*	str - String error message.
	*
	* \code
	*   ...
	* \endcode
	*
	*/
	NORETURN void SystemAbort(const char* str);


#ifdef __cplusplus
}
#endif


#endif /* SYSTEMABORT_H */
