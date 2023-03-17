#include <stdlib.h>

/**
 * free_grid - frees a memory
 * Return: void
 * @grid: pointer to a pointer
 * @height: height of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
