#include "main.h"
#include <stdlib.h>

/**
 * str_concat -> a function for two strings
 * @s1: First String
 * @s2: Second String
 * Return: 0 for failure, but point to new string for success
 */

char *str_concat(char *s1, char s2)
{
	char *concat_str;
	int index, concat_index = 0, len = 0;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == 0)
		return (0);

	for (index = 0; s1[index]; index++)
		concat_str[concat_index++] = s1[index];
	for (index = 0; s2[index]; index++)
		concat_str[concat_index++] = s2[index];
	return (concat_str);
}

