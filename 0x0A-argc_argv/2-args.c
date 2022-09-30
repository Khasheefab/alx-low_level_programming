#include <stdio.h>

/**
 * main -> function to print it's name
 * @argc: argc parameter
 * @argv: array of command listed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

