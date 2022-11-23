#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <limits.h>

/**
 * _printf - prints formatted data to stdout
 * @format: string that contains the format to print
 * Return: number of characters written
 */

int _printf(const char * const format, ...)
{
	va_list nc_print;
	int i = 0, n_disp = 0;
	int (*func)(va_list);

	va_start(nc_print, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			func = _select_func(format[i + 1]);
			if (func != NULL)
			{
			n_disp += func(nc_print);
			i++;
			}
		}
		else
		{
			_putchar(format[i]);
			n_disp++;
		}
		i++;
	}
	va_end(nc_print);
	return (n_disp);
}
