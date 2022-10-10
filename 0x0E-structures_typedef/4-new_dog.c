#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen -> Find length of string
 * @str: The string is to be measured
 *
 * Return: 0
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy -> Copy a string
 * @dest: Storing string copy
 * @src: Source string
 *
 * Return: 0
 */

char *strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';
	return (dest);
}

/**
 * new_dog -> Create new dog
 * @name: Name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == 0 || age < 0 || owner == 0)
		return (0);

	doggo = malloc(sizeof(dog_t));
	if (doggo == 0)
		return (0);

	doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggo->owner == 0)
	{
		free(doggo->name);
		free(doggo);
		return (0);
	}

	doggo->name = _strcopy(doggo->name, name);
	doggo->age = age;
	doggo->owner = _strcopy(doggo->owner, owner);
	return (doggo);
}

