#include "log.h"
#include <stdio.h>
#include <stdarg.h>

int VT_verbosity = 0;

void VT_log(int level, const char *fmt, ...) {
    if (level > VT_verbosity) { return; };
    va_list args;
    va_start(args, fmt);
    vfprintf(stderr, fmt, args);
    va_end();
}