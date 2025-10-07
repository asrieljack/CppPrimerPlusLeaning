// compatibility.h
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// 为新版 MinGW 提供缺失的 __iob_func 符号
#if defined(__MINGW32__) && !defined(__USE_MINGW_ANSI_STDIO)
FILE* __imp___iob_func(void);
#endif

#ifdef __cplusplus
}
#endif