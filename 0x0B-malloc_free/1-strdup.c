#include "main.h"
/**
 * _strdup - returns pointer to newly allocated space
 * @str: pointer to string passed as args
 * Return: Pointer to newly allocated space, NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *arr;
	int x, y = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	arr = malloc(sizeof(char) * (x + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (y = 0; str[y]; y++)
	{
		arr[y] = str[y];
	}
	return (arr);
}
