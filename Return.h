/******************************************************************************
* \file      Return.h
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Return macros
* \details
*
* \see       
*            and other resources
******************************************************************************/
#ifndef RETURN_H
#define RETURN_H		20250318L


/******************************************************************************
**  RETURN error or warning macros
*/
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L

#define RETURN_WARNING(code, msg) \
    do { fprintf(stderr, "[WARNING] %s:%zu in %s(), %s\n", __FILE__, (size_t)__LINE__, __func__, (msg)); \
         return (code); \
    } while (0)

#define RETURN_ERROR(code, msg) \
    do { fprintf(stderr, "[  ERROR] %s:%zu in %s(), %s\n", __FILE__, (size_t)__LINE__, __func__, (msg)); \
         return (code); \
    } while (0)

#else /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */

#define RETURN_WARNING(code, msg) \
    do { fprintf(stderr, "[WARNING] %s:%zu, %s\n", __FILE__, (size_t)__LINE__, (msg)); \
         return (code); \
    } while (0)

#define RETURN_ERROR(code, msg) \
    do { fprintf(stderr, "[  ERROR] %s:%zu, %s\n", __FILE__, (size_t)__LINE__, (msg)); \
         return (code); \
    } while (0)

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */


/******************************************************************************
**  EXIT error macro
*/
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L

#define EXIT_ERROR(msg) \
    do { fprintf(stderr, "[EXIT ERROR] %s:%zu in %s(), %s\n", __FILE__, (size_t)__LINE__, __func__, (msg)); \
         exit(EXIT_FAILURE); \
    } while (0)

#else /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */

#define EXIT_ERROR(msg) \
    do { fprintf(stderr, "[EXIT ERROR] %s:%zu, %s\n", __FILE__, (size_t)__LINE__, (msg)); \
         exit(EXIT_FAILURE); \
    } while (0)

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */


#endif /* RETURN_H */
