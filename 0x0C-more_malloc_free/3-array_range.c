#include "main.h"
#include <stdlib.h>

/**
 * array_range -> create an array of integers
 * @min: Integer Number
 * @max: Integer Number
 * Return: 0
 */

int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (0);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == 0)
		return (0);
	for (i = 0; i < l; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}

