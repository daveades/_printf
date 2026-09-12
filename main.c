#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - Entry point
 *
 * description: Test printf function
 * Return: 1
 */
int main(void)
{
	int count1, count2;
	int value = 56;
	int *ptr = &value;


	count1 = _printf(
		"Progress: 100%%,\n"
		"Character: = %c,\n"
		"String: %s,\n"
		"Integer: %d,\n"
		"Negative int: %i,\n"
		"Unsigned int: %u\n"
		"Octal: %o,\n"
		"Hexadecimal: %x,\n"
		"Upper Hexadecimal: %X\n"
		"pointer: %p\n\n"
		, 'd', "Hello, World!", 2987, -2987, 39087, 23, 19, 19, ptr
	);

	count2 = printf(
		"Progress: 100%%,\n"
		"Character: = %c,\n"
		"String: %s,\n"
		"Integer: %d,\n"
		"Negative int: %i,\n"
		"Unsigned int: %u\n"
		"Octal: %o,\n"
		"Hexadecimal: %x,\n"
		"Upper Hexadecimal: %X\n"
		"pointer: %p\n\n"
		, 'd', "Hello, World!", 2987, -2987, 39087, 23 , 19, 19, ptr
	);

	printf("Counts match?: %s\n", (count1 == count2) ? "Yes" : "No");
	printf("Count1: %d, Count2: %d\n", count1, count2);

	printf("Edge cases:\n");

	count1 += _printf("INT_MAX: %d\n", INT_MAX);
	count1 += _printf("INT_MIN: %d\n", INT_MIN);
	count1 += _printf("Zero_int: %d\n", 0);
	count1 += _printf("UINT_MAX: %u\n", UINT_MAX);
	count1 += _printf("Zero_uint: %u\n", 0);

	count1 += _printf("NULL string: %s\n", NULL);
	count1 += _printf("Empty string: %s\n", "");


	count1 += _printf("Hex_UINT_MAX: %x\n", UINT_MAX);
	count1 += _printf("HEX_UINT_MAX: %X\n", UINT_MAX);
	count1 += _printf("Hex_Zero: %x\n", 0);
	count1 += _printf("HEX_Zero: %X\n", 0);

	count1 += _printf("Octal_UINT_MAX: %o\n", UINT_MAX);
	count1 += _printf("Octal_Zero: %o\n", 0);

	int x = 10;
	count1 += _printf("%p\n", (void *)&x);
	count1 += _printf("NULL pointer: %p\n", NULL);

	count2 += printf("INT_MAX: %d\n", INT_MAX);
	count2 += printf("INT_MIN: %d\n", INT_MIN);
	count2 += printf("Zero_int: %d\n", 0);
	count2 += printf("UINT_MAX: %u\n", UINT_MAX);
	count2 += printf("Zero_uint: %u\n", 0);

	count2 += printf("NULL string: %s\n", NULL);
	count2 += printf("Empty string: %s\n", "");

	count2 += printf("Hex_UINT_MAX: %x\n", UINT_MAX);
	count2 += printf("HEX_UINT_MAX: %X\n", UINT_MAX);
	count2 += printf("Hex_Zero: %x\n", 0);
	count2 += printf("HEX_Zero: %X\n", 0);

	count2 += printf("Octal_UINT_MAX: %o\n", UINT_MAX);
	count2 += printf("Octal_Zero: %o\n", 0);

	count2 += printf("%p\n", (void *)&x);
	count2 += printf("NULL pointer: %p\n", NULL);

	printf("Counts match?: %s\n", (count1 == count2) ? "Yes" : "No");
	printf("Count1: %d, Count2: %d\n", count1, count2);
}
