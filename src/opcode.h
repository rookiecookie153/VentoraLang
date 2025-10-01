#ifndef OPCODE_H
#define OPCODE_H

#define VT_SIZE_OP 6

typedef enum {
    // math
    VTOP_ADD,
    VTOP_SUB,
    VTOP_MUL,
    VTOP_DIV,

    // log
    VTOP_PRINT,

    // the NO MORE instruction
    VTOP_HALT
} VT_opcode;

#endif