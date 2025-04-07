/******************************************************************************
* \file      Array.h
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Array macros
* \details
*
* \see
*            and other resources
******************************************************************************/
#ifndef ARRAY_H
#define ARRAY_H		20250318L


/******************************************************************************
* \brief
*	Get array size.
*
* \param
*	array - The array.
*
* \return
*	The number of elements in the array.
*
* \note
*
* \code
*   ...
*   int arry[5] = { 'a','r','r','a','y' };
*
*   printf("array size = %d\n", ARRAY_GET_SIZE(arry));
*	...
* \endcode
*
*/
#define ARRAY_GET_SIZE(array)        ((size_t)(sizeof(array) / sizeof((array)[0])))


/******************************************************************************
* \brief
*	Get array item size.
*
* \param
*	array - The array.
*
* \return
*	The size of array item.
*
* \note
*
* \code
*   ...
*   int arry[5] = { 'a','r','r','a','y' };
*
*   printf("array item size = %d\n", ARRAY_GET_ITEM_SIZE(arry));
*	...
* \endcode
*
*/
#define ARRAY_GET_ITEM_SIZE(array)      ((size_t)sizeof((array)[0]))


/******************************************************************************
* \brief
*	Get array item pointer.
*
* \param
*	array - The array.
* \param
*	index - The item index.
*
* \return
*	Address(pointer) of array item.
*
* \note
*
* \code
*   ...
*   int arry[5] = { 'a','r','r','a','y' };
*   int *pint;
*
*   pint = ARRAY_GET_ITEM_PTR(arry, 0);
*   printf("item = %c\n", *pint);
*   ...
* \endcode
*
*/
#define ARRAY_GET_ITEM_PTR(array, index)        (&((array)[(index)]))


/******************************************************************************
* \brief
*	Get array item.
*
* \param
*	array - The array.
* \param
*	index - The item index.
*
* \return
*	Array item value.
*
* \note
*
* \code
*   ...
*   int arry[5] = { 'a','r','r','a','y' };
*
*   printf("item = %c\n", ARRAY_GET_ITEM(arry, 0));
*	...
* \endcode
*
*/
#define ARRAY_GET_ITEM(array, index)        (array)[(index)]


/******************************************************************************
* \brief
*	Set array item.
*
* \param
*	array - The array.
* \param
*	index - The item index.
* \param
*	value - The value.
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   int arry[5] = { 'a','r','r','a','y' };
*
*   ARRAY_SET_ITEM(arry, 0, 'A');
*
*   printf("item = %c\n", ARRAY_GET_ITEM(arry, 0));
*	...
* \endcode
*
*/
#define ARRAY_SET_ITEM(array, index, value)     (array)[(index)] = (value)


/******************************************************************************
* \brief
*	Set array to value.
*
* \param
*	array - The array.
* \param
*	size - The number of items to set.
* \param
*	value - The value.
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   int arry[5] = { 'a','r','r','a','y' };
*
*   ARRAY_SET(arry, ARRAY_GET_SIZE(arry), 2);
*   ARRAY_SET(arry, 3, 1);
*	...
* \endcode
*
*/
#define ARRAY_SET(array, size, value) \
    do { \
        for (size_t _idx_ = 0; _idx_ < (size); ++_idx_) \
            (array)[_idx_] = (value); \
    } while (0)


/******************************************************************************
* \brief
*	Array clear, sets array items to 0.
*
* \param
*	array - The array.
* \param
*	size - The number of items.
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   int arry[5] = { 'a','r','r','a','y' };
*
*   ARRAY_CLEAR(arry, 4);
*   ARRAY_CLEAR(arry, ARRAY_GET_SIZE(arry));
*	...
* \endcode
*
*/
#define ARRAY_CLEAR(array, size)        ARRAY_SET((array), (size), 0)


