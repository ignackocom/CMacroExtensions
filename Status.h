/******************************************************************************
* \file      Status.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Status definitions
* \details
*
* \see		 https://github.com/ignackocom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef STATUS_H
#define STATUS_H		20250318L


/* OK status macro */
#define OK          0


/* NOT OK status macro */
#define NOT_OK      1


/* WARNING status macro, positive number >0 */
#define WARNING(sc)	(sc)


/* ERROR status macro, negative number <0 */
#define ERROR(sc)	(-(sc))


#endif /* STATUS_H */
