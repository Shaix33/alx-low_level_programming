#include "main.h"
/**
 * create_array - creates an array of size and assigns char c
 * @size: size of the array
 * @c: array initializer
 * Return: new array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int x;

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		arr[x] = c;
	}
	return (arr);
}
