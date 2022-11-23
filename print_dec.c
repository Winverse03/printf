#include "main.h"
#include <stdarg.h>

/**
 * _print_dec - is a function that prints decimal
 * @args: Receives the argument passed
 * Return: Value.
 */

int print_dec(va_list nc_print)
{
	int x = va_arg(nc_print, int);
	int length = 0, power = 1, k, digit, count = 0, number;

	if (x != 0)
	{
		if (x < 0)
		{
			_putchar('-');
			count++;
		}
		number = x;
		while (number != 0)
		{
			number /= 10;
			length++;
		}
		for (k = 1; k <= length - 1; k++)
			power *= 10;
		for (k = 1; k <= length; k++)
		{
			digit = x / power;
			if (x < 0)
				_putchar((digit * -1) + 48);
			else
				_putchar(digit + '0');
			count++;
			x -= digit * power;
			power /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
