#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name -> Print name
 * @name: Name to print
 * @f: Pointer to printing function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

