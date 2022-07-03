#include "main.h"
#include <stdio.h>

/**
 * print_array - Fucntion prototype
 * Description: Prints the contents of an array of integers
 * @a: The array
 * @n: The number of elements in the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i != (n - 1))
			printf(", ");
	}

	 printf("\n");
}
