#include <stdio.h>
#include "main.h"

/**
 * print_line - printing line
 * @n: integer Parameter
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
		putchar('\n');
	for (x = 0; x <= n; x++)
		putchar('_');
	putchar('\n');
}

