#ifndef OPCODE_H
#define OPCODE_H

#define VT_SIZE_OP 4

#define VT_SIZE_A 8
#define VT_SIZE_B 8
#define VT_SIZE_C 8

#define VT_POS_OP 0
#define VT_POS_A (VT_POS_OP + VT_SIZE_OP)
#define VT_POS_B (VT_POS_A + VT_SIZE_A)
#define VT_POS_C (VT_POS_B + VT_SIZE_B)

#define VT_MAKE_iABC(i,a,b,c) ((i << 26) | (a << (VT_SIZE_A)) | b | c)

typedef enum {
    VTOP_TYPE_iABC
} VT_optype;

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