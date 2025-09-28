#ifndef OPCODE_H
#define OPCODE_H

typedef enum {
    // stack
    VTOP_PUSH,
    VTOP_POP,

    // math
    VTOP_ADD,
    VTOP_SUB,

    // log
    VTOP_PRINT,

    // the NO MORE instruction
    VTOP_HALT
} VT_opcode;

#endif