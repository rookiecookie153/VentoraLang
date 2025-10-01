#include <stdio.h>
#include "vm.h"
#include "opcode.h"
#include "log.h"

void VTV_init(VT_virt *vm) {
    
}

void VTV_exec(VT_virt *vm, uint32_t *program) {
    uint32_t ip = 0;
    for (;;) {
        switch (program[ip++] >> 26) {
            case VTOP_ADD:
                VT_log("ADD\n");
                break;
            case VTOP_SUB:
                VT_log("SUB\n");
                break;
            case VTOP_PRINT:
                VT_log("PRINT\n");
                break;
            case VTOP_HALT:
                VT_log("HALT\n");
                return;
        }
    }
}