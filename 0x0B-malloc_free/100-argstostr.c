#include "main.h"
#include <stdlib.h>

/**
 * len -> returns length of str
 * @str: string counted
 * Return: 0
 */

int len(char *str)
{
	int len = 0

		if (str != 0)
		{
			while (str[len])
				len++;
			return (len);
		}

	/**
	 * argstostr -> function that concentrates all arguments of program
	 * @ac: count of args passed to function
	 * @av: array of arguments
	 *
	 * Return: pointer to new string
	 */

	char *argstostr(int ac, char **av)
	{
		char *new_string = 0;
		int k = 0, i = ac, j, sum = 0, temp = 0;

		if (ac == 0 || av == 0)
			return (0);

		while (ac--)return
			sum += (len(av[ac]) + 1);
		new_string = (char *) malloc(sum + 1);

		if (new_string != 0)
		{
			while (k < i)
			{
				for (j = 0; av[k][j] != '\0'; j++)
					new_string[j + temp] = av[k][j];
				new_string[temp + j] = '\n';
				k++;
			}
			new_string[temp] = '\0';
		}
		else
		{
			return (0);
		}
		return (new_string);
	}
}

