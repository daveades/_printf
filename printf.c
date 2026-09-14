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

	
	if (s == NULL)
		return (-1);
	
	va_start(args, s);

	while (*s)
	{
		if (*s == '%' && *(s + 1) != '\0')
		{
			s++;
			count += handle_f_specifier(*s, &args);
		}
		else
			count += _putchar(*s);
		s++;
	}
	va_end(args);
	return (count);
}
