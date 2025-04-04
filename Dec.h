/******************************************************************************
* \file      Dec.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Dec macros and functions
* \details
*
* \see       
*            and other resources
******************************************************************************/
#ifndef DEC_H
#define DEC_H		20250318L


/******************************************************************************
* \brief
*	Binary number to DEC conversion.
*
* \param
*	bin - binary value (0 - 9).
*
* \return
*	DEC value.
*
* \note
*
* \code
*   ...
	printf("BIN_TO_DEC(1)   = '%c'\n", BIN_TO_DEC(1));
*	...
* \endcode
*
*/
#define BIN_TO_DEC(bin)     ( (bin)+'0' )


/******************************************************************************
* \brief
*	DEC number to binary conversion.
*
* \param
*	dec - dec value ('0' - '9') without hexadecimal numbers ('A'-'F').
*
* \return
*	Binary value.
*
* \note
*
* \code
*   ...
	printf("DEC_TO_BIN('9') = %d\n", DEC_TO_BIN('9'));
*	...
* \endcode
*
*/
#define DEC_TO_BIN(dec)		( (dec)-'0' )


#ifdef __cplusplus
extern "C" {
#endif

	/******************************************************************************
	* \brief
	*	Binary number array to DEC conversion.
	*
	* \param
	*	pDstDecArray - The destination DEC array.
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
	*   int i = ARRAY_BIN_TO_DEC(DstDecArray, SrcBinArray, Length);
	*   if(i != 0) printf("Error\n");
	*	...
	* \endcode
	*
	*/
	int ARRAY_BIN_TO_DEC(unsigned char* pDstDecArray, const unsigned char* pSrcBinArray, int iLength);

	/******************************************************************************
	* \brief
	*	DEC number array to Binary conversion.
	*
	* \param
	*	pDstBinArray - The destination Binary array.
	* \param
	*	pSrcDecArray - The source DEC array.
	* \param
	*	iLength - The length of pSrcDecArray.
	*
	* \return
	*	0 if result is OK, <0 if error.
	*
	* \note
	*	none
	*
	* \code
	*   ...
	*   int i = ARRAY_DEC_TO_BIN(DstBinArray, SrcDecArray, Length);
	*   if(i != 0) printf("Error\n");
	*	...
	* \endcode
	*
	*/
	int ARRAY_DEC_TO_BIN(unsigned char* pDstBinArray, const unsigned char* pSrcDecArray, int iLength);

#ifdef __cplusplus
}
#endif


#endif /* DEC_H */
