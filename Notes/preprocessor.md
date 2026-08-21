# Preprocessor
The preprocessor is responsible for processing every line that begins with # and performing the text transformations those directives request.
- The preprocessor handles all # directives:
    - It is part of the compilation process
    - reads and acts on every line that starts with #
- After the preprocessor finishes its job, all the # lines are gone
- What remains is pure C code that the actual compiler can understand


### Example Directives
- `#include "file.h"` Finds the file and pastes its entire contents in place of the #include line
- `#define NAME value` Remembers a text-substitution rule. Later, every time it sees NAME, it replaces it with value
- `#ifndef`, `#ifdef`, `#endifConditionally` includes or skips chunks of text
- `#if`, `#else`, `#elifMore` powerful conditional inclusion
`#pragma` Special instructions (compiler-specific)
- `#error`, `#warning` Forces an error or warning message

### In Practice
`gcc` performs several stages behind the scenes:
- Preprocessor (`cpp`) – handles all the `#` directives
- Compiler proper – turns the preprocessed C code into assembly
- Assembler – turns assembly into object code (.o files)
- Linker – combines object files and libraries into the final executable binary


### Clarification on Terminology

***Binary***: Any file that contains machine code (not text): `.o` files, `libraries`, `executables`

***Executable***: A binary that the operating system can run directly: `./ex19`, `/bin/ls`


### C Preprocessor documentation

https://gcc.gnu.org/onlinedocs/cpp/

https://en.cppreference.com/c/preprocessor