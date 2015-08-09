# ocelot2
Second version of a self-compiling compiler written in a non-trivial subset of C.  
This is just a side project I'm doing for fun, so progress will be unsteady as I'm only working on this project when I got time.

## Status
Part currently working on: scanner

## Features
* LL(1) (although in some cases a lookahead will be used to keep the code more readable/reusable)
* Emulator (to execute the binary, RISC without any additional commands)
* Separate compilation (Linker)
* Preprocessor (sort of)
* Arrays
* Records
* Arithmetic expressions
* Conditionals/Boolean expressions
* Procedures/Functions
* Bit operations
* File I/O
* Type checking
* Some optimization techniques (e.g. constant folding, lazy evaluation, ...)
