#include "main.h"

/**
 * reverse_array - Function prototype
 * Description: Reverses the array
 * @a: Pointer to an array of integers
 * @n: The number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int x;

	for (x = n / 2; x > 0; x--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] -= a[i];
	}
}
