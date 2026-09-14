#include "main.h"

/**
 * print_custom_string - Prints a string with non-printable chars in hex format
 *
 * @s: The string to be printed.
 * description: Prints \0x
 * followed by the hexadecimal representation of non-printable characters.
 * Return: The number of characters printed.
 */
int print_custom_string(const char *s)
{
	int count = 0;
	unsigned char ascii_value;

	if (s == NULL)
		s = "(null)";

	while (*s)
	{
		ascii_value = (unsigned char)*s;

		if (ascii_value < 32 || ascii_value >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');

			if (ascii_value < 16)
				count += _putchar('0');

			count += print_number_base(ascii_value, 16, "0123456789ABCDEF");
		}
		else
			count += _putchar(*s);
		s++;
	}
	return (count);
}
