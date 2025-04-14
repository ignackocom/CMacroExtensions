# CMacroExtensions
C Macro Extensions, a library collection of commonly used macros in the C language.<br/>
C89, C99 and >C99 compatible, CPP98 and >CPP98 compatible, Embedded C compatible.

Example of use

```
#include <stdio.h>
#include <stdarg.h>



#if defined(__clang__)
#pragma clang diagnostic ignored "-Wc++98-compat-pedantic"
#endif /* defined(__clang__) */

#if defined(__clang__)
#pragma clang diagnostic ignored "-Wold-style-cast"
#endif /* defined(__clang__) */

#if defined(__clang__)
#pragma clang diagnostic ignored "-Wzero-as-null-pointer-constant"
#endif /* defined(__clang__) */



#ifdef _MSC_VER
#pragma warning(disable:4464)
#endif /* _MSC_VER */

#include "../CMacroExtensions/CMacroExtensions.h"

#ifdef _MSC_VER
#pragma warning(default:4464)
#endif /* _MSC_VER */



INT_MAIN_ARGC_ARGV_BEGIN

/* STDC and cplusplus */
{
    printf("__STDC_VERSION__ or __cplusplus\n");

#if defined(__STDC_VERSION__)
    printf("__STDC_VERSION__  %ld\n", __STDC_VERSION__);
#endif /* defined(__STDC_VERSION__) */

#if defined(__cplusplus)
    printf("__cplusplus       %ld\n", __cplusplus);
#endif /* defined(__cplusplus) */

    printf("\n\n");
}


/* CMacroExtensions.h */
{
    printf("CMACROEXTENSIONS_VERSION() = %ld\n", CMACROEXTENSIONS_VERSION());

    printf("\n\n");
}


/* Align.h */
{
    printf("Align test\n");

    printf("ALIGN_UP(24, 16)   = %zu\n", ALIGN_UP(24, 16));
    printf("ALIGN_DOWN(24, 16) = %zu\n", ALIGN_DOWN(24, 16));

    printf("IS_ALIGNED(24, 4)  = %d\n", IS_ALIGNED(24, 4));
    printf("IS_ALIGNED(24, 16) = %d\n", IS_ALIGNED(24, 16));

    printf("ALIGN_PTR(24, 16)  = %p\n", ALIGN_PTR((void*)24, 16));

    printf("ALIGN_SIZE(24, 16) = %zu\n", ALIGN_SIZE(24, 16));

    printf("\n\n");
}


/* ArgUsed.h */
{
    UINT8 ui8;

    printf("ArgUsed test\n");

    ARG_USED(argc);
    ARG_USED(argv);
    ARG_USED(ui8);

    printf("\n\n");
}


/* Array.h */
{
#if defined(__clang__)
#pragma clang unsafe_buffer_usage begin
#endif /* defined(__clang__) */

    INT arry[5] = { 'a','r','r','a','y' };

    printf("Array test\n");

    printf("arry                                      = ['%c','%c','%c','%c','%c']\n", arry[0], arry[1], arry[2], arry[3], arry[4]);
    printf("ARRAY_GET_SIZE(arry)                      = %zu\n", ARRAY_GET_SIZE(arry));
    printf("ARRAY_GET_ITEM_SIZE(arry)                 = %zu\n", ARRAY_GET_ITEM_SIZE(arry));
    printf("(void*)ARRAY_GET_ITEM_PTR(arry, 0)        = %p\n", (void*)ARRAY_GET_ITEM_PTR(arry, 0));

    printf("ARRAY_GET_ITEM(arry, 0)                   = %c\n", ARRAY_GET_ITEM(arry, 0));
    printf("ARRAY_SET_ITEM(arry, 0, 'B')\n");
    ARRAY_SET_ITEM(arry, 0, 'B');
    printf("ARRAY_GET_ITEM(arry, 0)                   = %c\n", ARRAY_GET_ITEM(arry, 0));
    printf("\n");

    printf("arry items                                = ");
    PRINT_ARRAY(arry, (int)ARRAY_GET_SIZE(arry));
    printf("\n");

    printf("ARRAY_REVERSE(arry, ARRAY_GET_SIZE(arry)) = ");
    ARRAY_REVERSE(arry, ARRAY_GET_SIZE(arry));
    PRINT_ARRAY(arry, (int)ARRAY_GET_SIZE(arry));
    printf("\n");

    printf("ARRAY_SORT_ASCENDING(arry, ARRAY_GET_SIZE(arry))    = ");
    ARRAY_SORT_ASCENDING(arry, ARRAY_GET_SIZE(arry));
    PRINT_ARRAY(arry, (int)ARRAY_GET_SIZE(arry));
    printf("\n");

    printf("ARRAY_SORT_DESCENDING(arry, ARRAY_GET_SIZE(arry))    = ");
    ARRAY_SORT_DESCENDING(arry, ARRAY_GET_SIZE(arry));
    PRINT_ARRAY(arry, (int)ARRAY_GET_SIZE(arry));
    printf("\n");

    printf("ARRAY_SET(arry, ARRAY_GET_SIZE(arry), 97) = ");
    ARRAY_SET(arry, ARRAY_GET_SIZE(arry), 97);
    PRINT_ARRAY(arry, (int)ARRAY_GET_SIZE(arry));
    printf("\n");

    printf("ARRAY_CLEAR(arry, ARRAY_GET_SIZE(arry))   = ");
    ARRAY_CLEAR(arry, ARRAY_GET_SIZE(arry));
    PRINT_ARRAY(arry, (int)ARRAY_GET_SIZE(arry));
    printf("\n");

    printf("\n\n");

#if defined(__clang__)
#pragma clang unsafe_buffer_usage end
#endif /* defined(__clang__) */
}


/* Assert.h */
{
    INT i;

    printf("Assert test\n");

    i = 2;
    ASSERT_MESSAGE(2 == i, "custom error message!");
    i += 2;

    printf("\n\n");
}


/* Bcd.h */
{
    UINT8 pSrcBinArray[5] = { 01, 23, 45, 67, 89 };
    UINT8 pBinArray[5] = { 0, 0, 0, 0, 0 };
    UINT8 pBcdArray[5] = { 0, 0, 0, 0, 0 };

    printf("Bcd test\n");

    printf("BIN_TO_BCD(14)     = 0x%02X\n", (UINT8)BIN_TO_BCD(14));
    printf("BCD_TO_BIN(0x14)   = %02d\n", (UINT8)BCD_TO_BIN(0x14));

    printf("%d ", ARRAY_BIN_TO_BCD(pBcdArray, pSrcBinArray, 5));
    printf("pBcdArray        = %02X %02X %02X %02X %02X\n", pBcdArray[0], pBcdArray[1], pBcdArray[2], pBcdArray[3], pBcdArray[4]);
    printf("%d ", ARRAY_BCD_TO_BIN(pBinArray, pBcdArray, 5));
    printf("pBinArray        = %02d %02d %02d %02d %02d\n", pBinArray[0], pBinArray[1], pBinArray[2], pBinArray[3], pBinArray[4]);

    printf("\n\n");
}


/* BitsPerType.h */
{
    printf("BitsPerType test\n");

    printf("char      Bits %zu\n", BITS_PER_TYPE(char));
    printf("short     Bits %zu\n", BITS_PER_TYPE(short));
    printf("int       Bits %zu\n", BITS_PER_TYPE(int));
    printf("long      Bits %zu\n", BITS_PER_TYPE(long));
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L
    printf("long long Bits %zu\n", BITS_PER_TYPE(long long));
#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */
    printf("size_t    Bits %zu\n", BITS_PER_TYPE(size_t));

    printf("\n\n");
}


/* BitsPrint.h */
{
    printf("BitsPrint test\n");

    BITS_PRINT_UINT8((UINT8)0xF1);
    printf("\n");
    BITS_PRINT_UINT16((UINT16)0xFF01);
    printf("\n");
    BITS_PRINT_UINT32((UINT32)0xFFFF0001);
    printf("\n");
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L
    BITS_PRINT_UINT64((UINT64)0xFFFFFFFF00000001);
    printf("\n");
#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */

    printf("\n\n");
}


/* BitsReverse.h */
{
    printf("BitsReverse test\n");

    BITS_PRINT_UINT8(BITS_REVERSE_UINT8((UINT8)0xF1));
    printf("\n");
    BITS_PRINT_UINT16(BITS_REVERSE_UINT16((UINT16)0xFF01));
    printf("\n");
    BITS_PRINT_UINT32(BITS_REVERSE_UINT32((UINT32)0xFFFF0001));
    printf("\n");
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L
    BITS_PRINT_UINT64(BITS_REVERSE_UINT64((UINT64)0xFFFFFFFF00000001));
    printf("\n");
#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */

    printf("\n\n");
}


/* BitsRotate.h */
{
    UINT8                byte;
    UINT16               word;
    UINT32               dword;
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L
    UINT64               qword;
#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */

    printf("BitsRotate test\n");

    byte = 0x0F;

    printf("byte                   = ");
    BITS_PRINT_UINT8(byte);
    printf("\n");

    printf("ROTATE_LEFT(byte, 2)   = ");
    byte = (UINT8)ROTATE_LEFT(byte, 2);
    BITS_PRINT_UINT8(byte);
    printf("\n");

    printf("ROTATE_RIGHT(byte, 4)  = ");
    byte = (UINT8)ROTATE_RIGHT(byte, 4);
    BITS_PRINT_UINT8(byte);
    printf("\n");

    printf("\n");

    word = 0x0F0F;

    printf("word                   = ");
    BITS_PRINT_UINT16(word);
    printf("\n");

    printf("ROTATE_LEFT(word, 2)   = ");
    word = (UINT16)ROTATE_LEFT(word, 2);
    BITS_PRINT_UINT16(word);
    printf("\n");

    printf("ROTATE_RIGHT(word, 4)  = ");
    word = (UINT16)ROTATE_RIGHT(word, 4);
    BITS_PRINT_UINT16(word);
    printf("\n");

    printf("\n");

    dword = 0x0F0F0F0FUL;

    printf("dword                  = ");
    BITS_PRINT_UINT32(dword);
    printf("\n");

    printf("ROTATE_LEFT(dword, 2)  = ");
    dword = (UINT32)ROTATE_LEFT(dword, 2);
    BITS_PRINT_UINT32(dword);
    printf("\n");

    printf("ROTATE_RIGHT(dword, 4) = ");
    dword = (UINT32)ROTATE_RIGHT(dword, 4);
    BITS_PRINT_UINT32(dword);
    printf("\n");

    printf("\n");

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L

    qword = (UINT64)0x0F0F0F0F0F0F0F0F;

    printf("qword                  = ");
    BITS_PRINT_UINT64(qword);
    printf("\n");

    printf("ROTATE_LEFT(qword, 2)  = ");
    qword = (UINT64)ROTATE_LEFT(qword, 2);
    BITS_PRINT_UINT64(qword);
    printf("\n");

    printf("ROTATE_RIGHT(qword, 4) = ");
    qword = (UINT64)ROTATE_RIGHT(qword, 4);
    BITS_PRINT_UINT64(qword);
    printf("\n");

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */

    printf("\n\n");
}


/* BitsShift.h */
{
    UINT8               byte;
    UINT16              word;
    UINT32              dword;
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L
    UINT64              qword;
#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */

    printf("BitsShift test\n");

    byte = 0x0F;

    printf("byte                   = ");
    BITS_PRINT_UINT8(byte);
    printf("\n");

    printf("SHIFT_LEFT(byte, 2)    = ");
    byte = (UINT8)SHIFT_LEFT(byte, 2);
    BITS_PRINT_UINT8(byte);
    printf("\n");

    printf("SHIFT_RIGHT(byte, 4)   = ");
    byte = (UINT8)SHIFT_RIGHT(byte, 4);
    BITS_PRINT_UINT8(byte);
    printf("\n");

    printf("\n");

    word = 0x0F0F;

    printf("word                   = ");
    BITS_PRINT_UINT16(word);
    printf("\n");

    printf("SHIFT_LEFT(word, 2)    = ");
    word = (UINT16)SHIFT_LEFT(word, 2);
    BITS_PRINT_UINT16(word);
    printf("\n");

    printf("SHIFT_RIGHT(word, 4)   = ");
    word = (UINT16)SHIFT_RIGHT(word, 4);
    BITS_PRINT_UINT16(word);
    printf("\n");

    printf("\n");

    dword = 0x0F0F0F0FUL;

    printf("dword                  = ");
    BITS_PRINT_UINT32(dword);
    printf("\n");

    printf("SHIFT_LEFT(dword, 2)   = ");
    dword = (UINT32)SHIFT_LEFT(dword, 2);
    BITS_PRINT_UINT32(dword);
    printf("\n");

    printf("SHIFT_RIGHT(dword, 4)  = ");
    dword = (UINT32)SHIFT_RIGHT(dword, 4);
    BITS_PRINT_UINT32(dword);
    printf("\n");

    printf("\n");

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L

    qword = ((UINT64)0x0F0F0F0F0F0F0F0F);

    printf("qword                  = ");
    BITS_PRINT_UINT64(qword);
    printf("\n");

    printf("SHIFT_LEFT(qword, 2)   = ");
    qword = (UINT64)SHIFT_LEFT(qword, 2);
    BITS_PRINT_UINT64(qword);
    printf("\n");

    printf("SHIFT_RIGHT(qword, 4)  = ");
    qword = (UINT64)SHIFT_RIGHT(qword, 4);
    BITS_PRINT_UINT64(qword);
    printf("\n");

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */

    printf("\n\n");
}

/* Bits.h */
{
    UINT8  byte;
    UINT16 word;
    UINT32 dword;
    UINT64 qword;

    printf("Bits test\n");

    /* byte */
    byte = 0xF0;

    printf("BIT(2)                   = %u\n", (unsigned int)BIT(UINT8,2));
    printf("\n");

    /* bit */
    printf("byte                     = ");
    BITS_PRINT_UINT8(byte);
    printf("\n");

    printf("BIT_GET(byte, 7)         = %d\n", (int)BIT_GET(UINT8, byte, 7));
    printf("BIT_GET(byte, 0)         = %d\n", (int)BIT_GET(UINT8, byte, 0));
    printf("\n");

    printf("BIT_SET(byte, 1)         = ");
    BITS_PRINT_UINT8(BIT_SET(UINT8, byte, 1));
    printf("\n");

    printf("BIT_CLEAR(byte, 6)       = ");
    BITS_PRINT_UINT8(BIT_CLEAR(UINT8, byte, 6));
    printf("\n");

    printf("BIT_TOGGLE(byte, 6)      = ");
    BITS_PRINT_UINT8(BIT_TOGGLE(UINT8, byte, 6));
    printf("\n");

    printf("BIT_TOGGLE(byte, 1)      = ");
    BITS_PRINT_UINT8(BIT_TOGGLE(UINT8, byte, 1));
    printf("\n");

    printf("BIT_IS_SET               = ");
    for (int i = 0; i < 8; i++) printf("%c", ((int)BIT_IS_SET(UINT8, byte, 7 - i)) ? 't' : 'f');
    printf("\n");

    printf("BIT_IS_CLEARED           = ");
    for (int i = 0; i < 8; i++) printf("%c", ((int)BIT_IS_CLEARED(UINT8, byte, 7 - i)) ? 't' : 'f');
    printf("\n");

    /* lsb */
    byte = 0;
    printf("\n");
    printf("byte                     = ");
    BITS_PRINT_UINT8(byte);
    printf("\n");

    printf("LSB                      = %u\n", (unsigned int)LSB(UINT8, byte));

    printf("LSB_SET                  = ");
    BITS_PRINT_UINT8(LSB_SET(UINT8, byte));
    printf("\n");

    printf("LSB_CLEAR                = ");
    BITS_PRINT_UINT8(LSB_CLEAR(UINT8, byte));
    printf("\n");

    printf("LSB_TOGGLE               = ");
    BITS_PRINT_UINT8(LSB_TOGGLE(UINT8, byte));
    printf("\n");

    /* msb */
    printf("MSB                      = %u\n", (unsigned int)MSB(UINT8, byte));

    printf("MSB_SET                  = ");
    BITS_PRINT_UINT8(MSB_SET(UINT8, byte));
    printf("\n");

    printf("MSB_CLEAR                = ");
    BITS_PRINT_UINT8(MSB_CLEAR(UINT8, byte));
    printf("\n");

    printf("MSB_TOGGLE               = ");
    BITS_PRINT_UINT8(MSB_TOGGLE(UINT8, byte));
    printf("\n");

    printf("\n");

    /* word */
    word = 0xF0F0;

    printf("BIT(2)                   = %u\n", (unsigned int)BIT(UINT16, 2));
    printf("\n");

    /* bit */
    printf("word                     = ");
    BITS_PRINT_UINT16(word);
    printf("\n");

    printf("BIT_GET(word, 15)        = %d\n", (int)BIT_GET(UINT16, word, 15));
    printf("BIT_GET(word, 0)         = %d\n", (int)BIT_GET(UINT16, word, 0));
    printf("\n");

    printf("BIT_SET(word, 1)         = ");
    BITS_PRINT_UINT16(BIT_SET(UINT16, word, 1));
    printf("\n");

    printf("BIT_CLEAR(word, 14)      = ");
    BITS_PRINT_UINT16(BIT_CLEAR(UINT16, word, 14));
    printf("\n");

    printf("BIT_TOGGLE(word, 14)     = ");
    BITS_PRINT_UINT16(BIT_TOGGLE(UINT16, word, 14));
    printf("\n");

    printf("BIT_TOGGLE(word, 1)      = ");
    BITS_PRINT_UINT16(BIT_TOGGLE(UINT16, word, 1));
    printf("\n");

    printf("BIT_IS_SET               = ");
    for (int i = 0; i < 16; i++) printf("%c", ((int)BIT_IS_SET(UINT16, word, 15 - i)) ? 't' : 'f');
    printf("\n");

    printf("BIT_IS_CLEARED           = ");
    for (int i = 0; i < 16; i++) printf("%c", ((int)BIT_IS_CLEARED(UINT16, word, 15 - i)) ? 't' : 'f');
    printf("\n");

    /* lsb */
    word = 0;
    printf("\n");
    printf("word                     = ");
    BITS_PRINT_UINT16(word);
    printf("\n");

    printf("LSB                      = %u\n", (unsigned int)LSB(UINT16, word));

    printf("LSB_SET                  = ");
    BITS_PRINT_UINT16(LSB_SET(UINT16, word));
    printf("\n");

    printf("LSB_CLEAR                = ");
    BITS_PRINT_UINT16(LSB_CLEAR(UINT16, word));
    printf("\n");

    printf("LSB_TOGGLE               = ");
    BITS_PRINT_UINT16(LSB_TOGGLE(UINT16, word));
    printf("\n");

    /* msb */
    printf("MSB                      = %u\n", (unsigned int)MSB(UINT16, word));

    printf("MSB_SET                  = ");
    BITS_PRINT_UINT16(MSB_SET(UINT16, word));
    printf("\n");

    printf("MSB_CLEAR                = ");
    BITS_PRINT_UINT16(MSB_CLEAR(UINT16, word));
    printf("\n");

    printf("MSB_TOGGLE               = ");
    BITS_PRINT_UINT16(MSB_TOGGLE(UINT16, word));
    printf("\n");

    printf("\n");

    dword = 0xFFFF0000;

    printf("BIT(2)                    = %lu\n", (unsigned long)BIT(UINT32, 2));
    printf("\n");

    /* bit */
    printf("dword                     = ");
    BITS_PRINT_UINT32(dword);
    printf("\n");

    printf("BIT_GET(dword,31)         = %d\n", (int)BIT_GET(UINT32, dword, 31));
    printf("BIT_GET(dword, 0)         = %d\n", (int)BIT_GET(UINT32, dword, 0));
    printf("\n");

    printf("BIT_SET(dword, 1)         = ");
    BIT_SET(UINT32, dword, 1);
    BITS_PRINT_UINT32(dword);
    printf("\n");

    printf("BIT_CLEAR(dword, 14)      = ");
    BIT_CLEAR(UINT32, dword, 14);
    BITS_PRINT_UINT32(dword);
    printf("\n");

    printf("BIT_TOGGLE(dword, 14)     = ");
    BIT_TOGGLE(UINT32, dword, 14);
    BITS_PRINT_UINT32(dword);
    printf("\n");

    printf("BIT_TOGGLE(dword, 1)      = ");
    BIT_TOGGLE(UINT32, dword, 1);
    BITS_PRINT_UINT32(dword);
    printf("\n");

    printf("BIT_IS_SET                = ");
    for (int i = 0; i < 32; i++) printf("%c", ((int)BIT_IS_SET(UINT32, dword, 31 - i)) ? 't' : 'f');
    printf("\n");

    printf("BIT_IS_CLEARED            = ");
    for (int i = 0; i < 32; i++) printf("%c", ((int)BIT_IS_CLEARED(UINT32, dword, 31 - i)) ? 't' : 'f');
    printf("\n");

    printf("BITS_SET(dword, 0xF)      = ");
    BITS_SET(dword, 0xFUL);
    BITS_PRINT_UINT32(dword);
    printf("\n");

    printf("BITS_CLEAR(dword, 0xF)    = ");
    BITS_CLEAR(dword, 0xFUL);
    BITS_PRINT_UINT32(dword);
    printf("\n");

    printf("BITS_TOGGLE(dword, 0xF)   = ");
    BITS_TOGGLE(dword, 0xFUL);
    BITS_PRINT_UINT32(dword);
    printf("\n");

    /* lsb */
    dword = 0xF0000001;
    printf("\n");
    printf("dword                     = ");
    BITS_PRINT_UINT32(dword);
    printf("\n");

    printf("LSB                       = %d\n", LSB(UINT32, dword));

    printf("LSB_SET                   = ");
    LSB_SET(UINT32, dword);
    BITS_PRINT_UINT32(dword);
    printf("\n");

    printf("LSB_CLEAR                 = ");
    LSB_CLEAR(UINT32, dword);
    BITS_PRINT_UINT32(dword);
    printf("\n");

    printf("LSB_TOGGLE                = ");
    LSB_TOGGLE(UINT32, dword);
    BITS_PRINT_UINT32(dword);
    printf("\n");

    /* msb */
    printf("MSB                       = %d\n", MSB(UINT32, dword));

    printf("MSB_SET                   = ");
    MSB_SET(UINT32, dword);
    BITS_PRINT_UINT32(dword);
    printf("\n");

    printf("MSB_CLEAR                 = ");
    MSB_CLEAR(UINT32, dword);
    BITS_PRINT_UINT32(dword);
    printf("\n");

    printf("MSB_TOGGLE                = ");
    MSB_TOGGLE(UINT32, dword);
    BITS_PRINT_UINT32(dword);
    printf("\n");

    printf("MSB                       = %d\n", MSB(UINT32, dword));

    printf("\n");


#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L

    qword = 0xFFFF0000;

    printf("BIT(2)                    = %llu\n", (UINT64)BIT(UINT64,2));
    printf("\n");

    /* bit */
    printf("GET_BIT(qword,31)         = %d\n", (int)BIT_GET(UINT64, qword, 31));
    printf("GET_BIT(qword, 0)         = %d\n", (int)BIT_GET(UINT64, qword, 0));
    printf("\n");

    printf("BIT_SET(qword, 1)         = ");
    BIT_SET(UINT64, qword, 1);
    BITS_PRINT_UINT64(qword);
    printf("\n");

    printf("BIT_CLEAR(qword, 14)      = ");
    BIT_CLEAR(UINT64, qword, 14);
    BITS_PRINT_UINT64(qword);
    printf("\n");

    printf("BIT_TOGGLE(qword, 14)     = ");
    BIT_TOGGLE(UINT64, qword, 14);
    BITS_PRINT_UINT64(qword);
    printf("\n");

    printf("BIT_TOGGLE(qword, 1)      = ");
    BIT_TOGGLE(UINT64, qword, 1);
    BITS_PRINT_UINT64(qword);
    printf("\n");

    printf("BIT_IS_SET                = ");
    for (int i = 0; i < 64; i++) printf("%c", ((int)BIT_IS_SET(UINT64, qword, 63 - i)) ? 't' : 'f');
    printf("\n");

    printf("BIT_IS_CLEARED            = ");
    for (int i = 0; i < 64; i++) printf("%c", ((int)BIT_IS_CLEARED(UINT64, qword, 63 - i)) ? 't' : 'f');
    printf("\n");

    /* lsb */
    qword = 0;
    printf("\n");
    printf("qword                     = ");
    BITS_PRINT_UINT64(qword);
    printf("\n");

    printf("LSB                       = %d\n", LSB(UINT64, qword));

    printf("LSB_SET                   = ");
    LSB_SET(UINT64, qword);
    BITS_PRINT_UINT64(qword);
    printf("\n");

    printf("LSB_CLEAR                 = ");
    LSB_CLEAR(UINT64, qword);
    BITS_PRINT_UINT64(qword);
    printf("\n");

    printf("LSB_TOGGLE                = ");
    LSB_TOGGLE(UINT64, qword);
    BITS_PRINT_UINT64(qword);
    printf("\n");

    /* msb */
    printf("MSB                       = %d\n", MSB(UINT64, qword));

    printf("MSB_SET                   = ");
    MSB_SET(UINT64, qword);
    BITS_PRINT_UINT64(qword);
    printf("\n");

    printf("MSB_CLEAR                 = ");
    MSB_CLEAR(UINT64, qword);
    BITS_PRINT_UINT64(qword);
    printf("\n");

    printf("MSB_TOGGLE                = ");
    MSB_TOGGLE(UINT64, qword);
    BITS_PRINT_UINT64(qword);
    printf("\n");

    printf("MSB                       = %d\n", MSB(UINT64, qword));

    printf("\n");

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */

    printf("\n\n");
}

/* Bool.h */
{
    BOOL b1;
    Bool b2;
    bool b3;

    printf("Bool test\n");
    printf("GET_BOOL(10) = %d\n", GET_BOOL(10));
    printf("GET_BOOL(0)  = %d\n", GET_BOOL(0));

    printf("TRUE         = \"%s\"\n", BOOL_TO_STRING(TRUE));
    printf("FALSE        = \"%s\"\n", BOOL_TO_STRING(FALSE));

    b1 = TRUE;
    b2 = b1;
    b3 = b2;
    b1 = (BOOL)b3;

    printf("\n\n");
}


/* Cast.h */
{
    UINT8 byte = 1;
    UINT16 word = 2;
    UINT16* usptr;

    printf("Cast test\n");

    byte = CAST(word, UINT8);
    usptr = CAST_PTR(&word, UINT16);

    ARG_USED(byte);
    ARG_USED(word);
    ARG_USED(usptr);

    printf("\n\n");
}


/* Concatenate.h */
{
    CHAR Hello, World, HelloWorld;

    printf("Concatenate test\n");

    CONCATENATE(Hello, World) = 1;

    ARG_USED(Hello);
    ARG_USED(World);
    ARG_USED(HelloWorld);

    printf("\n\n");
}


/* CTypeExt.h */
{
    printf("CTypeExt test\n");

    printf("isascii('A')   = %d\n", isascii('A'));
    printf("isascii(0x80)  = %d\n", isascii(0x80));
    printf("\n");
    printf("isbdigit('0')  = %d\n", isbdigit('0'));
    printf("isbdigit('1')  = %d\n", isbdigit('1'));
    printf("isbdigit('2')  = %d\n", isbdigit('2'));
    printf("\n");
    printf("isodigit('0')  = %d\n", isodigit('0'));
    printf("isodigit('7')  = %d\n", isodigit('7'));
    printf("isodigit('8')  = %d\n", isodigit('8'));
    printf("\n");

#if !defined(__STDC_VERSION__) || defined(__STDC_VERSION__) && __STDC_VERSION__ < 199901L

    printf("isblank(' ')   = %d\n", isblank(' '));
    printf("isblank('\t')  = %d\n", isblank('\t'));
    printf("isblank('0')   = %d\n", isblank('0'));
    printf("\n");

#endif /* !defined(__STDC_VERSION__) || defined(__STDC_VERSION__) && __STDC_VERSION__ < 199901L  */

    /* char to ascii */
    printf("toascii(0x130) = '%c'\n", toascii(0x130));
    printf("\n");

    printf("\n\n");
}


/* Datatype.h */
{
    UINT32 ui32 = 0x12345678L;
    ULONG ul32 = 0L;

    printf("Datatype test\n");

    ul32 = (ULONG)ui32;

    ARG_USED(ul32);

    printf("\n\n");
}


/* DatatypeCpu.h */
{
    printf("DatatypeCpu test\n");

    printf("\n\n");
}


/* DatatypeWin.h */
{
    BYTE byte;
    WORD word;
    DWORD dword;
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L
    QWORD qword;
#endif /*  defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */

    printf("DatatypeWin test\n");

    byte = MAKEBYTE(0x1, 0x2);
    printf("BYTE        = %02X\n", byte);
    printf("HINIBBLE    = %01X\n", HINIBBLE(byte));
    printf("LONIBBLE    = %01X\n", LONIBBLE(byte));
    printf("\n");

    word = MAKEWORD(0x12, 0x34);
    printf("WORD        = %04X\n", word);
    printf("HIBYTE      = %02X\n", HIBYTE(word));
    printf("LOBYTE      = %02X\n", LOBYTE(word));
    printf("\n");

    dword = MAKEDWORD(0x1234, 0x5678);
    printf("DWORD       = %08lX\n", (unsigned long)dword);
    printf("HIWORD      = %04X\n", HIWORD(dword));
    printf("LOWORD      = %04X\n", LOWORD(dword));
    printf("\n");

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L

    qword = MAKEQWORD(0x12345678, 0x9ABCDEF0);
    printf("QWORD       = %016llX\n", qword);
    printf("HIDWORD     = %08X\n", HIDWORD(qword));
    printf("LODWORD     = %08X\n", LODWORD(qword));
    printf("\n");

#endif /*  defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */

    printf("\n\n");
}


/* Date.h */
{
    printf("Date test\n");

#if defined(__clang__)
#pragma clang unsafe_buffer_usage begin
#endif /* defined(__clang__) */

    printf("year  %d\n", YEAR("Apr  7 2025", 7));
    printf("month %d\n", MONTH("Apr  7 2025", 0));
    printf("day   %d\n", DAY("Apr  7 2025", 4));

#if defined(__clang__)
#pragma clang unsafe_buffer_usage end
#endif /* defined(__clang__) */

    printf("\n\n");
}


/* Debug.h */
{
    printf("Debug test\n");

    DEBUG_MESSAGE("debug message");

    printf("\n\n");
}


/* Dec.h */
{
    UINT8 pSrcBinArray[5] = { 01, 02, 03 };
    UINT8 pBinArray[5] = { 0, 0, 0 };
    UINT8 pDecArray[5] = { 0, 0, 0 };

    printf("Dec test\n");

    printf("BIN_TO_DEC(1)   = '%c'\n", BIN_TO_DEC(1));

    printf("DEC_TO_BIN('9') = %d\n", DEC_TO_BIN('9'));

    printf("%d ", ARRAY_BIN_TO_DEC(pDecArray, pSrcBinArray, 3));
    printf("pDecArray        = %c %c %c\n", pDecArray[0], pDecArray[1], pDecArray[2]);
    printf("%d ", ARRAY_DEC_TO_BIN(pBinArray, pDecArray, 3));
    printf("pBinArray        = %02d %02d %02d\n", pBinArray[0], pBinArray[1], pBinArray[2]);

    printf("\n\n");
}


/* Dump.h */
{
    UINT8 ucStr[] = "abc";
    int arryi[5] = { -2,-1,0,1,2 };
    long arryl[5] = { -2,-1,0,1,2 };
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L
    long long arryll[5] = { -2,-1,0,1,2 };
#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */

    printf("Dump test\n");

    PRINT_VARIABLE((int)1);
    PRINT_VARIABLE_U((unsigned int)1);

    PRINT_VARIABLE_L((long)1L);
    PRINT_VARIABLE_UL((unsigned long)1L);

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L
    PRINT_VARIABLE_LL((long long)1LL);
    PRINT_VARIABLE_ULL((unsigned long long)1LL);
#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */

    PRINT_VARIABLE_SIZE_T((size_t)1);

    PRINT_POINTER((void*)ucStr);

    PRINT_STRING(ucStr);

#if defined(__clang__)
#pragma clang unsafe_buffer_usage begin
#endif /* defined(__clang__) */

    PRINT_ARRAY(arryi, 5);
    printf("\n");

    PRINT_ARRAY_L(arryl, 5);
    printf("\n");

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L
    PRINT_ARRAY_LL(arryll,5);
#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */

#if defined(__clang__)
#pragma clang unsafe_buffer_usage end
#endif /* defined(__clang__) */

    printf("\n\n");
}


/* Exclude.h */
{
    printf("Exclude test\n");

    EXCLUDE_FROM_BUILD(
        printf("abc\n");
        printf("def\n");
        printf("ghi\n");
        );

    EXCLUDE_FROM_RUNTIME(0,
        printf("123\n");
        printf("456\n");
        printf("789\n");
        );

    printf("\n\n");
}


/* File.h */
#if defined(__clang__)
#pragma clang unsafe_buffer_usage begin
#endif /* defined(__clang__) */
{
    printf("File test\n");

    printf("FILE_SEPARATOR = '%c'\n", FILE_SEPARATOR);

    printf("FILE_SHORT = %s\n", FILE_SHORT);

    printf("\n\n");
}
#if defined(__clang__)
#pragma clang unsafe_buffer_usage end
#endif /* defined(__clang__) */


/* Func.h */
{
    func_("main");

    printf("Func test\n");

    printf("%s\n", FUNC_NAME(__func__));

    printf("\n\n");
}


/* Hex.h */
{
    UINT8 pSrcBinArray[3] = { 01, 02, 0xf };
    UINT8 pBinArray[3] = { 0, 0, 0 };
    UINT8 pHexArray[3] = { 0, 0, 0 };

    printf("Hex test\n");

    printf("BIN_TO_HEX(1)  = '%c'\n", BIN_TO_HEX(1));
    printf("BIN_TO_HEX(10) = '%c'\n", BIN_TO_HEX(10));

    printf("HEX_TO_BIN('1') = %d\n", HEX_TO_BIN('1'));
    printf("HEX_TO_BIN('A') = %d\n", HEX_TO_BIN('A'));
    printf("HEX_TO_BIN('b') = %d\n", HEX_TO_BIN('b'));

    printf("%d ", ARRAY_BIN_TO_HEX(pHexArray, pSrcBinArray, 3));
    printf("pHexArray        = %c %c %c\n", pHexArray[0], pHexArray[1], pHexArray[2]);
    printf("%d ", ARRAY_HEX_TO_BIN(pBinArray, pHexArray, 3));
    printf("pBinArray        = %02d %02d %02d\n", pBinArray[0], pBinArray[1], pBinArray[2]);

    printf("\n\n");
}

/* Likely.h */
{
    int a;

    printf("Likely test\n");

    a = 2;
    if (LIKELY(a > 1))
    {
        printf("a>1\n");
    }

    printf("\n\n");
}

/* Math.h */
{
    printf("Math test\n");

    printf("IS_ODD(0)  = %d\n", IS_ODD(0));
    printf("IS_ODD(1)  = %d\n", IS_ODD(1));
    printf("IS_ODD(2)  = %d\n", IS_ODD(2));
    printf("IS_ODD(3)  = %d\n", IS_ODD(3));
    printf("\n");

    printf("IS_EVEN(0) = %d\n", IS_EVEN(0));
    printf("IS_EVEN(1) = %d\n", IS_EVEN(1));
    printf("IS_EVEN(2) = %d\n", IS_EVEN(2));
    printf("IS_EVEN(3) = %d\n", IS_EVEN(3));
    printf("\n");

    printf("IS_BETWEEN(1,2,4) = %d\n", IS_BETWEEN(1, 2, 4));
    printf("IS_BETWEEN(2,2,4) = %d\n", IS_BETWEEN(2, 2, 4));
    printf("IS_BETWEEN(3,2,4) = %d\n", IS_BETWEEN(3, 2, 4));
    printf("IS_BETWEEN(4,2,4) = %d\n", IS_BETWEEN(4, 2, 4));
    printf("IS_BETWEEN(5,2,4) = %d\n", IS_BETWEEN(5, 2, 4));
    printf("\n");

    printf("CLIP(1,2,4)   = %d\n", CLIP(1, 2, 4));
    printf("CLIP(2,2,4)   = %d\n", CLIP(2, 2, 4));
    printf("CLIP(3,2,4)   = %d\n", CLIP(3, 2, 4));
    printf("CLIP(4,2,4)   = %d\n", CLIP(4, 2, 4));
    printf("CLIP(5,2,4)   = %d\n", CLIP(5, 2, 4));
    printf("\n");

    printf("UCLIP(1,4)    = %d\n", UCLIP(1, 4));
    printf("UCLIP(5,4)    = %d\n", UCLIP(5, 4));
    printf("\n");

    printf("LCLIP(1,4)    = %d\n", LCLIP(1, 4));
    printf("LCLIP(5,4)    = %d\n", LCLIP(5, 4));
    printf("\n");

    printf("SIGN(-2)    = %d\n", SIGN(-2));
    printf("SIGN(0)     = %d\n", SIGN(0));
    printf("SIGN(2)     = %d\n", SIGN(2));
    printf("\n");

    printf("ABS(-2)     = %d\n", ABS(-2));
    printf("ABS(0)      = %d\n", ABS(0));
    printf("ABS(2)      = %d\n", ABS(2));
    printf("\n");

    printf("DIFF(1,5)   = %d\n", DIFF(1, 5));
    printf("\n");

    printf("MIN(1,2)    = %d\n", MIN(1, 2));
    printf("MAX(1,2)    = %d\n", MAX(1, 2));

    printf("\n\n");
}


/* MathAngle.h */
{
    printf("MathAngle test\n");

    printf("DEGREE_TO_RADIAN(57.295780)   = %f\n", DEGREE_TO_RADIAN(57.295780));
    printf("DEGREE_TO_GRADIAN(57.295780)  = %f\n", DEGREE_TO_GRADIAN(57.295780));

    printf("RADIAN_TO_DEGREE(1)           = %f\n", RADIAN_TO_DEGREE(1));
    printf("RADIAN_TO_GRADIAN(1)          = %f\n", RADIAN_TO_GRADIAN(1));

    printf("GRADIAN_TO_DEGREE(63.661978)  = %f\n", GRADIAN_TO_DEGREE(63.661978));
    printf("GRADIAN_TO_RADIAN(63.661978)  = %f\n", GRADIAN_TO_RADIAN(63.661978));

    printf("\n\n");
}


/* Member.h */
{
    struct abc { int a; short b; short c; };

    printf("Member test\n");

    printf("MEMBER_SIZEOF(abc, a)      = %zu\n", MEMBER_SIZEOF(struct abc, a));
    printf("MEMBER_SIZEOF(abc, b)      = %zu\n", MEMBER_SIZEOF(struct abc, b));
    printf("MEMBER_SIZEOF(abc, c)      = %zu\n", MEMBER_SIZEOF(struct abc, c));
    printf("\n");

    printf("MEMBER_OFFSETOF(abc, a)    = %zu\n", MEMBER_OFFSETOF(struct abc, a));
    printf("MEMBER_OFFSETOF(abc, b)    = %zu\n", MEMBER_OFFSETOF(struct abc, b));
    printf("MEMBER_OFFSETOF(abc, c)    = %zu\n", MEMBER_OFFSETOF(struct abc, c));
    printf("\n");

    printf("MEMBER_OFFSETOFEND(abc, c) = %zu\n", MEMBER_OFFSETOFEND(struct abc, c));

    printf("\n\n");
}


/* New.h */
{
    VOID* vptr;

    printf("New and Delete test\n");

    vptr = NEW(10);
    if(vptr != NULL) printf("allocated\n");
    {
        DELETE(vptr);
        printf("deallocated\n");
    }

    printf("\n\n");
}


/* Paste.h */
{
    printf("Paste test\n");

    printf("str + ing = %s\n", PASTE("str", "ing"));

    printf("\n\n");
}


/* Ret.h */
{
    int iStatus;

    printf("Ret test\n");

    iStatus = 0;
    RET(iStatus);
    RET_WARNING(iStatus);
    RET_ERROR(iStatus);
    printf("RET passed\n");

    printf("\n");
}


/* Return.h */
{
    printf("Return test\n");

//        int i = 1;
//        RETURN_WARNING(i, "message");
//        RETURN_ERROR(i, "message");
//        EXIT_ERROR("message");
    printf("\n");
}


/* Status.h */
{
    printf("Status test\n");

    printf("warn status %d\n", WARNING(NOT_OK));
    printf("err  status %d\n", ERROR(NOT_OK));

    printf("\n\n");
}


/* StdargExt.h */
{
    va_list args;
    va_list args2;

    printf("StdargExt test\n");

    va_copy(args2, args); /* copy va_list object */

    printf("\n\n");
}


/* Stringify.h */
{
    INT variable = 5;

    printf("Stringify test\n");

    printf("var = \"%s\" = %d\n", STRINGIFY(variable), variable);

    printf("\n\n");
}


/* Swap.h */
{
    long long1 = 5;
    long long2 = 7;
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L
    long long longlong1 = 5;
    long long longlong2 = 7;
#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */

    printf("Swap test\n");

    printf("%s = %ld\n", STRINGIFY(long1), long1);
    printf("%s = %ld\n", STRINGIFY(long2), long2);
    SWAP(long1, long2);
    printf("after SWAP\n");
    printf("%s = %ld\n", STRINGIFY(long1), long1);
    printf("%s = %ld\n", STRINGIFY(long2), long2);

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L
    printf("%s = %lld\n", STRINGIFY(longlong1), longlong1);
    printf("%s = %lld\n", STRINGIFY(longlong2), longlong2);
    SWAP(longlong1, longlong2);
    printf("after SWAP\n");
    printf("%s = %lld\n", STRINGIFY(longlong1), longlong1);
    printf("%s = %lld\n", STRINGIFY(longlong2), longlong2);
#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */

    printf("\n\n");
}


/* Time.h */
{
    printf("Time test\n");

#if defined(__clang__)
#pragma clang unsafe_buffer_usage begin
#endif /* defined(__clang__) */

    printf("hour   = %d\n", HOUR("06:30:44", 0));
    printf("minute = %d\n", MINUTE("06:30:44", 3));
    printf("second = %d\n", SECOND("06:30:44", 6));

#if defined(__clang__)
#pragma clang unsafe_buffer_usage end
#endif /* defined(__clang__) */

    printf("\n\n");
}


/* Trace.h */
{
    printf("Trace test\n");

    TRACE_MESSAGE("trace message");

    printf("\n\n");
}


return(0);

INT_MAIN_ARGC_ARGV_END
```


