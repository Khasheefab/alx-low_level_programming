#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: parameter
 */

void print_diagonal(int n)
{
	int x;

	if (n <= 0)
		putchar('\n');
	else

		for (x = 0; x < n; x++)
			putchar('\');
	putchar('\n');

}

