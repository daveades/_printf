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
		case '%':
			return (_putchar('%'));
		case 'c':
			return (_putchar(va_arg(args, int)));
		case 's':
			return (print_string(va_arg(args, char *)));
		default:
			return (0);
	}
}

/**
 * print_string - print a string
 *
 * @s: string to print
 * description: prints a string to stdout using _putchar
 *
 * Return: number of chars printed.
 */
int print_string(char *s)
{
	int count = 0;

	if (s == NULL)
		s =  "(null)";

	while (*s)
	{
		count += _putchar(*s);
		s++;
	}
	return (count);
}

int print_int(int n)
{
	/* say n = 1045 */
	/* (1045 / 1000) % 10 = 1 */
	/* (1045 / 100) % 10 = 0 */
	/* (1045 / 10) % 10 = 4 */
	/* (1045 / 1) % 10 = 5 */

	/* (num / divisor) % 10 = digit */

	/* How to get divisor ?*/
	/* Start with divisor = 1 and multiply by 10 until (num / divisor) < 10 */

	return (0);
}

