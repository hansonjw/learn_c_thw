# Pointers

A pointer is a variable that contains the address of a variable
Pointers and arrays are closely related

## Chapter 5, Kernighan and Ritchie
A pointer is a partition of memory that can hold an *address*

`char* ip` declare the variable `ip` as a pointer to a `char`

`char c = 'x'` declare the variable `c`

`ip = &c` Assign `ip` the address of c

`*` unary operator, when applied to a pointer, accesses the object the pointer points to

`printf("ip is pointing to the character: %c", *ip)` print what `ip` is pointing at

The declaration of the pointer ip `int *ip;` is intended as a mnemonic
it tells the compliler that the expression `*ip` evaluates to an `int`, remember the `*` unary operator
This reasoning applies to function declarations as well. (!!) for example: `int somefunction(int b)`
Another way to think about it is to work backwards: `ip` is a pointer `x` to an `int`

Note the implication that a pointer is constrained to point to a 
particular kind of object: every pointer points to a specific data type.
There is one exception: a "pointer to void"

Both descriptions are correct — they mean the same thing:

`&x` is the address of `x`

`&x` is a pointer to `x`

In C, a pointer is an address (with a type attached).


## Notes from Zed

When you have `somearray[i]` you're indexing into the array `somearray`. 
If `i` is an index, then what's `somearray`? To C, `somearray` is a location
in the computer's memory where all of these ***items*** start. `somearray`
is ***also*** an address and the C compiler will replace `somearray` anywhere
you type it with the address of the ery first integer in ages

This leads to a certain realization: C thinks your whole computer
is one massive array of bytes.  Obviously, this isn't very useful, but
then what C does is layer on top of this massive array of bytes
the concept of type and sizes of those types.

A pointer is simply an address pointing somewhere inside the computer's
memory with a type specifier so that you get the right size of data with it.

C knows where pointers are pointing, knows the data type they point at,
the size of those types, and how to get the data for you.

### Pointer Lexicon (from Zed)

`type *ptr` - A pointer of `type` named `ptr`

`*ptr` The value of whatever `ptr` is pointed at

`*(ptr + i)` The value of (whatever `ptr` is pointed at plus `i`)

`&thing` The address of thing

`type *ptr = &thing` A pointer of `type` named `ptr` se to the address of a `thing`

`ptr++` Increment where ptr points (yikes!)



## Grok
“Pointer” is more of a category of types rather than a single type.
More precise way to think about it:

`int` is a type

`char` is a type

`int *` is a type (pointer to int)

`char *` is a type (pointer to char)

`char **` is a type (pointer to a pointer to char)