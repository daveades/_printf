#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * description: Test printf function
 * Return: 1
 */
int main(void)
{
	int count;

	count = _printf("Progress: 100%%,\n"
		"Character: = %c,\nString: %s,\n"
		, 'd', "Hello, World!");
	printf("Total characters printed: %d\n", count);
	return (count);
}
