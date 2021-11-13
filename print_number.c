#include "main.h"
/**
 * numbers - print numbers
 * @x: number to print
 * Return: count of numbers
 */
int numbers(long int x)
{
int c = 0;
if (x < 0)
{
x = -x;
_putchar(45);
c++;
}
if (x / 10)
{
numbers(x / 10);
}
_putchar(48 + (x % 10));
while (x / 10)
{
c++;
x = x / 10;
}
c++;
return (c++);
}
/**
 * var_i - prints integers
 * @list: s
 * Return: int
 */
int var_i(va_list list)
{
int a = 0, co = 0;
a = va_arg(list, int);
co = numbers(a);
return (co);
}
/**
 * var_d - prints decimal number
 * @list: s
 * Return: int
 */
int var_d(va_list list)
{
int a = 0, co = 0;
a = va_arg(list, int);
co = numbers(a);
return (co);
}
