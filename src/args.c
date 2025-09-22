#include <stdio.h>
#include <unistd.h> 
#include "args.h"

VT_Args VT_parse_args(int argc, char **argv) {
    VT_Args args;

    if (argc < 2) {
        args.flags = VTF_ARG_HELP;
        return args;
    }

    int opt;
    while ((opt = getopt(argc, argv, "hv")) != -1) {
        switch (opt) {
            case 'h':
                args.flags = args.flags | VTF_ARG_HELP;
                break;
            case 'v':
                args.flags = args.flags | VTF_ARG_VERBOSE;
                break;
            case '?':
                break;
        }
    }
    
    return args;
}