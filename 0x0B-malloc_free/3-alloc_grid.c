#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function prototype
 * Description: It returns a pointer to a 2D array of integers
 * @width: The width of the grid
 * @height: The number of rows in the grid
 * Return: A pointer to a pointer to an int
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int x;
	int y;

	if (width < 1 || height < 1)
		return (0);

	arr = malloc(height * sizeof(int *));

	if (arr == 0)
	{
		free(arr);
		return (0);
	}

	for (x = 0; x < height; x++)
	{
		arr[x] = malloc(width * sizeof(int));

		if (arr[x] == 0)
		{
			for (x--; x >= 0; x--)
			{
				free(arr[x]);
			}

			free(arr);
			return (0);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			arr[x][y] = 0;
		}
	}

	return (arr);
}
