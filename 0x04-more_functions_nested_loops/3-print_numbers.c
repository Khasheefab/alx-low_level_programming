#include "main.h"

/**
 * print numbers - functions that print all number from
 * 0 to 9
 *
 * Return: Returns Nothing
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x < 9; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}

