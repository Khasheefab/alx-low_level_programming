#include "main.h"

/**
 * _isalpha - checks for alphabet letters
 * @c: a character check
 * Return: returns 0 or 1 dependant on condition
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}


