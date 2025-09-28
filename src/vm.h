#ifndef VM_H
#define VM_H

#include <stdint.h>

typedef struct {
    int stack[256];
    uint32_t sp;
} VT_virt;

void VTV_init(VT_virt *vm);
void VTV_exec(VT_virt *vm, int *program);
void VTV_pushint(VT_virt *vm, int x);
int VTV_popint(VT_virt *vm);

#endif