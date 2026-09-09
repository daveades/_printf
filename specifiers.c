#include "main.h"

/**
 * handle_f_specifier - handle format specifiers
 *
 * @specifier: format specifier
 * @args: va_list of arguments
 * description: handles format specifiers for _printf function
 *
 * Return: number of chars printed.
 */
int handle_f_specifier(char specifier, va_list args)
{
	switch (specifier)
	{
	case 'c':
		return (_putchar(va_arg(args, int)));
	case '%':
		return (_putchar('%'));
	}
}
