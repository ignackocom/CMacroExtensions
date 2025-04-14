/******************************************************************************
* \file      Dump.h
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Dump macros
* \details
*
* \see
*            and other resources
******************************************************************************/

#ifndef DUMP_H
#define DUMP_H		20250318L


#define PRINT_VARIABLE(var) 		printf("%s = %d\n",#var,(var))
#define PRINT_VARIABLE_U(var) 		printf("%s = %u\n",#var,(var))

#define PRINT_VARIABLE_L(var)		printf("%s = %ld\n",#var,(var))
#define PRINT_VARIABLE_UL(var)		printf("%s = %lu\n",#var,(var))

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L

#define PRINT_VARIABLE_LL(var)		printf("%s = %lld\n",#var,(var))
#define PRINT_VARIABLE_ULL(var)		printf("%s = %llu\n",#var,(var))

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */


#define PRINT_VARIABLE_SIZE_T(var)	printf("%s = %zu\n",#var,(var))


#define PRINT_POINTER(var)			printf("%s = %p\n",#var,(var))


#define PRINT_STRING(var)			printf("%s = %s\n",#var,(var))


#define PRINT_ARRAY(arry,size)      do { \
                                        printf("%s[%d] = [ ", #arry, size); \
                                        for (size_t _idx_ = 0; _idx_ < (size); _idx_++) { \
                                            printf("%d ", (arry)[_idx_]); \
                                        } \
                                        printf("]"); \
                                    } while (0)

#define PRINT_ARRAY_U(arry,size)    do { \
                                        printf("%s[%d] = [ ", #arry, size); \
                                        for (size_t _idx_ = 0; _idx_ < (size); _idx_++) { \
                                            printf("%u ", (arry)[_idx_]); \
                                        } \
                                        printf("]"); \
                                    } while (0)


#define PRINT_ARRAY_L(arry,size)    do { \
                                        printf("%s[%d] = [ ", #arry, size); \
                                        for (size_t _idx_ = 0; _idx_ < (size); _idx_++) { \
                                            printf("%ld ", (arry)[_idx_]); \
                                        } \
                                        printf("]"); \
                                    } while (0)

#define PRINT_ARRAY_UL(arry,size)   do { \
                                        printf("%s[%d] = [ ", #arry, size); \
                                        for (size_t _idx_ = 0; _idx_ < (size); _idx_++) { \
                                            printf("%lu ", (arry)[_idx_]); \
                                        } \
                                        printf("]"); \
                                    } while (0)


#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L

#define PRINT_ARRAY_LL(arry,size)   do { \
                                        printf("%s[%d] = [ ", #arry, size); \
                                        for (size_t _idx_ = 0; _idx_ < (size); _idx_++) { \
                                            printf("%lld ", (arry)[_idx_]); \
                                        } \
                                        printf("]"); \
                                    } while (0)

#define PRINT_ARRAY_ULL(arry,size)  do { \
                                        printf("%s[%d] = [ ", #arry, size); \
                                        for (size_t _idx_ = 0; _idx_ < (size); _idx_++) { \
                                            printf("%llu ", (arry)[_idx_]); \
                                        } \
                                        printf("]"); \
                                    } while (0)

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */


#endif /* DUMP_H */
