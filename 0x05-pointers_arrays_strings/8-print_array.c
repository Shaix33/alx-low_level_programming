#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array
 * @a: pointer to first element of array
 * @n: number of elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int x;
	char c = 44, k = ' ';

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x < (n - 1))
		{
			printf("%c%c", c, k);
		}
	}
	printf("\n");
}
