#include "main.h"

/**
 * reverse_array -> Reversing an Array
 * @a: Array a
 * @n: An Element of an array
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

		for (index = n - 1; index >= n / 2; index--)
		{
			tmp = a[n - 1 - index];
			a[n - 1 - index] = a[index];
			a[index] = tmp;
		}
}

