#include <stdio.h>
#include "main.h"

/**
 * print line - prints a line
 * @n: Parameter
 * Return: No return
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar(' ');
	}
	putchar('\n');
}

