#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function prototype
 * Description: Frees the memory allocated for a 2D array of integers
 * @grid: A pointer to a pointer to an int
 * @height: the height of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
