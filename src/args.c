#include <stdio.h>
#include <unistd.h> 
#include "args.h"
#include "log.h"

VT_Args VT_mainargs;

void VT_parse_args(int argc, char **argv) {
    if (argc < 2) {
        VT_mainargs.flag_help = true;
        return;
    }

    int opt;
    while ((opt = getopt(argc, argv, "hv")) != -1) {
        switch (opt) {
            case 'h':
                VT_mainargs.flag_help = true;
                break;
            case 'v':
                VT_mainargs.flag_verbose = true;
                break;
            case ':':
                printf("No argument provided for option %c\n", optopt);
                break;
            case '?':
                VT_log("Invalid option -%c\n", optopt);
                return;
            default:
                printf("ok what the jit\n");
                break;
        }
    }

    for (; optind < argc; optind++) {
        printf("%s\n", argv[optind]);
    }
}