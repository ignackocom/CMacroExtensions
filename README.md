# CMacroExtensions
C Macro Extensions, a library of commonly used macros in the C language.

Example of use

```
#include <stdio.h>
#include <stdarg.h>

#if defined(__clang__)
#pragma clang diagnostic ignored "-Wc23-compat"
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
#if defined(__STDC_VERSION__)
    printf("__STDC_VERSION__  %ld\n", __STDC_VERSION__);
#endif /* defined(__STDC_VERSION__) */
#if defined(__cplusplus)
    printf("__cplusplus       %ld\n", __cplusplus);
#endif /* defined(__cplusplus) */
    printf("\n");
}

/* Align.h */
{
    printf("Align test\n");

    printf("ALIGN_UP(24, 16)   = %d\n", ALIGN_UP(24, 16));
    printf("ALIGN_DOWN(24, 16) = %d\n", ALIGN_DOWN(24, 16));

    printf("IS_ALIGNED(24, 4)  = %d\n", IS_ALIGNED(24, 4));
    printf("IS_ALIGNED(24, 16) = %d\n", IS_ALIGNED(24, 16));

    printf("ALIGN_PTR(24, 16)  = %p\n", ALIGN_PTR((void*)24, 16));

    printf("ALIGN_SIZE(24, 16) = %d\n", ALIGN_SIZE(24, 16));

    printf("\n");
}

/* ArgUsed.h */
{
    unsigned char uc;

    printf("ArgUsed test\n");

    ARG_USED(argc);
    ARG_USED(argv);
    ARG_USED(uc);

    printf("\n");
}

/* Array.h */
{
#if defined(__clang__)
#pragma clang unsafe_buffer_usage begin
#endif /* defined(__clang__) */

    int arry[5] = { 'a','r','r','a','y' };

    printf("Array test\n");

    printf("arry                                      = ['%c','%c','%c','%c','%c']\n", arry[0], arry[1], arry[2], arry[3], arry[4]);
    printf("ARRAY_GET_SIZE(arry)                      = %llu\n", ARRAY_GET_SIZE(arry));
    printf("ARRAY_GET_ITEM_SIZE(arry)                 = %zu\n", ARRAY_GET_ITEM_SIZE(arry));
    printf("(void*)ARRAY_GET_ITEM_PTR(arry, 0)        = %p\n", (void*)ARRAY_GET_ITEM_PTR(arry, 0));

    printf("ARRAY_GET_ITEM(arry, 0)                   = %c\n", ARRAY_GET_ITEM(arry, 0));
    printf("ARRAY_SET_ITEM(arry, 0, 'B')\n");
    ARRAY_SET_ITEM(arry, 0, 'B');
    printf("ARRAY_GET_ITEM(arry, 0)                   = %c\n", ARRAY_GET_ITEM(arry, 0));
    printf("\n");

    printf("arry items                                = ");
    ARRAY_PRINT(arry, ARRAY_GET_SIZE(arry));
    printf("\n");

    printf("ARRAY_REVERSE(arry, ARRAY_GET_SIZE(arry)) = ");
    ARRAY_REVERSE(arry, ARRAY_GET_SIZE(arry));
    ARRAY_PRINT(arry, ARRAY_GET_SIZE(arry));
    printf("\n");

    printf("ARRAY_SORT_ASCENDING(arry, ARRAY_GET_SIZE(arry))    = ");
    ARRAY_SORT_ASCENDING(arry, ARRAY_GET_SIZE(arry));
    ARRAY_PRINT(arry, ARRAY_GET_SIZE(arry));
    printf("\n");

    printf("ARRAY_SORT_DESCENDING(arry, ARRAY_GET_SIZE(arry))    = ");
    ARRAY_SORT_DESCENDING(arry, ARRAY_GET_SIZE(arry));
    ARRAY_PRINT(arry, ARRAY_GET_SIZE(arry));
    printf("\n");

    printf("ARRAY_SET(arry, ARRAY_GET_SIZE(arry), 97) = ");
    ARRAY_SET(arry, ARRAY_GET_SIZE(arry), 97);
    ARRAY_PRINT(arry, ARRAY_GET_SIZE(arry));
    printf("\n");

    printf("ARRAY_CLEAR(arry, ARRAY_GET_SIZE(arry))   = ");
    ARRAY_CLEAR(arry, ARRAY_GET_SIZE(arry));
    ARRAY_PRINT(arry, ARRAY_GET_SIZE(arry));
    printf("\n");

    printf("\n");

#if defined(__clang__)
#pragma clang unsafe_buffer_usage end
#endif /* defined(__clang__) */
}

/* Assert.h */
{
    int i;

    printf("Assert test\n");

    i = 2;
    ASSERT_MESSAGE(2 == i, "custom error message!");

    printf("\n");
}

/* Bcd.h */
{
    unsigned char pSrcBinArray[5] = { 01, 23, 45, 67, 89 };
    unsigned char pBinArray[5] = { 0, 0, 0, 0, 0 };
    unsigned char pBcdArray[5] = { 0, 0, 0, 0, 0 };

    printf("Bcd test\n");

    printf("BIN_IS_VALID(14)   = %d\n", BIN_IS_VALID(14));
    printf("BIN_IS_VALID(100)  = %d\n", BIN_IS_VALID(100));
    printf("BCD_IS_VALID(0x14) = %d\n", BCD_IS_VALID(0x14));
    printf("BCD_IS_VALID(0x1F) = %d\n", BCD_IS_VALID(0x1F));
    printf("BIN_TO_BCD(14)     = 0x%02X\n", (unsigned char)BIN_TO_BCD(14));
    printf("BCD_TO_BIN(0x14)   = %02d\n", BCD_TO_BIN(0x14));

    printf("%d ", ARRAY_BIN_TO_BCD(pBcdArray, pSrcBinArray, 5));
    printf("pBcdArray        = %02X %02X %02X %02X %02X\n", pBcdArray[0], pBcdArray[1], pBcdArray[2], pBcdArray[3], pBcdArray[4]);
    printf("%d ", ARRAY_BCD_TO_BIN(pBinArray, pBcdArray, 5));
    printf("pBinArray        = %02d %02d %02d %02d %02d\n", pBinArray[0], pBinArray[1], pBinArray[2], pBinArray[3], pBinArray[4]);

    printf("\n");
}

/* BitsPerType.h */
{
    printf("BitsPerType test\n");

    printf("char      Bits %zu\n", BITS_PER_TYPE(char));
    printf("short     Bits %zu\n", BITS_PER_TYPE(short));
    printf("int       Bits %zu\n", BITS_PER_TYPE(int));
    printf("long      Bits %zu\n", BITS_PER_TYPE(long));
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus >= 201103L
    printf("long long Bits %zu\n", BITS_PER_TYPE(long long));
#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus >= 201103L */

    printf("\n");
}

/* Bool.h */
{
    printf("Bool test\n");
    printf("GET_BOOL(10) = %d\n", GET_BOOL(10));
    printf("GET_BOOL(0)  = %d\n", GET_BOOL(0));

    printf("TRUE         = \"%s\"\n", BOOL_TO_STRING(TRUE));
    printf("FALSE        = \"%s\"\n", BOOL_TO_STRING(FALSE));

    printf("\n");
}

/* Cast.h */
{
    unsigned char byte = 1;
    unsigned short word = 2;
    unsigned short* usptr;

    printf("Cast test\n");

    byte = CAST(word, unsigned char);
    usptr = CAST_PTR(&word, unsigned short);

    ARG_USED(byte);
    ARG_USED(word);
    ARG_USED(usptr);

    printf("\n");
}

/* Concatenate.h */
{
    char Hello, World, HelloWorld;
    
    printf("Concatenate test\n");

    CONCATENATE(Hello, World) = 1;

    ARG_USED(Hello);
    ARG_USED(World);
    ARG_USED(HelloWorld);

    printf("\n");
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

    printf("\n");
}

/* Datatype.h */
{
    UINT32 ui32 = 0x12345678L;
    ULONG ul32 = 0L;

    printf("Datatype test\n");

    ul32 = ui32;

    ARG_USED(ul32);

    printf("\n");
}

/* DatatypeCpu.h */
{
    printf("DatatypeCpu test\n");

    printf("\n");
}

/* DatatypeWin.h */
{
    BYTE byte;
    WORD word;
    DWORD dword;
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L 
    QWORD qword;
#endif /*  defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */

    printf("DatatypeWin test\n");

    byte = MAKEBYTE(0x1, 0x2);
    printf("BYTE        = %02X\n", byte);
    printf("HINIBBLE    = %01X\n", (BYTE)HINIBBLE(byte));
    printf("LONIBBLE    = %01X\n", (BYTE)LONIBBLE(byte));
    printf("\n");

    word = MAKEWORD(0x12, 0x34);
    printf("WORD        = %04X\n", word);
    printf("HIBYTE      = %02X\n", (BYTE)HIBYTE(word));
    printf("LOBYTE      = %02X\n", (BYTE)LOBYTE(word));
    printf("\n");

    dword = MAKEDWORD(0x1234, 0x5678);
    printf("DWORD       = %08lX\n", (unsigned long)dword);
    printf("HIWORD      = %04X\n", (WORD)HIWORD(dword));
    printf("LOWORD      = %04X\n", (WORD)LOWORD(dword));
    printf("\n");

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L 

    qword = MAKEQWORD(0x12345678ll, 0x9ABCDEF0ll);
    printf("QWORD       = %016llX\n", qword);
    printf("HIDWORD     = %08X\n", (DWORD)HIDWORD(qword));
    printf("LODWORD     = %08X\n", (DWORD)LODWORD(qword));
    printf("\n");

#endif /*  defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */

    printf("\n");
}

/* Debug.h */
{
    printf("Debug test\n");

    DEBUG_MESSAGE("debug message");

    printf("\n");
}

/* Dump.h */
{
    unsigned char ucStr[] = "abc";

    printf("Dump test\n");

    PRINT_VARIABLE((int)1);
    PRINT_VARIABLE_U((unsigned int)1);

    PRINT_VARIABLE_L((long)1L);
    PRINT_VARIABLE_UL((unsigned long)1L);

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L 
    PRINT_VARIABLE_LL((long long)1LL);
    PRINT_VARIABLE_ULL((unsigned long long)1LL);
#endif

    PRINT_VARIABLE_SIZE_T((size_t)1);

    PRINT_POINTER((void*)ucStr);

    PRINT_STRING(ucStr);

    printf("\n");
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

    printf("\n");
}

/* File.h */
#if defined(__clang__)
#pragma clang unsafe_buffer_usage begin
#endif /* defined(__clang__) */
{
    printf("File test\n");

    printf("FILE_SEPARATOR = '%c'\n", FILE_SEPARATOR);

    printf("FILE_SHORT = %s\n", FILE_SHORT);

    printf("\n");
}
#if defined(__clang__)
#pragma clang unsafe_buffer_usage end
#endif /* defined(__clang__) */

/* Func.h */
{
    func__("main");

    printf("Func test\n");

    printf("%s\n", FUNC_NAME(__func__));

    printf("\n");
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

    printf("\n");
}

/* Paste.h */
{
    printf("Paste test\n");

    printf("str + ing = %s\n", PASTE("str", "ing"));

    printf("\n");
}

/* StdargExt.h */
{
    printf("StdargExt test\n");

    printf("\n");
}

/* Stringify.h */
{
    int variable = 5;

    printf("Stringify test\n");

    printf("var = \"%s\" = %d\n", STRINGIFY(variable), variable);

    printf("\n");
}

/* Swap.h */
{
    long long1 = 5;
    long long2 = 7;
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L 
    long long longlong1 = 5;
    long long longlong2 = 7;
#endif

    printf("Swap test\n");

    printf("%s = %ld\n", STRINGIFY(long1), long1);
    printf("%s = %ld\n", STRINGIFY(long2), long2);
    SWAP(long1, long2);
    printf("after SWAP\n");
    printf("%s = %ld\n", STRINGIFY(long1), long1);
    printf("%s = %ld\n", STRINGIFY(long2), long2);

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L 
    printf("%s = %lld\n", STRINGIFY(longlong1), longlong1);
    printf("%s = %lld\n", STRINGIFY(longlong2), longlong2);
    SWAP(longlong1, longlong2);
    printf("after SWAP\n");
    printf("%s = %lld\n", STRINGIFY(longlong1), longlong1);
    printf("%s = %lld\n", STRINGIFY(longlong2), longlong2);
#endif

    printf("\n");
}

/* Trace.h */
{
    printf("Trace test\n");

    TRACE_MESSAGE("trace message");

    printf("\n");
}

return(0);

INT_MAIN_ARGC_ARGV_END
```


# History of changes ...
2025 04 04 ARRAY macros added
2025 04 04 BCD macros and functions added

