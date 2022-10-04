#include "main.h"
#include <stdlib.h>

/**
 * create_array -> create array of char
 * @size: size of array
 * @c: character to insert
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *array;
		unsigned int index;

	if (size == 0)
		return (0);
			array = malloc(sizeof(char) * size);
	if (array == 0)
		return (0);
	for (index = 0; index < size; index++)
		array[index] = c;
	return (array);
}

