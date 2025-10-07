// stdio_fix.cpp
#include <stdio.h>

extern "C" {
FILE* __imp___iob_func(void) {
  static FILE iob[] = {*stdin, *stdout, *stderr};
  return iob;
}
}