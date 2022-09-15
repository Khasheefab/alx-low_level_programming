#include <stdio.h>

/**
* main - entry point
* in order seperated by a , or a space
*@n: the number to start counting
*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", 98);
	}

	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
}

