#include "main.h"

/**
 * print numbers - functions that print all number from
 * 0 to 9
 *
 * Return: Returns Nothing
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}

