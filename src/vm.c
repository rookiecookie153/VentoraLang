#include <stdio.h>
#include "vm.h"
#include "opcode.h"

void VTV_pushint(VT_virt *vm, int x) {
    vm->stack[vm->sp++] = x;
}

int VTV_popint(VT_virt *vm) {
    return vm->stack[--vm->sp];
}

void VTV_init(VT_virt *vm) {
    vm->sp = 0;
}

void VTV_exec(VT_virt *vm, int *program) {
    uint32_t ip = 0;
    for (;;) {
        switch (program[ip++]) {
            case VTOP_PUSH:
                VTV_pushint(vm, program[ip++]);
                break;
            case VTOP_POP:
                break;
            case VTOP_ADD:
                int a = VTV_popint(vm);
                int b = VTV_popint(vm);
                VTV_pushint(vm, a + b);
                break;
            case VTOP_PRINT:
                printf("%d\n", VTV_popint(vm));
                break;
            case VTOP_HALT:
                return;
        }
    }
}