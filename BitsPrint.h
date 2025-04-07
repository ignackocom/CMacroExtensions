/******************************************************************************
* \file      BitsPrint.h
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Print bits functions
* \details
*
* \see       
*            and other resources
******************************************************************************/
#ifndef BITSPRINT_H
#define BITSPRINT_H		20250318L

#include "Datatype.h"


#ifdef __cplusplus
extern "C" {
#endif


    /******************************************************************************
    * \brief
    *	Print bits for 8bit values.
    *
    * \param
    *	value - 8bit value.
    *
    * \note
    *   none
    * 
    * \code
    *   ...
    * \endcode
    *
    */
    void BITS_PRINT_UINT8(UINT8 value);

    /******************************************************************************
    * \brief
    *	Print bits for 16bit values.
    *
    * \param
    *	value - 16bit value.
    *
    * \note
    *   none
    *
    * \code
    *   ...
    * \endcode
    *
    */
    void BITS_PRINT_UINT16(UINT16 value);

    /******************************************************************************
    * \brief
    *	Print bits for 32bit values.
    *
    * \param
    *	value - 32bit value.
    *
    * \note
    *   none
    *
    * \code
    *   ...
    * \endcode
    *
    */
    void BITS_PRINT_UINT32(UINT32 value);

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L

    /******************************************************************************
    * \brief
    *	Print bits for 64bit values.
    *
    * \param
    *	value - 64bit value.
    *
    * \note
    *   none
    *
    * \code
    *   ...
    * \endcode
    *
    */
    void BITS_PRINT_UINT64(UINT64 value);

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */


#ifdef __cplusplus
}
#endif


#endif /* BITSPRINT_H */
