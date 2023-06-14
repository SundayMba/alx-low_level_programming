#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees array
 * @grid: array of int
 * @height: row
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
