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

	count = _printf("Progress: 100%%: ");
	printf("%d\n", count);
	return (count);
}
