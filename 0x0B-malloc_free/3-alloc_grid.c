#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -> Returns a pointer
 * @width: Width of Array
 * @height: Height of Array
 * Return: Pointer to Array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0, j;

	if (width == 0 || height == 0)
		return (0);

	array = (int **) malloc(sizeof(int *) * height);
	if (array != 0)
	{
		for (; i < height; i++)
		{
			array[i] = (int *) malloc(sizeof(int) * width);
			if (array[i] != 0)
			{
				for (j = 0; j < width; j++)
					array[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(array[i]);
					i--;
				}
				free(array);
				return (0);
			}
		}
		return (array);
	}
	else
	{
		return (0);
	}
}

