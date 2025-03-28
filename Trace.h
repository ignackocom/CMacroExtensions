/******************************************************************************
* \file      Trace.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Trace macros
* \details
*
* \see       https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef TRACE_H
#define TRACE_H		20250318L


#if defined(DEBUG) || defined(_DEBUG)


    #if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

        /******************************************************************************
        * \brief
        *	Print trace message with file, line, and function info.
        *
        * \param
        *	message - The message to print.
        *
        * \return
        *	Nothing (void).
        *
        */
        #define TRACE_MESSAGE(message) \
            fprintf(stderr, "[TRACE] %s:%ld in %s(), %s\n", __FILE__, (long)__LINE__, __func__, (message))

    #else /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */

        /******************************************************************************
        * \brief
        *	Print trace message with file and line.
        *
        * \param
        *	message - The message to print.
        *
        * \return
        *	Nothing (void).
        *
        */
        #define TRACE_MESSAGE(message) \
            fprintf(stderr, "[TRACE] %s:%ld, %s\n", __FILE__, (long)__LINE__, (message))

    #endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */


#else

    #define TRACE_MESSAGE(message)

#endif


#endif /* TRACE_H */
