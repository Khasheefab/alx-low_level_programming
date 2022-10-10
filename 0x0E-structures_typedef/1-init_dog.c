#include "dog.h"
#include <stdlib.h>

/**
 * init_dog -> Initialize a Variable of type
 * @d: Dog to be initialized
 * @name: Name
 * @age: Age
 * @owner: Owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

