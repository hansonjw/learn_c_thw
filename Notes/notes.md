# Notes on C

### Core Tools:
- `cc / gcc` — The C compiler (you have this)
- `gdb` — The debugger (you just installed)
- `make` — Build automation (you have this)


### printf

#### Basic Structure
`printf("format string", value1, value2, ...);`

The *"format string"* can contain:
- Normal text
- Format specifiers (starting with %) as placeholders for variables

#### Common Format Specifiers
`%d` Integer (decimal)

`%f` Floating point number

`%s` String

`%c` Single character

`%p` Pointer address

`%u` Unsigned integer


### Functions
```C
int main(int argc, char *argv[])
```

`int argc` is the argument count

`char *argv[]` Argument vector, an array of strings containing the actual arguments

#### Example
```C
./ex08 Justin 49 Oregon
```
- `argc` = 4 (the program name + 3 arguments)
- `argv[0]` = "./ex03" (program name)
- `argv[1]` = "Justin"
- `argv[2]` = "49"
- `argv[1]` = "Oregon"
