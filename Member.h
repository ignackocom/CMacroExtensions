/******************************************************************************
* \file      Member.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Member macros
* \details
*
* \see
*            and other resources
******************************************************************************/

#ifndef MEMBER_H
#define MEMBER_H		20250318L


/******************************************************************************
* \brief
*	Structure member size of.
*
* \param
*	type - The structure type.
* \param
*	member - The structure member.
*
* \return
*	Size of member.
*
*/
#define MEMBER_SIZEOF(type,member) \
    ( (size_t) sizeof(((type *)0)->member) )


/******************************************************************************
* \brief
*	Structure member offset of.
*
* \param
*	type - The structure type.
* \param
*	member - The structure member.
*
* \return
*	Offset of member.
*
*/
#define MEMBER_OFFSETOF(type,member) \
    ( (size_t)      &(((type *)0)->member) )


/******************************************************************************
* \brief
*	Structure member offset of end.
*
* \param
*	type - The structure type.
* \param
*	member - The structure member.
*
* \return
*	Offset of end member.
*
*/
#define MEMBER_OFFSETOFEND(type,member) \
    ( MEMBER_OFFSETOF(type,member) + MEMBER_SIZEOF(type,member) )


#endif /* MEMBER_H */
