# Variables Types

### Character Types
| Type            | Size   | Declaration Example     | Notes                                      |
|-----------------|--------|-------------------------|--------------------------------------------|
| `char`          | 1 byte | `char c = 'A';`          | Usually -128 to 127 or 0 to 255            |
| `signed char`   | 1 byte | `signed char sc = -10;` | -128 to 127                                |
| `unsigned char` | 1 byte | `unsigned char uc = 200;`| 0 to 255                                   |

### Integer Types
| Type                  | Size    | Declaration Example              | Range (approx.)              |
|-----------------------|---------|----------------------------------|------------------------------|
| `short` / `short int` | 2 bytes | `short s = 1000;`                | -32,768 to 32,767            |
| `unsigned short`      | 2 bytes | `unsigned short us = 40000;`     | 0 to 65,535                  |
| `int`                 | 4 bytes | `int i = 42;`                    | -2 billion to 2 billion      |
| `unsigned int`        | 4 bytes | `unsigned int ui = 3000000000;`  | 0 to ~4 billion              |
| `long` / `long int`   | 8 bytes | `long l = 1234567890L;`          | ±9 quintillion             |
| `unsigned long`       | 8 bytes | `unsigned long ul = 123UL;`      | 0 to ~18 quintillion         |
| `long long`           | 8 bytes | `long long ll = 123LL;`          | Same as long on most systems |
| `unsigned long long`  | 8 bytes | `unsigned long long ull = 123ULL;`| 0 to ~18 quintillion        |

### Floating-Point Types
| Type          | Size     | Declaration Example           | Notes                    |
|---------------|----------|-------------------------------|--------------------------|
| `float`       | 4 bytes  | `float f = 3.14f;`            | Single precision         |
| `double`      | 8 bytes  | `double d = 3.14159;`         | Double precision         |
| `long double` | 16 bytes | `long double ld = 3.14L;`     | Extended precision       |

### Boolean Type
| Type     | Size   | Declaration Example     | Notes                          |
|----------|--------|-------------------------|--------------------------------|
| `_Bool`  | 1 byte | `_Bool flag = 1;`       | 0 or 1                         |
| `bool`   | 1 byte | `bool is_ready = true;` | Needs `#include <stdbool.h>`   |

### Other
| Type     | Declaration Example     | Notes                                      |
|----------|-------------------------|--------------------------------------------|
| `void`   | —                       | Not a real storage type                    |
| `size_t` | `size_t len = 100;`     | Unsigned type for sizes (usually 8 bytes)  |