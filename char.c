#include "main.h"

/**
 * var_c - print char
 * @list: set va_list
 * Return: numbers of chars
 */
int var_c(va_list list)
{
	int c;
c = va_arg(list, int);
	_putchar (c);
	return (1);
}

/**
 * var_s - Print string
 * @list: set va_list
 * Return: count of chars
 */

int var_s(va_list list)
{
	int count = 0;
	char *s = NULL;

	s = va_arg(list, char *);

	if (s == NULL)
	{
		_putchar(40);
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(41);
		return (6);
	}
	while (*s)
	{
		_putchar(*s);
		s++;
		count++;
	}
	return (count++);
}