/******************************************************************************
* @brief
*	Reversing the order of items in an array.
*
* \param
*	array - The array.
* \param
*	size - The number of items which will be reversed.
*
* \return
*   Nothing (void).
*
* \note
*
* \code
*   ...
*   int arry[5] = { 'a','r','r','a','y' };
*
*   ARRAY_REVERSE(arry, 3);
*   ARRAY_REVERSE(arry, ARRAY_GET_SIZE(arry));
*	...
* \endcode
*
*/
#define ARRAY_REVERSE(array, size) \
    do { \
        size_t _start_ = 0; \
        size_t _end_ = (size) - 1; \
        while (_start_ < _end_) { \
            /* Swap (array)[_start_] and (array)[_end_] */ \
            (array)[_start_] ^= (array)[_end_]; \
            (array)[_end_] ^= (array)[_start_]; \
            (array)[_start_] ^= (array)[_end_]; \
            _start_++; \
            _end_--; \
        } \
    } while(0)


/******************************************************************************
* \brief
*	Sort array from lower values to higher.
*
* \param
*	array - The array.
* \param
*	size - The number of items which will be sorted.
*
* \return
*   Nothing (void).
*
* \note
*
* \code
*   ...
*   int arry[5] = { 'a','r','r','a','y' };
*
*   ARRAY_SORT_ASCENDING(arry, 3);
*   ARRAY_SORT_ASCENDING(arry, ARRAY_GET_SIZE(arry));
*	...
* \endcode
*
*/
#define ARRAY_SORT_ASCENDING(array, size) do { \
    for (size_t _idx_ = 0; _idx_ < (size) - 1; _idx_++) { \
        for (size_t _jdx_ = 0; _jdx_ < (size) - _idx_ - 1; _jdx_++) { \
            if ((array)[_jdx_] > (array)[_jdx_ + 1]) { \
                /* Swap (array)[_jdx_] and (array)[_jdx_ + 1] */ \
                (array)[_jdx_] ^= (array)[_jdx_ + 1]; \
                (array)[_jdx_ + 1] ^= (array)[_jdx_]; \
                (array)[_jdx_] ^= (array)[_jdx_ + 1]; \
            } \
        } \
    } \
} while (0)


/******************************************************************************
* \brief
*	Sort array from higher values to lower.
*
* \param
*	array - The array.
* \param
*	size - The number of items which will be sorted.
*
* \return
*   Nothing (void).
*
* \note
*
* \code
*   ...
*   int arry[5] = { 'a','r','r','a','y' };
*
*   ARRAY_SORT_DESCENDING(arry, 3);
*   ARRAY_SORT_DESCENDING(arry, ARRAY_GET_SIZE(arry));
*	...
* \endcode
*
*/
#define ARRAY_SORT_DESCENDING(array, size) do { \
    for (size_t _idx_ = 0; _idx_ < (size) - 1; _idx_++) { \
        for (size_t _jdx_ = 0; _jdx_ < (size) - _idx_ - 1; _jdx_++) { \
            if ((array)[_jdx_] < (array)[_jdx_ + 1]) { \
                /* Swap (array)[_jdx_] and (array)[_jdx_ + 1] */ \
                (array)[_jdx_] ^= (array)[_jdx_ + 1]; \
                (array)[_jdx_ + 1] ^= (array)[_jdx_]; \
                (array)[_jdx_] ^= (array)[_jdx_ + 1]; \
            } \
        } \
    } \
} while (0)


/******************************************************************************
* \brief
*	Print array.
*
* \param
*	array - The array.
* \param
*	size - The number of items which will be printed.
*
* \return
*   Nothing (void).
*
* \note
*
* \code
*   ...
*   int arry[5] = { 'a','r','r','a','y' };
*
*   ARRAY_PRINT(arry, 3);
*   ARRAY_PRINT(arry, ARRAY_GET_SIZE(arry));
*	...
* \endcode
*
*/
#define ARRAY_PRINT(array, size) \
    do { \
        for (size_t _idx_ = 0; _idx_ < (size); _idx_++) { \
            printf("%d ", (array)[_idx_]); \
        } \
    } while (0)


#endif /* ARRAY_H */
