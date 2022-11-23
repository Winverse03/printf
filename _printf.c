#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: A string
 * Return: the of characters printed
 */
int _printf(const char *format, ...)
{
	va_list nc_print;
	int i = 0, n_disp = 0, j = 0;
	int (*f)(va_list);

	if (!format)
		return (-1);
	va_start(nc_print, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			f = get_func(&format[++i]);
			if (f)
			{
				j = f(nc_print);
				i++;
			}
			else if (format[i] != ' ' && format[i])
				j = _putchar(format[i - 1]);
			else
			{
				va_end(nc_print);
				return (-1);
			}
		}
		else
			j = _putchar(format[i++]);
		if (j > 0)
			n_disp += j;
	}
	va_end(nc_print);
	return (n_disp);
}
