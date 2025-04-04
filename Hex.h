/******************************************************************************
* \file      Hex.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Hex macros and functions
* \details
*
* \see       
*            and other resources
******************************************************************************/
#ifndef HEX_H
#define HEX_H		20250318L


/******************************************************************************
* \brief
*	Binary number to HEX conversion.
*
* \param
*	bin - binary value (0 - F).
*
* \return
*	HEX value.
*
* \note
*
* \code
*   ...
*	printf("BIN_TO_HEX(1)  = '%c'\n", BIN_TO_HEX(1));
*	...
* \endcode
*
*/
#define BIN_TO_HEX(bin)	\
            ( ((bin)>=0xA && (bin)<=0xF) ? ((bin)-10)+'A' : \
                                           (bin)+'0' )


/******************************************************************************
* \brief
*	HEX number to binary conversion.
*
* \param
*	hex - hex value ('0' - 'F').
*
* \return
*	Binary value.
*
* \note
*
* \code
*   ...
*	printf("HEX_TO_BIN('A') = %d\n", HEX_TO_BIN('A'));
*	...
* \endcode
*
*/
#define HEX_TO_BIN(hex) \
            ( ((hex)>='A' && (hex)<='F') ? (hex)-'A'+10 : \
              ((hex)>='a' && (hex)<='f') ? (hex)-'a'+10 : \
                                           (hex)-'0' )


#ifdef __cplusplus
extern "C" {
#endif

	/******************************************************************************
	* \brief
	*	Binary number array to HEX conversion.
	*
	* \param
	*	pDstHexArray - The destination HEX array.
	* \param
	*	pSrcBinArray - The source Binary array.
	* \param
	*	iLength - The length of pSrcBinArray.
	*
	* \return
	*	0 if result is OK, <0 if error.
	*
	* \note
	*	none
	*
	* \code
	*   ...
	*   int i = ARRAY_BIN_TO_HEX(DstHexArray, SrcBinArray, Length);
	*   if(i != 0) printf("Error\n");
	*	...
	* \endcode
	*
	*/
	int ARRAY_BIN_TO_HEX(unsigned char* pDstHexArray, const unsigned char* pSrcBinArray, int iLength);

	/******************************************************************************
	* \brief
	*	HEX number array to Binary conversion.
	*
	* \param
	*	pDstBinArray - The destination Binary array.
	* \param
	*	pSrcHexArray - The source HEX array.
	* \param
	*	iLength - The length of pSrcHexArray.
	*
	* \return
	*	0 if result is OK, <0 if error.
	*
	* \note
	*	none
	*
	* \code
	*   ...
	*   int i = ARRAY_HEX_TO_BIN(DstBinArray, SrcHexArray, Length);
	*   if(i != 0) printf("Error\n");
	*	...
	* \endcode
	*
	*/
	int ARRAY_HEX_TO_BIN(unsigned char* pDstBinArray, const unsigned char* pSrcHexArray, int iLength);

#ifdef __cplusplus
}
#endif


#endif /* HEX_H */
