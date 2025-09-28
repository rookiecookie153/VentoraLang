#include <stdio.h>
#include "args.h"
#include "log.h"
#include "vm.h"
#include "opcode.h"

// MAJOR / MINOR / PATCH
#define VT_VERSION "0.0.0"

int main(int argc, char **argv) {
    VT_parse_args(argc, argv);
    
    VT_log("VENTORA LANG - %s\n", VT_VERSION);

    VT_virt vm;
    VTV_init(&vm);

    int program[] = {
        VTOP_PUSH, 2,
        VTOP_PUSH, 2,
        VTOP_ADD,
        VTOP_PRINT,
        VTOP_HALT
    };

    VTV_exec(&vm, program);
    
    return 0;
}