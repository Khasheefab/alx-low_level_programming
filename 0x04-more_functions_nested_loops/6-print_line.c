#include <stdio.h>
#include "main.h"

/**
 * print_line - printing line
 * @n: integer Parameter
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar(' ');
	}
	putchar('\n');
}

