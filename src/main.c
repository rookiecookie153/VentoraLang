#include <stdio.h>
#include "args.h"
#include "log.h"

// MAJOR / MINOR / PATCH
#define VT_VERSION "0.0.0"

int main(int argc, char **argv) {
    VT_parse_args(argc, argv);
    
    VT_log("VENTORA LANG - %s\n", VT_VERSION);
    
    return 0;
}