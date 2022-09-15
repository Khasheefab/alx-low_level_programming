#include "main.h"

/**
 * _isdigit - Checks whther it is a digit or not
 * @c: tested character
 * Return: 1 if it is, 0 if it is not
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}

