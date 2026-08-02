# malloc

malloc returns a pointer to a raw, untyped block of memory.

### usage
`malloc(size_of_memory_needed_bytes)`

### example
`int *numbers = malloc(20*sizeof(int));`

This code essentially says:
allocate 20 bytes of memory,
this memory block will hold an array of ints

The coder needs to keep track of what `type` of variable will
go into each array element and use it in the variable declaration

