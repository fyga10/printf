#ifndef MAIN_
#define MAIN_

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
int numbers(int x);
int _printf(const char *format, ...);
int _putchar(char c);
typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;

#endif