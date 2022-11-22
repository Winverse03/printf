#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: A string
 * Return: the of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, n_disp = 0, j = 0;
	int (*c)(va_list);
	
	va_list nch;
	if (!format)
		return (-1);
	
	va_start(nch, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			c = get_func(&format[++i]);
			if (c)
			{
				j = c(nch);
				i++;
			}
			else if (format[i] != ' ' && format[i])
				j = _putchar(format[i - 1]);
			else
			{
				va_end(nch);
				return (-1);
			}
		}
		else
			j = _putchar(format[i++]);
		if (j > 0)
			n_disp += j;
	}
	va_end(nch);
	return (n_printed);
}
