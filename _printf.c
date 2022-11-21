#include "main.h"
#include <stdarg.h>
#include <stddef.h>

int _printf(const char *, const format, ...)
{

    va_list nach_print;
    int i = 0;
    int j = 0;
    int *str = NULL;

    va_start(nc_print, format);

    while(format [i] != '\0')
    {
        if(format [i] != '%')
        _putchar(format[i]);
        else
        {
            if(format [i+1] == 'c')
            _putchar(va_arg(nc_print, int));
            i++;
        }
        else if(format [i+1]) == 's')
        {
            i++;
            str = va_arg(nc_print, char *);
            while(str[j] != '\0')
            {
                _putchar(str[j]);
                j++;
            }
            else if(format [i+1] == '%')
            {
                i++;
                _putchar('%')
            }
        }
    }
    va_end(nc_print);
    return (0);
}
