#include "main.h"

/**
 * clear_bit -> Sets the value of a bit at given index to 0
 * @n: Pointer to bit
 * @index: Index to set value at - indices start at 0
 *
 * Return: If error occurs - -1
 * or -> - 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}