# History of changes ...
2025 04 04 ARRAY macros added<br/>
2025 04 04 BCD macros and functions added<br/>
2025 04 04 DEC macros and functions added<br/>
2025 04 04 HEX macros and functions added<br/>
2025 04 04 DATE macros added<br/>
2025 04 04 TIME macros added<br/>
2025 04 05 array.h ARRAY_GET_SIZE and ARRAY_GET_ITEM_SIZE macros returns datatype size_t<br/>
2025 04 05 array.h ARRAY_REVERSE, ARRAY_SORT_ASCENDING, ARRAY_SORT_DESCENDING rewritten to limit some false compiler warnings<br/>
2025 04 05 math.h macros added<br/>
2025 04 05 mathangle.h macros added<br/>
2025 04 05 NEW and DELETE macros added in new.h<br/>
2025 04 06 BITS PRINT functions added in BitsPrint.h<br/>
2025 04 06 BITS REVERSE functions added in BitsReverse.h<br/>
2025 04 06 BITS ROTATE macros added in BitsRotate.h<br/>
2025 04 06 BITS SHIFT macros added in BitsShift.h<br/>
2025 04 07 better BOOL support added<br/>
2025 04 07 better C++ support added<br/>
2025 04 09 BITS REVERSE and BITS PRINT conditional compilation c++ bugs fixed<br/>
2025 04 09 status.h ERROR and WARNING macros added<br/>
2025 04 09 statement.h macro added<br/>
2025 04 09 ret.h macros added<br/>
2025 04 09 return.h macros added<br/>
2025 04 09 state.h macros added<br/>
2025 04 14 dump.h macros completed<br/>
2025 04 14 array.h ARRAY_PRINT macro canceled, please use dump.h macros
2025 04 14 align.h some align macros returns size_t data type value
2025 04 14 bits.h bit manipulating and lsb and msb macros added
