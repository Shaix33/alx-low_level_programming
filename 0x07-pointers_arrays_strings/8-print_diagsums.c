#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: pointer to matrix
 * @size: size of the matrix;
 */
void print_diagsums(int *a, int size)
{
	int y, sum_1 = 0, sum_2 = 0;

	for (y = 0; y < size; y++)
	{
		sum_1 = sum_1 + a[y * size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
		sum_2 += a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", sum_1, sum_2);
}
