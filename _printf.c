#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - prints format of parameters
 * @format: string that contains the format to print
 * Return: number of characters given
 */

int _printf(const char *format, ...)
{
	va_list nc_print;
	int i = 0;
	int j = 0;
	int n_displayed = 0;
	char *str = NULL;

	va_start(nc_print, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			n_displayed++;
		}
		else
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(nc_print, int));
				i++, n_displayed++;
			}
			else if (format[i + 1] == 's')
			{
				i++;
				str = va_arg(nc_print, char *);
				while (str[j] != '\0')
				{
					j = 0;
					_putchar(str[j]);
					j++, n_displayed++;
				}
			}
			else if (format[i + 1] == '%')
			{
				_putchar('%');
				i++, n_displayed++;
			}
			i++;
		}
	}
	va_end(nc_print);
	return (0);
}
