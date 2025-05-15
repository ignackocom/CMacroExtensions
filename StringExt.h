/******************************************************************************
* \file      StringExt.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     String extension macros and functions
* \details
*
* \see		 https://github.com/ignackocom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef STRINGEXT_H
#define STRINGEXT_H		20250318L


/* end of string */
#define	EOS		                    '\0'


#ifdef __cplusplus
extern "C" {
#endif

	/******************************************************************************
	* \brief
	*	Chech if string is EOS terminated.
	*
	* \param
	*	str - String.
	* \param
	*	len - String length.
	*
	* \return
	*	True if is, false if not.
	*
	* \code
	*   ...
	* \endcode
	*
	*/
	bool string_is_terminated(const char* str, size_t len);

	/******************************************************************************
	* \brief
	*	Converts string to upper case.
	*
	* \param
	*	dst - String destination upper case.
	* \param
	*	src - String source.
	*
	* \code
	*   ...
	* \endcode
	*
	*/
	void string_upper(char* dst, const char* src);

	/******************************************************************************
	* \brief
	*	Converts string to lower case.
	*
	* \param
	*	dst - String destination lower case.
	* \param
	*	src - String source.
	*
	* \code
	*   ...
	* \endcode
	*
	*/
	void string_lower(char* dst, const char* src);

	/******************************************************************************
	* \brief
	*	String reverse.
	*
	* \param
	*	str - String to reverse.
	*
	* \code
	*   ...
	* \endcode
	*
	*/
	void string_reverse(char* str);


#ifdef __cplusplus
}
#endif


#endif /* STRINGEXT_H */
