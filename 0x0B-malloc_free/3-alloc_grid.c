#include <stdlib.h>

/**
 * alloc_grid - allocate a grid
 * @width: width of array
 * @height: height of array
 * Return: pointer to pointer to int
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	for (i = 0; i < width; i++)
		if (grid[i] == NULL)
			free(grid[i]);
	if (grid == NULL)
		free(grid);
	return (grid);
}
