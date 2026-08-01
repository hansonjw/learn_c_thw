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

"Since C passes arguments to functions by value, there is no direct way for the called function to alter a variable in the calling function" - pg 95
- This means that when you call a function, the function receives a copy of the value, not the original variable.

"Pointer arguments enable a function to access and change objects in the function that called it"
- If you pass the address of a variable (a pointer), the function can reach back into the caller’s memory and change the original.

Why C was designed this way
- Passing by value is simple and safe by default. ***Functions can’t accidentally mess up the caller’s data.***
- When you do want a function to modify something, you explicitly pass a pointer. ***This makes the intention clear.***

There is one difference between an array name and a pointer that must be kept in mind.
A pointer is a variable, so pa=a and pa++ are legal.  But an array name is not a variable;
constructions like `a = pa` and `a++` are illegal.

```C
pa = a;           // fine – make pa point to the start of the array
pa = &a[0];       // same thing
pa++;             // fine – move the pointer to the next element
pa = pa + 3;      // fine

a = pa;           // ERROR – you can’t assign to an array name
a++;              // ERROR – you can’t increment an array name
a = a + 1;        // ERROR
```

When an array name is passed to a function, what is passed is the location of the initial element.

In C there are essentially no guardrails for array and pointer bounds. C does not check array bounds at runtime.
- The compiler will not stop you.
- The runtime will not stop you.
- You can read or write anywhere in memory the operating system allows your process to touch.

This is both:
- One of C’s greatest strengths (speed, control, simplicity)
- One of its greatest dangers (buffer overflows, security holes, hard-to-find bugs)

Languages like Python, Java, Rust, and Go put up strong guardrails. C deliberately does not.
***That’s why so much emphasis is placed on careful pointer and array handling when learning C.***

Some clever, intense, terse C syntax...
```C
// strcpy: copy to to s; pg 105, K&R
void strcpy(char *s, char *t)
{
    while ((*s++ = *t++) != '\0');
}

// equivalent
void strcpy(char *s, char *t)
{
    while (*t != '\0') {
        *s = *t;
        s++;
        t++;
    }
    *s = '\0';          // copy the final null terminator
}

// also equivalent
void strcpy(char *s, char *t)
{
    while (*s++ = *t++);
}
```

This is one of those C rules you just have to learn.
In C, an assignment is an expression, and every expression has a value.
The value of an assignment expression is the value that was assigned.



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