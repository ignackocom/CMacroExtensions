/******************************************************************************
* \file      Exclude.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Exclude build and run macros
* \details
*
* \see		 https://github.com/ignackocom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef EXCLUDE_H
#define EXCLUDE_H		20250318L


/* exclude from build */
#define EXCLUDE_FROM_BUILD(code)


/* exclude from runtime */
#define EXCLUDE_FROM_RUNTIME(cond,code)     do { \
                                                if(!(cond)) { code } \
                                            } while(0)


#endif /* EXCLUDE_H */
