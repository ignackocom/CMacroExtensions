/******************************************************************************
* \file      SystemHalt.h
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Halt function
* \details
*
* \see
*            and other resources
******************************************************************************/

#ifndef SYSTEMHALT_H
#define SYSTEMHALT_H		20250318L


#ifdef __cplusplus
extern "C" {
#endif


	/******************************************************************************
	* \brief
	*	System halt function with error message.
	*
	* \param
	*	str - String error message.
	*
	* \code
	*   ...
	* \endcode
	*
	*/
	NORETURN void halt(const char* str);


#ifdef __cplusplus
}
#endif


#endif /* SYSTEMHALT_H */
