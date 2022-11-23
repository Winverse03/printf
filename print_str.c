#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _print_str - is a function used to display a string
 * @args: receives the list of arguments passed
 * Return: 1
 */

int _print_str(va_list args)
{
	unsigned int k = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (k = 0; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	return (k);
}
