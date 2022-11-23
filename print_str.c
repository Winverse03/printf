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
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";
	for (k = 0; s[k] != '\0'; k++)
	{
		_putchar(s[k]);
	}
	return (k);
}
