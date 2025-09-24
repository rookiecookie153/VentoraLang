#ifndef ARGS_H
#define ARGS_H

#include <stdbool.h>

typedef struct {
    char* filename;
    bool flag_verbose;
    bool flag_help;
} VT_Args;

void VT_parse_args(int argc, char **argv);

extern VT_Args VT_mainargs;

#endif