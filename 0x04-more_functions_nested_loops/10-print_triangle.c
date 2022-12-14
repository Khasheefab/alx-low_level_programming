#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size parameter of triangle
 */

void print_triangle(int size)
{
	int inc1, inc2;

	if (size > 0)
	{
		for (inc1 = 1; inc1 <= size; inc1++)
		{
			putchar(" ");
		}

		for (inc2 = 0; inc2 < inc2; inc2++)
		{
			putchar('#');
		}
		if (inc1 == size)
		{
			continue;
		}
		putchar('\n');
	}
}

