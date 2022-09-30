#include <stdio.h>

/**
 * main -> function to print name
 * @argc: argc parameter
 * @argv: array of command listed
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{

	printf("%s\n", *argv);
	return (0);
}

