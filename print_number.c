#include "main.h"
int numbers(int x)
{
if (x < 0)
{
x = -x;
_putchar(45);
}
if (x / 10)
{
numbers(x / 10);
}
_putchar(48 + x % 10);
return(x);
}