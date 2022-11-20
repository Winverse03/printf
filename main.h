#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct printstruct - structure containing
 * @c: the location and method to translate data to characters.
 * @n: print function for specific type.
 * Return: int
 */

typedef struct printstruct
{
	char *c;
	int (*n)(char *format, va_list);
} structype;

int _printf(const char *format, ...);
int _putchar(char c);

#endif
