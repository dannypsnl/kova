# arm64

arm64 note

## Register

- general register
  1. x0-x30
  2. use w to read low 32 bits
  3. when write using w, high 32 bits will be set to zero
- float register
  1. v0-v31
  2. use b to access 8 bits
  3. use h to access 16 bits
  4. use s to access 32 bits
  5. use d to access 64 bits
  6. use q to access 128 bits
- special register
  1. pc: CPU
  2. sp/x31: stack pointer
  3. fp/x29: frame pointer
  4. lr/x30: stores the return address of function
  5. cpsr
  6. spsr
