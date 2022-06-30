#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and assigns it to a char
 * Description: assigns an array of chars to a char and returns Null or pointer
 * @size: size of array
 * @c: character to assign array to
 *
 * Return: pointer or null
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (0);

	arr = malloc(size);

	if (arr == 0)
		return (0);

	while (size--)
	{
		arr[size] = c;
	}

	return (arr);
}
