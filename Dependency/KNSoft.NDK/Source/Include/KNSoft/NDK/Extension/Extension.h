﻿#pragma once

#ifdef _KNSOFT_NDK_NO_EXTENSION
#pragma message("KNSoft.NDK: Extension.h is included but _KNSOFT_NDK_NO_EXTENSION is defined.")
#endif

#include "../NT/MinDef.h"

// Gets equality of two value after masked
#define IS_EQUAL_MASKED(val1, val2, mask) (!(((val1) ^ (val2)) & (mask)))
// Sets or removes a flag from a combination value
#define COMBINE_FLAGS(val, uflag, bEnable) ((bEnable) ? ((val) | (uflag)) : ((val) & ~(uflag)))
// Test combined flags
#define TEST_FLAGS(val, flags) (((val) & (flags)) == (flags))

#pragma region Size in bytes

#define BYTE_BIT 8UL
#define KB_TO_BYTES(x) ((x) * 1024UL)
#define MB_TO_KB(x) ((x) * 1024UL)
#define MB_TO_BYTES(x) (KB_TO_BYTES(MB_TO_KB(x)))
#define GB_TO_MB(x) ((x) * 1024UL)
#define GB_TO_BYTES(x) (MB_TO_BYTES(GB_TO_MB(x)))
#define TB_TO_GB(x) ((x) * 1024UL)
#define TB_TO_BYTES(x) (GB_TO_BYTES(TB_TO_GB(x)))

#if defined(_WIN64)
#define SIZE_OF_POINTER 8
#else
#define SIZE_OF_POINTER 4
#endif

#pragma endregion

#pragma region Limitations

#define MAX_CLASSNAME_CCH       256
#define MAX_CIDENTIFIERNAME_CCH 247
#define MAX_ATOM_CCH            255
#define MAX_REG_KEYNAME_CCH     255
#define MAX_REG_VALUENAME_CCH   16383
#define POINTER_CCH             (sizeof(PVOID) * 2 + 1)
#define HEX_RGB_CCH             8 // #RRGGBB

#pragma endregion

#pragma region Alignments

#define CODE_ALIGNMENT 0x10
#define STRING_ALIGNMENT 0x4

#pragma endregion

#pragma region String

#define _STR_CCH_LEN(quote) (ARRAYSIZE(quote) - 1)

#define ASCII_CASE_MASK 0b100000
#define UNICODE_EOL ((DWORD)0x000A000D)
#define ANSI_EOL ((WORD)0x0A0D)

#pragma endregion

#pragma region Any-size array

#define ANYSIZE_STRUCT_SIZE(structure, field, size) UFIELD_OFFSET(structure, field[size])

#define DEFINE_ANYSIZE_STRUCT(varName, baseType, arrayType, arraySize) struct {\
    baseType BaseType;\
    arrayType Array[(arraySize) - 1];\
} varName

#pragma endregion
