/******************************************************************************
* \file      ArgUsed.h
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Arg used macros
* \details
*
* \see
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
