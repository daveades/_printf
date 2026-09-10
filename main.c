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
	int count1, count2;

	count1 = _printf(
		"Progress: 100%%,\n"
		"Character: = %c,\n"
		"String: %s,\n"
		"Integer: %d,\n"
		"Negative int: %i,\n\n"
		, 'd', "Hello, World!", 2987, -2987
	);
	printf("Total characters printed (_printf): %d\n\n", count1);

	count2 = printf(
		"Progress: 100%%,\n"
		"Character: = %c,\n"
		"String: %s,\n"
		"Integer: %d,\n"
		"Negative int: %i,\n\n"
		, 'd', "Hello, World!", 2987, -2987
	);
	printf("Total characters printed (printf): %d\n", count2);


	
	return (0);
}
