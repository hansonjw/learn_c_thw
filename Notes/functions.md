# Functions


### Pointers to Functions
Just ike creating pointers to structs, strings, and arrays,
you can point a pointer at a function too.  The main use
for this is to pass callbacks to other functions, or to simulate
classes and objects

#### syntax
`int (*POINTER_NAME)(int a, int b)