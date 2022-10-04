#include "main.h"
#include <stdlib.h>

/**
 * _strdup -> returns pointer to newly allocated space
 * @str: string to be copied
 * Return: 0
 */

char *_strdup(char *str)
{
	char *cpy;
	int index, len;

	if (str == 0)
		return (0);
	for (index = 0; str[index]; index++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == 0)
		return (0);
	for (index = 0; str[index]; index++)
	{
		cpy[index] = str[index];
	}
	cpy[len] = '\0';

	return (cpy);
}

