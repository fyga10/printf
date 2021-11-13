#include "main.h"
/**
 * _printf - Print something according the format
 *
 * @format: Elements format.
 *
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int index = 0;
	int percents = 0;
	int j = 0;
	int v = 0;
	int  count = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(ap, format);
	for (; format[index]; index++)
	{
		if (format[index] == '%')
		{
			v = perc(format[index + 1]);
			if (v == 1)
			{
				percents += 2;
				j += find_fun(format[index + 1], ap);
				index += 2;
			}
			else if (format[index + 1] == '%')
			{
				index++;
				percents++;
			}
		}
		if (format[index] != '\0' && v == 0)
			_putchar(format[index]);
		else
			index--;
		v = 0;
	}
	index -= percents;
	va_end(ap);
	count = j + index;
	return (count);
}

/**
 * perc - Case indentifier.
 * @u: recive a character and do the comparsion.
 * Return: 1 if true and 0 if false.
 */

int perc(char u)
{
	char ptr[] = {'c', 'i', 'd', 's'};
	int count = 0;

	for (; count < 4; count++)
	{
		if (ptr[count] == u)
		{
			return (1);
		}
	}
	return (0);
}

/**
 * find_fun - find function
 * @m: receive next char
 * @ap: format's list.
 * Return: correct function
 */

int find_fun(char m, va_list ap)
{
	int (*ptr_f)(va_list list);
	int i = 0;
	int j = 0;

	for (; var_t[i].var; i++)
	{
		if (m == var_t[i].var[0])
		{
			ptr_f = var_t[i].c;
			break;
		}
	}
	j = ptr_f(ap);
	return (j);
}
