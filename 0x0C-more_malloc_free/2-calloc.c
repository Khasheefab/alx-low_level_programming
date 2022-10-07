#include "main.h"
#include <stdlib.h>

/**
 * _calloc -> allocate memory of an array using malloc
 * @nmemb: number of elements
 * @size: size in bytes
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);
	p = malloc(nmemb * size);
	if (p == 0)
		return (0);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}

