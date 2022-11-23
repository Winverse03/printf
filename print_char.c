#include "main.h"

/**
 * print_char - prints character
 * @args: argument
 * Return: 1 if success else -1
 */
int print_char(va_list nc_print)
{
	char c = va_arg(nc_print, int);

	return (_putchar(c));
}
