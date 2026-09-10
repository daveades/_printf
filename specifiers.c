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
		case 'i':
		case 'd':
			return (print_int(va_arg(args, int)));
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

/**
 * print_int - print an integer
 * 
 * @n: integer to print
 * description: prints an integer to stdout
 * 
 * Return: number of chars printed.
 */
int print_int(int n)
{
	return (
		n < 0
		? _putchar('-') + print_number(-n)
		: print_number(n)
	);
}

/**
 * print_number - print a number
 *
 * @n: number to print
 * description: prints a number to stdout
 * 
 * Return: number of chars printed.
 */
int print_number(int n)
{
	int count = 0;
	int divisor = 1;
	int digit;

	while (n / divisor >= 10)
		divisor *= 10;

	for (; divisor >= 1; divisor /= 10)
	{
		digit = (n / divisor) % 10;
		count += _putchar(digit + '0');
	}

	return (count);
}
