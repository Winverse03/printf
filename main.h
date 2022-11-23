#ifndef _MAIN_H_
#define _MAIN_H_

#include<stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list nc_print);
int print_str(va_list nc_print);
int print_int(va_list nc_print);
int print_pct(va_list nc_print);
int print_dec(va_list nc_print);
int(*_select_func(char c))(va_list);

#endif
