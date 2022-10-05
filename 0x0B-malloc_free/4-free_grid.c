#include "main.h"
#include <stdlib.h>

/**
 * free_grid -> 2D Array
 * @grid: Memory Block to be freed
 * @height: Height of Array
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

