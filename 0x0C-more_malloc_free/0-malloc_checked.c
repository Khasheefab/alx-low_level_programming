#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -> allocates memory using malloc
 * @b: memory to allocate
 *
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
		if (p == 0)
			exit(98);
	return (p);
}

