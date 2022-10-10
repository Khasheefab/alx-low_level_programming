#include "dog.h"
#include <stdlib.h>

/**
 * free_dog -> Free Dog
 * @d:  Free Dog
 */

void free_dog(dog_t *d)
{
	if (d == 0)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}

