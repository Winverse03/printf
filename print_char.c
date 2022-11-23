#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * _print_char - is a function to print character
 * @args: receives the incoming arguments
 * Return: the number of written character
 */

int _print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
