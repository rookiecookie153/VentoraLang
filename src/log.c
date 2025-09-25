#include <stdio.h>
#include <stdarg.h>
#include "log.h"
#include "args.h"

void VT_log(const char *fmt, ...) {
    if (!VT_mainargs.flag_verbose) { return; };
    va_list args;
    va_start(args, fmt);
    vfprintf(stderr, fmt, args);
    va_end(args);
}