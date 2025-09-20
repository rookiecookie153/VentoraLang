#include "args.h"

VT_Args VT_parse_args(int argc, char **argv) {
    VT_Args args;

    if (argc < 2) {
        args.flags = args.flags & VTF_ARG_HELP;
        return args;
    }
    
    return args;
}