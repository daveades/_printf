#include "main.h"

int handle_f_specifier(char specifier, va_list args)
{
    switch (specifier)
    {
        case 'c':
            return _putchar(va_arg(args, int));
        case '%':
            return _putchar('%');

    }
}