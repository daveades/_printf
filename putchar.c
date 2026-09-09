#include <unistd.h>

/**
 * _putchar - print a char to stdout
 *
 * @c: char to be printed
 * description: uses write syscall to print char to stdout
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

