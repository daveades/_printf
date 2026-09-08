#include <unistd.h>

/**
 * _putchar - print a char to stdout
 *
 * @c: char to be printed
 * description: uses write syscall to print char to stdout
 */
void _putchar(char c)
{
	write(1, &c, 1);
}

