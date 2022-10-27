#include "main.h"

/**
 * set_bit -> Sets value of a bit at a given index to 1
 * @n: A pointer to bit
 * @index: The index to set the value at - indices start at 0
 *
 * Return: If error occurs - -1
 * or - 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) *8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}

