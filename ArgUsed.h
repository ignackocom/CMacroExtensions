/******************************************************************************
* \file      ArgUsed.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Arg used macros
* \details
*
* \see		 https://github.com/ignackocom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef ARGUSED_H
#define ARGUSED_H		20250318L


/******************************************************************************
* \brief
*	Ignore unused arg, param or variable compiler warning.
*
* \param
*	variable - Any function parameter or local variable.
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*	int main(int argc, char *argv[])
*   {
*		ARG_USED(argc);
*		ARG_USED(argv);
*		...
*	...
* \endcode
*
*/
#define ARG_USED(variable)		((void)(variable))


#endif /* ARGUSED_H */
