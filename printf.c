#include "main.h"

/**
 * _printf - print formatted strings
 *
 * @s: format string
 * description: My implementation of the printf function in C
 * Return: number of chars printed.
 */
int _printf(const char *s, ...)
{
	va_list args;

	int count = 0;

	va_start(args, s);

	if (s == NULL)
		return (-1);

	while (*s)
	{
		if (*s == '%')
		{
			s++;
			count += handle_f_specifier(*s, args);
		}
		else
			count += _putchar(*s);
		s++;
	}
	return (count);
}
