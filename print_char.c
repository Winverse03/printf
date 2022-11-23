#include "main.h"

/**
 * print_char - prints character
 * @args: argument
 * Return: 1 if success else -1
 */
int print_char(va_list nc_print)
{
	return (_putchar(va_arg(nc_print, int)));
}
