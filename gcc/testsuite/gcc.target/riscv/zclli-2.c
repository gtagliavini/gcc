/* { dg-do compile } */
/* { dg-require-effective-target riscv_zclli } */
/* { dg-options "-march=rv32gc_zclli -mabi=ilp32" } */

int f(void) { return 0x12345; }

/* { dg-final { scan-assembler-times "cl\\.li\\s" 0 } } */
