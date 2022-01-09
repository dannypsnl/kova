.global printNumberEntry
printNumberEntry:
    mov x15, #10
    mov x12, x0
    // print prepare
    // fd(x0) = 1(stdout)
    mov x0, #1
    // len(x2) = 1
    mov x2, #1
    // Unix write system call
    mov x16, #4
    // x17 for store shift
    mov x17, #0
save_loop:
    // number = x12
    // x14 = x12 / 10
    // now x14 is rounded-down quotient of x12
    udiv x14, x12, x15
    // x13 = x14 * 10 - x12
    msub x13, x14, x15, x12
    // store rounded-down quotient to x12 for next loop
    mov x12, x14
    // digit to string
    add x13, x13, #48
    strb w13, [sp, x17]
    sub x17, x17, #4
    // loop part
    cmp x12, #0
    b.eq print_loop
    b save_loop
print_loop:
    add x17, x17, #4
    add x1, sp, x17
    svc #0
    cmp x17, #0
    b.eq exit
    b print_loop
exit:
    // print newline
    mov x13, #10
    strb w13, [sp]
    mov x1, sp
    svc #0
    ret
