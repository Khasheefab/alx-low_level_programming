#include "main.h"
#include <string.h>

/**
 * _strncat -> function to append some charx
 * @dest: First Parameter
 * @src: Second Parameter
 * @n: Third Parameter
 * Return: String
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}

