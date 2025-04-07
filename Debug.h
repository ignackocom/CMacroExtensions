/******************************************************************************
* \file      Debug.h
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Debug macros
* \details
*
* \see       https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef DEBUG_H
#define DEBUG_H		20250318L


#if defined(DEBUG) || defined(_DEBUG)

    #if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

        /******************************************************************************
        * \brief
        *	Print debug message with file, line, and function info.
        *
        * \param
        *	message - The message to print.
        *
        * \return
        *	Nothing (void).
        *
        */
        #define DEBUG_MESSAGE(message) \
            fprintf(stderr, "[DEBUG] %s:%ld in %s(), %s\n", __FILE__, (long)__LINE__, __func__, (message))

    #else /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */

        /******************************************************************************
        * \brief
        *	Print debug message with file, and line.
        *
        * \param
        *	message - The message to print.
        *
        * \return
        *	Nothing (void).
        *
        */
        #define DEBUG_MESSAGE(message) \
            fprintf(stderr, "[DEBUG] %s:%ld, %s\n", __FILE__, (long)__LINE__, (message))

    #endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */


#else

    #define DEBUG_MESSAGE(message)

#endif


#endif /* DEBUG_H */
