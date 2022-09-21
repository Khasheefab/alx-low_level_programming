#include "main.h"
#include <string.h>

/**
 * _strncpy -> Purpose of Copying
 * @dest: First Parameter
 * @src: Second Parameter
 * @n: Third Parameter
 * Return: String
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}

