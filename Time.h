/******************************************************************************
* @file      Time.h
* \version   2025.03.18.01
* @author    Peter Potrok
* @copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* @brief     Time macros
* @details
*
* @see       
*            and other resources
*****************************************************************************/
#ifndef TIME_H
#define TIME_H		20250318L


/******************************************************************************
* \brief
*	Get hour number from datetime string.
*
* \param
*	datetime - Datetime string.
* \param
*	pos - Position in string.
*
* \return
*	Hour number.
*
* \note
*
* \code
*   ...
*   printf("__HOUR__   = %d\n", HOUR(__TIME__, 0));
*	...
* \endcode
*
*/
#define HOUR(datetime,pos)		( (((datetime)[(pos)] - '0') * 10) + ((datetime)[(pos)+1] - '0') )

/******************************************************************************
* \brief
*	Get minute number from datetime string.
*
* \param
*	datetime - Datetime string.
* \param
*	pos - Position in string.
*
* \return
*	Minute number.
*
* \note
*
* \code
*   ...
*   printf("__MINUTE__ = %d\n", MINUTE(__TIME__, 3));
*	...
* \endcode
*
*/
#define MINUTE(datetime,pos)	( (((datetime)[(pos)] - '0') * 10) + ((datetime)[(pos)+1] - '0') )

/******************************************************************************
* \brief
*	Get second number from datetime string.
*
* \param
*	datetime - Datetime string.
* \param
*	pos - Position in string.
*
* \return
*	Second number.
*
* \note
*
* \code
*   ...
*   printf("__SECOND__ = %d\n", SECOND(__TIME__, 6));
*	...
* \endcode
*
*/
#define SECOND(datetime,pos)	( (((datetime)[(pos)] - '0') * 10) + ((datetime)[(pos)+1] - '0') )


#endif /* TIME_H */
