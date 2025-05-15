/******************************************************************************
* \file      Bcd.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Bcd macros and functions
* \details
*
* \see		 https://github.com/ignackocom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/
#ifndef BCD_H
#define BCD_H		20250318L


/******************************************************************************
* \brief
*	Binary number to BCD conversion.
*
* \param
*	bin - binary value (0 - 99).
*
* \return
*	BCD value.
*
* \note
*
* \code
*   ...
*   printf("  14 => 0x%02X\n", BIN_TO_BCD(14));
*	...
* \endcode
*
*/
#define BIN_TO_BCD(bin)		((((bin) / 10) << 4) + ((bin) % 10))


/******************************************************************************
* \brief
*	BCD number to binary conversion.
*
* \param
*	bcd - bcd value (0x00 - 0x99) without hexadecimal numbers (A-F).
*
* \return
*	Binary value.
*
* \note
*
* \code
*   ...
*   printf("0x14 =>   %02d\n", BCD_TO_BIN(0x14));
*	...
* \endcode
*
*/
#define BCD_TO_BIN(bcd)		(((bcd) >> 4) * 10 + ((bcd) & 0x0F))


#ifdef __cplusplus
extern "C" {
#endif

	/******************************************************************************
	* \brief
	*	Binary number array to BCD conversion.
	*
	* \param
	*	pDstBcdArray - The destination BCD array.
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
	*   int i = ARRAY_BIN_TO_BCD(DstBcdArray, SrcBinArray, Length);
	*   if(i != 0) printf("Error\n");
	*	...
	* \endcode
	*
	*/
	int ARRAY_BIN_TO_BCD(unsigned char* pDstBcdArray, const unsigned char* pSrcBinArray, int iLength);

	/******************************************************************************
	* \brief
	*	BCD number array to Binary conversion.
	*
	* \param
	*	pDstBinArray - The destination Binary array.
	* \param
	*	pSrcBcdArray - The source BCD array.
	* \param
	*	iLength - The length of pSrcBcdArray.
	*
	* \return
	*	0 if result is OK, <0 if error.
	*
	* \note
	*	none
	*
	* \code
	*   ...
	*   int i = ARRAY_BCD_TO_BIN(DstBinArray, SrcBcdArray, Length);
	*   if(i != 0) printf("Error\n");
	*	...
	* \endcode
	*
	*/
	int ARRAY_BCD_TO_BIN(unsigned char* pDstBinArray, const unsigned char* pSrcBcdArray, int iLength);

#ifdef __cplusplus
}
#endif


#endif /* BCD_H */
