/******************************************************************************
* \file      ExternC.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Extern C macros
* \details
*
* \see
*            and other resources
******************************************************************************/

#ifndef EXTERNC_H
#define EXTERNC_H		20250318L


#ifdef __cplusplus
#define EXTERN_C			extern "C"
#else
#define EXTERN_C
#endif


#ifdef __cplusplus
#define EXTERN_C_BEGIN		extern "C" {
#define EXTERN_C_END		}
#else
#define EXTERN_C_BEGIN
#define EXTERN_C_END
#endif


#endif /* EXTERNC_H */
