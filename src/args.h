#ifndef ARGS_H
#define ARGS_H

typedef struct {
    char* filename;
    int flags;
} VT_Args;

typedef enum {
    VTF_ARG_HELP = 1 << 0,
    VTF_ARG_VERBOSE = 1 << 1
} VT_ArgFlags;

VT_Args VT_parse_args(int argc, char **argv);

#endif