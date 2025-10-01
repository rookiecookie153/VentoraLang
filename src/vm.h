#ifndef VM_H
#define VM_H

#include <stdint.h>
#include "opcode.h"

typedef uint32_t VT_instruction;

typedef enum {
    TYPE_INT,
    TYPE_FLOAT,
    TYPE_STRING,
    TYPE_PTR
} VT_valuetype;

typedef struct {
    VT_valuetype type;
    union {
        int i;
        float f;
        char* s;
        void* p;
    } data;
} VT_register;

typedef struct {
    VT_register registers[256];
} VT_virt;

void VTV_init(VT_virt *vm);
void VTV_exec(VT_virt *vm, VT_instruction *program);

#endif