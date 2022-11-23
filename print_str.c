#include "main.h"

/**
 * print_str - prints string
 * @n_print: arguments
 * Return: The number of printed character
 */
int print_str(va_list n_print)
{
	int n = 0;
	char *str = va_arg(n_print, char *);

	if (str == NULL)
		str = "(null)";

	while (*str && _putchar(*str++) != -1)
		n++;

	return (n);
}
