# _printf
This is our own implementation of the _printf function of the C programming language. This function returns the number of characters printed and writes the output to stdout.  includes the conversion specifiers : c, s, %, d, x, X, u, o, and i.

### Example
#include "holberton.h"


_printf("The %s jumped %d times! -%c", "dog", 7, 'C');

output : The dog jumped 7 times! -C

### Requirements
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* Your code should use the Betty style. 
* You are not allowed to use global variables
* No more than 5 functions per file

### Authorized functions and macros
* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)

#### Suggestion
Our program does not handle buffer handling, flag characters, field width, precision, or length modifiers.

##### Created by **_Carlos Rincon_** and **_Frank Giraldo_**
