#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_int(va_list nc_print);
int print_char(va_list nc_print);
int print_str(va_list nc_print);
int print_bin(va_list nc_print);
int print_dec(va_list nc_print);
int print_pct(va_list nc_print);
int (*_select_func(const char c))(va_list);
int print_octal(va_list nc_print);
int print_unint(va_list nc_print);
int print_x(va_list nc_print);
int print_X(va_list nc_print);
int print_hex(unsigned int n, unsigned int c);


#endif
