#ifndef MAIN_
#define MAIN_

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int numbers(long int x);
int _printf(const char *format, ...);
int _putchar(char c);
int find_fun(char m, va_list ap);
int perc(char u);
int var_c(va_list list);
int var_i(va_list list);
int var_s(va_list list);
int var_d(va_list list);
/**
 * struct var - Struct var
 * @var: operator
 * @c: includd function
 */
typedef struct var
{
	char *var;
	int (*c)(va_list ap);
} var;
static const var var_t[] = {
	{"c", var_c},
	{"i", var_i},
	{"d", var_d},
	{"s", var_s},
	{NULL, NULL},
};
#endif
