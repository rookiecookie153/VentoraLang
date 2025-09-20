#include <stdio.h>
#include "args.h"

int main(int argc, char **argv) {
    VT_Args args = VT_parse_args(argc, argv);

    printf("Hello!\n");
    
    return 0;
}