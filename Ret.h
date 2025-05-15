/******************************************************************************
* \file      Ret.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Ret macros
* \details
*
* \see		 https://github.com/ignackocom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/
#ifndef RET_H
#define RET_H		20250318L



/* RET NULL macro */
#define RET_NULL(cmd)       do { \
								void *ptrret = (cmd); \
								if (ptrret == NULL) return(NULL); \
							} while(0)



/* RET macro */
#define RET(cmd)            do { \
								int ret = (cmd); \
	                            if (ret != 0) return(ret); \
	                        } while (0)

/* RET WARNING macro */
#define RET_WARNING(cmd)	do { \
								int ret = (cmd); \
								if (ret > 0) return(ret); \
							} while (0)

/* RET ERROR macro */
#define RET_ERROR(cmd)		do { \
								int ret = (cmd); \
								if (ret < 0) return(ret); \
							} while (0)



#endif /* RET_H */
