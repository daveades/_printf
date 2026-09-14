#include "main.h"
#include <stdint.h>

/**
 * handle_f_specifier - handle format specifiers
 *
 * @specifier: format specifier
 * @args: va_list of arguments
 * description: handles format specifiers for _printf function
 *
 * Return: number of chars printed.
 */
int handle_f_specifier(char specifier, va_list *args)
{
	switch (specifier)
	{
		case '%':
			return (_putchar('%'));
		case 'c':
			return (_putchar(va_arg(*args, int)));
		case 's':
			return (print_string(va_arg(*args, char *)));
		case 'i':
		case 'd':
			return (print_int(va_arg(*args, int)));
		case 'b':
			return (print_number_base(va_arg(*args, unsigned int), 2, "01"));
		case 'u':
			return (print_number_base(va_arg(*args, unsigned int), 10, "0123456789"));
		case 'o':
			return (print_number_base(va_arg(*args, unsigned int), 8, "01234567"));
		case 'x':
			return (print_number_base(
				va_arg(*args, unsigned int), 16, "0123456789abcdef")
			);
		case 'X':
			return (print_number_base(
				va_arg(*args, unsigned int), 16, "0123456789ABCDEF")
			);
		case 'p':
			return (print_pointer(va_arg(*args, void *)));
		default:
			{
				int count = 0;

				count += _putchar('%');
				count += _putchar(specifier);
				return (count);
			}
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

	/* integer oveflow edge case*/
	long num = n;
	int count = 0;

	if (num < 0)
	{
		count += _putchar('-');
		num = -num;
	}
	count += print_number_base(num, 10, "0123456789");
	return (count);
}

/**
 * print_number_base - Prints a number in a specified base
 *
 * @n: number to be printed
 * @base: base to print n
 * @digits: valid base digits
 *
 * description: Prints a number in either base 10, 16 or 8
 * Return: num of printed digits.
 */
int print_number_base(unsigned long n, unsigned int base, const char *digits)
{
	int count = 0;
	unsigned long divisor = 1;
	int digit_idx;

	while (n / divisor >= base)
		divisor *= base;

	for (; divisor >= 1; divisor /= base)
	{
		digit_idx = (n / divisor) % base;
		count += _putchar(digits[digit_idx]);
	}

	return (count);
}

/**
 * print_pointer - Prints a pointer address in hexadecimal format
 *
 * @ptr: pointer to be printed
 *
 * description: Prints a pointer address in hexadecimal format
 * with "0x" prefix. If the pointer is NULL, it prints "(nil)".
 *
 * Return: number of chars printed.
 */
int print_pointer(void *ptr)
{
	int i;
	int count = 0;

	uintptr_t ptr_value = (uintptr_t)ptr;

	if (ptr == NULL)
	{
		for (i = 0; i < 5; i++)
			count += _putchar("(nil)"[i]);

		return (count);
	}

	count += _putchar('0');
	count += _putchar('x');

	return (count + print_number_base(ptr_value, 16, "0123456789abcdef"));
}
