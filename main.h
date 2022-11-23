#ifndef _MAIN_H_
#define _MAIN_H_

#include<stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list);
int print_str(va_list);
int print_int(va_list);
int print_pct(va_list);
int print_dec(va_list);
int(*_select_func(char c))(va_list);

#endif
