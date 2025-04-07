/******************************************************************************
* \file      Align.h
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Alignment macros
* \details
*
* \see
*            and other resources
******************************************************************************/

#ifndef ALIGN_H
#define ALIGN_H		20250318L


/******************************************************************************
* \brief
*	Align a given value up to the specified alignment.
*
* \param
*	value - The original value to be aligned.
* \param
*	alignment - The alignment boundary that the value should conform to.
* 
* \return
*	The smallest value greater than or equal to `value` that is a multiple of `alignment`.
*
* \note
*
* \code
*   ...
*   value = ALIGN_UP(24, 16);
*	...
* \endcode
*
*/
#define ALIGN_UP(value, alignment) \
	(((value) + ((alignment) - 1)) & ~((alignment) - 1))


/******************************************************************************
* \brief
*	Align a given value down to the specified alignment.
*
* \param
*	value - The original value to be aligned.
* \param
*	alignment - The alignment boundary that the value should conform to.
*
* \return
*	The largest value less than or equal to `value` that is a multiple of `alignment`.
*
* \note
*
* \code
*   ...
*   value = ALIGN_DOWN(24, 16);
*	...
* \endcode
*
*/
#define ALIGN_DOWN(value, alignment) ((value) & ~((alignment) - 1))


/******************************************************************************
* \brief
*	Check if a value is aligned to the specified alignment.
*
* \param
*	value - The value to be checked.
* \param
*	alignment - The alignment boundary to check against.
*
* \return
*	Non-zero (true) if `value` is aligned to `alignment`, zero (false) otherwise.
*
* \note
*
* \code
*   ...
*   b = IS_ALIGNED(24, 16);
*	...
* \endcode
*
*/
#define IS_ALIGNED(value, alignment) \
	((((size_t)(value)) & (((size_t)(alignment)) - 1)) == 0)


/******************************************************************************
* \brief
*	Align a pointer to the nearest higher aligned address.
*
* \param
*	ptr - The pointer to be aligned.
* \param
*	alignment - The alignment boundary that the pointer should conform to.
*
* \return
*	A pointer that is aligned to the specified `alignment`.
*
* \note
*
* \code
*   ...
*   ptr = ALIGN_PTR(ptr, 16);
*	...
* \endcode
*
*/
#define ALIGN_PTR(ptr, alignment) \
	((void *)ALIGN_UP((size_t)(ptr), (size_t)(alignment)))


/******************************************************************************
* \brief
*	Align a size value up to the nearest multiple.
*
* \param
*	value - The size value to be aligned.
* \param
*	multiple - The multiple to align the value to.
*
* \return
*	The nearest size value that is a multiple of `multiple`.
*
* \note
*
* \code
*   ...
*   value = ALIGN_SIZE(24, 16);
*	...
* \endcode
*
*/
#define ALIGN_SIZE(value, multiple) \
	(((value) + (multiple) - 1) / (multiple) * (multiple))


#endif /* ALIGN_H */
