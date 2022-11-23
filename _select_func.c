#include "main.h"
#include <stddef.h>

/**
 * _select_func - select functions as per the condition
 * @c: character for the selection of a function
 * Return: NULL
 */

int (*_select_func(char c))(va_list)
{
	if (c == 'c')
	{
		return (print_char);
	}
	if (c == 's')
	{
		return (print_str);
	}
	if (c == 'd')
	{
		return (print_int);
	}
	if (c == 'i')
	{
		return (print_int);
	}
	return (NULL);
}
