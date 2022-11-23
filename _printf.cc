#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _printf - produces output according to a format
 * @format: a character string
 * Return: integer number of output
 */

int _printf(const char *format, ...)
{
	va_list nc_print;
	int i = 0, n_disp = 0, (*func)(va_list);

	va_start(nc_print, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			n_disp++;
		}
		else
		{
			func = _select_func(format[i + 1]);
			if (func != NULL)
			{
				i++;
				func(nc_print);
				n_disp++;
			}
		}
	}
	va_end(nc_print);
	return (n_disp);
}
