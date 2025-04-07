/******************************************************************************
* \file      Dll.h
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Dll macros
* \details
*
* \see
*            and other resources
******************************************************************************/

#ifndef DLL_H
#define DLL_H		20250318L


#if defined(_WIN16) || defined(_WIN32) || defined(_WIN64) || \
    defined(__WIN32__) || defined(__TOS_WIN__) || defined(__WINDOWS__) || \
    defined(__CYGWIN__) || defined(__CYGWIN64__) || \
    defined(__MINGW32__) || defined(__MINGW64__) || \
    defined(_WIN32_WCE) || defined(WIN32_PLATFORM_HPC2000) || \
    defined(WIN32_PLATFORM_HPCPRO) || defined(WIN32_PLATFORM_PSPC) || \
    defined(WIN32_PLATFORM_WFSP	)
    #define DLLIMPORT __declspec(dllimport)
    #define DLLEXPORT __declspec(dllexport)
#else
    #define DLLIMPORT
    #define DLLEXPORT
#endif


#endif /* DLL_H */
