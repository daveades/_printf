#include "main.h"

/**
 * _printf - print formatted strings
 *
 * @s: format string
 * description: My implementation of the printf function in C
 * Return: number of chars printed.
 */
int _printf(char *s)
{
	int count = 0;

	while (*s)
	{
		_putchar(*s);
		count++;
		s++;
	}
	return (count);
}