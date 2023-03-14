#include "main.h"
/**
 * alloc_grid - returns pointer to a 2 dimesional array of integers
 * @width: width of array
 * @height: height of array
 * Return: NULL if width or height is 0, pointer to array if success
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **dim;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	dim = malloc(sizeof(int *) * height);
	if (dim == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		dim[x] = malloc(sizeof(int) * width);
		if (dim[x] == NULL)
		{
			for (; x >= 0; x--)
			{
				free(dim[x]);
			}
			free(dim[x]);
		}
		free(dim);
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			dim[x][y] = 0;
		}
	}
	return (dim);
}
