#include <stdio.h>
#include "vm.h"
#include "opcode.h"
#include "log.h"

void VTV_init(VT_virt *vm) {
    
}

void VTV_exec(VT_virt *vm, VT_instruction *program) {
    VT_instruction ip = 0;
    for (;;) {
        switch (program[ip++] >> 26) {

            // MATH OPS
            case VTOP_ADD:
                VT_log("ADD\n");
                break;
            case VTOP_SUB:
                VT_log("SUBTRACT\n");
                break;
            case VTOP_MUL:
                VT_log("MULTIPLY\n");
                break;
            case VTOP_DIV:
                VT_log("DIVIDE\n");
                break;
            
            // DEBUG OPS
            case VTOP_PRINT:
                VT_log("PRINT\n");
                break;
            
            // UTIL OPS
            case VTOP_HALT:
                VT_log("HALT\n");
                return;
        }
    }
}