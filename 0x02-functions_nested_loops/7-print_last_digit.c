#include "main.h"

/**
 * print _last digit -> prints the last digit
 * @n: The passed args
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}

