/******************************************************************************
* \file      Date.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Date macros
* \details
*
* \see       
*            and other resources
******************************************************************************/
#ifndef DATE_H
#define DATE_H		20250318L


/* months */
#define                 JANUARY     1
#define                 FEBRUARY    2
#define                 MARCH       3
#define                 APRIL       4
#define                 MAY         5
#define                 JUNE        6
#define                 JULY        7
#define                 AUGUST      8
#define                 SEPTEMBER   9
#define                 OCTOBER     10
#define                 NOVEMBER    11
#define                 DECEMBER    12


/* days of week */
#define                 MONDAY      1
#define                 TUESDAY     2
#define                 WEDNESDAY   3
#define                 THURSDAY    4
#define                 FRIDAY      5
#define                 SATURDAY    6
#define                 SUNDAY      7


/******************************************************************************
* \brief
*	Get year number from datetime string.
*
* \param
*	datetime - Datetime string.
* \param
*	pos - Position in string.
*
* \return
*	Year number.
*
* \note
*
* \code
*   ...
*   printf("year  %d\n", YEAR(__DATE__, 7));
*	...
* \endcode
*
*/
#define YEAR(datetime,pos)  ( (((datetime)[(pos)] - '0') * 1000) + \
                              (((datetime)[(pos)+1] - '0') * 100) + \
                              (((datetime)[(pos)+2] - '0') * 10) + \
                               ((datetime)[(pos)+3] - '0') )


/******************************************************************************
* \brief
*	Get month number from datetime string.
*
* \param
*	datetime - Datetime string.
* \param
*	pos - Position in string.
*
* \return
*	Month number.
*
* \note
*
* \code
*   ...
*   printf("month %d\n", MONTH(__DATE__, 0));
*	...
* \endcode
*
*/
#define MONTH(datetime,pos) ( ((datetime)[(pos)] == 'J' && (datetime)[(pos)+1] == 'a') ? 1 : \
                              ((datetime)[(pos)] == 'F') ? 2 : \
                              ((datetime)[(pos)] == 'M' && (datetime)[(pos)+2] == 'r') ? 3 : \
                              ((datetime)[(pos)] == 'A' && (datetime)[(pos)+1] == 'p') ? 4 : \
                              ((datetime)[(pos)] == 'J' && (datetime)[(pos)+2] == 'n') ? 6 : \
                              ((datetime)[(pos)] == 'J' && (datetime)[(pos)+2] == 'l') ? 7 : \
                              ((datetime)[(pos)] == 'M' && (datetime)[(pos)+2] == 'y') ? 5 : \
                              ((datetime)[(pos)] == 'A' && (datetime)[(pos)+1] == 'u') ? 8 : \
                              ((datetime)[(pos)] == 'S') ? 9 : \
                              ((datetime)[(pos)] == 'O') ? 10 : \
                              ((datetime)[(pos)] == 'N') ? 11 : 12 )


/******************************************************************************
* \brief
*	Get day number from datetime string.
*
* \param
*	datetime - Datetime string.
* \param
*	pos - Position in string.
*
* \return
*	Day number.
*
* \note
*
* \code
*   ...
*   printf("day   %d\n", DAY(__DATE__, 4));
*	...
* \endcode
*
*/
#define DAY(datetime,pos)   ( ((datetime)[(pos)] != ' ') ? \
                                (((datetime)[(pos)]-'0')*10) + ((datetime)[(pos)+1]-'0') : \
                                 ((datetime)[(pos)+1]-'0') )


#endif /* DATE_H */
