#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a newly allocated space else NULL if failed
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int x, y;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	x = y = 0;
	while (s1[x] != '\0')
	{
		x++;
	}
	while (s2[y] != '\0')
	{
		y++;
	}
	arr = malloc(sizeof(char) * (x + y + 1));

	if (arr == NULL)
	{
		return (NULL);
	}
	x = y = 0;
	while (s1[x] != '\0')
	{
		arr[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		arr[x] = s2[y];
		x++, y++;
	}
	arr[x] = '\0';
	return (arr);
}
