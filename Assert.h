/******************************************************************************
* \file      Assert.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Assert macros
*            
* \details
*
* \see		 https://github.com/ignackocom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef ASSERT_H
#define ASSERT_H		20250318L


#include <stdio.h>
#include <stdlib.h>


#if defined(DEBUG) || defined(_DEBUG)

    #if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

/******************************************************************************
* \brief
*	Assert a condition with a custom error message.
*
* \param
*	condition - The condition.
* \param
*	message - The custom error message.
*
* \return
*	Nothing (void).
*
* \note
*   compatible with C89
*
* \code
*   ... 
*   ASSERT_MESSAGE(2 == i, "custom error message!");
*	...
* \endcode
*
*/
        #define ASSERT_MESSAGE(condition, message) \
            do { \
                if (!(condition)) { \
                    fprintf(stderr, "[ASSERTION FAILED] %s:%ld in %s(), %s, %s\n", \
                            __FILE__, (long)__LINE__, __func__, #condition, (message)); \
                    abort(); \
                } \
            } while(0)

    #else /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */

/******************************************************************************
* \brief
*	Assert a condition with a custom error message.
*
* \param
*	condition - The condition.
* \param
*	message - The custom error message.
*
* \return
*	Nothing (void).
*
* \note
*   compatible with C89
*
* \code
*   ...
*   ASSERT_MESSAGE(2 == i, "custom error message!");
*	...
* \endcode
*
*/
        #define ASSERT_MESSAGE(condition, message) \
            do { \
                if (!(condition)) { \
                    fprintf(stderr, "[ASSERTION FAILED] %s:%ld, %s, %s\n", \
                            __FILE__, (long)__LINE__, #condition, (message)); \
                    abort(); \
                } \
            } while(0)

    #endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */

#else /* defined(DEBUG) || defined(_DEBUG) */

    #define ASSERT_MESSAGE(condition, message)

#endif /* defined(DEBUG) || defined(_DEBUG) */


#endif /* ASSERT_H */
