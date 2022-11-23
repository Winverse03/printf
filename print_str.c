#include "main.h"

/**
 * print_str - prints string
 * @nc_print: arguments
 * Return: The number of printed character
 */
int print_str(va_list nc_print)
{
	int j;
	char *s = va_arg(nc_print, char *);

	for (j = 0; s[j] != '\0'; j++)
	{
		_putchar(s[j]);
	}
	return (0);
}
