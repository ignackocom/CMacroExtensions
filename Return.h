/******************************************************************************
* \file      Return.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Return macros
* \details
*
* \see		 https://github.com/ignackocom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/
#ifndef RETURN_H
#define RETURN_H		20250318L


/******************************************************************************
**  RETURN error or warning macros
*/
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L

#define RETURN_WARNING(code, msg) \
    do { fprintf(stderr, "[WARNING] %s:%ld in %s(), %s\n", __FILE__, (long)__LINE__, __func__, (msg)); \
         return (code); \
    } while (0)

#define RETURN_ERROR(code, msg) \
    do { fprintf(stderr, "[  ERROR] %s:%ld in %s(), %s\n", __FILE__, (long)__LINE__, __func__, (msg)); \
         return (code); \
    } while (0)

#else /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */

#define RETURN_WARNING(code, msg) \
    do { fprintf(stderr, "[WARNING] %s:%ld, %s\n", __FILE__, (long)__LINE__, (msg)); \
         return (code); \
    } while (0)

#define RETURN_ERROR(code, msg) \
    do { fprintf(stderr, "[  ERROR] %s:%ld, %s\n", __FILE__, (long)__LINE__, (msg)); \
         return (code); \
    } while (0)

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */


/******************************************************************************
**  EXIT error macro
*/
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L

#define EXIT_ERROR(msg) \
    do { fprintf(stderr, "[EXIT ERROR] %s:%ld in %s(), %s\n", __FILE__, (long)__LINE__, __func__, (msg)); \
         exit(EXIT_FAILURE); \
    } while (0)

#else /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */

#define EXIT_ERROR(msg) \
    do { fprintf(stderr, "[EXIT ERROR] %s:%ld, %s\n", __FILE__, (long)__LINE__, (msg)); \
         exit(EXIT_FAILURE); \
    } while (0)

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */


#endif /* RETURN_H */
