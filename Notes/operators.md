# C Operators
An operator in C is a symbol that tells the compiler to
perform a specific operation on one or more values
(called operands)

### Arithmetic Operators
- Add `+`
- Subtract `-`
- Multiply `*`
- Divide `/`
- Modulus `%`
- Increment `++`
- Decrement `--`

### Relational Operators
- Equal `==`
- Not equal `!=`
- Greater than `>`, or equal `>=`
- Less than `<`, or equal `>=`

### Logical Operators
- Logical *and* `&&`
- Logical *or* `||`
- Logical *not* `!`
- Logical *ternary* `? :`, a compact way to write a simple `if-else`\n
    `condition ? value_if_true : value_if_false`
    ```C
    int age = 18;
    const char *status = (age >= 18) ? "adult" : "minor";
    printf("You are a %s.\n", status);
    ```

### Bitwise Operators
- Bitwise *and* `&`
- Bitwise *or* `|`
- Bitwise *xor* `^`
- Bitwise *one's complement* `~`, flips all the bits (0->1, 1->0).

### Assignment Operators
- Assign equal `=`
- Assign plus-equal `+=`
- Assign minus-equal `-=`
- Assign multiply-equal `*=`
- Assign divide-equal `/=`
- Assign modulus-equal `%=`
- Assign shift-left-equal `<<=`
- Assign shift-right-equal `>>=`
- Assign &-equal `&=`
- Assign xor-equal `^=`
- Assign or-equal `|=`

### Data Operators
- Get the size of `sizeof()`, how many bytes in memory for a type or variable
- Array subscript `[]`
- The address of `&`
- The value of `*`
- Structure deference `->`
- Structure reference `.`

### Miscellaneous Operators
- Comma `,`
- Parentheses `()`
- Braces `{}`
- Colon `:`
- Single line comment start `//`
- Multi-line comment start `/*`
- Multi-line comment end `*/`