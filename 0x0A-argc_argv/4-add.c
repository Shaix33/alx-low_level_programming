#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program entry point
 * Description: Adds positive numbers
 * @argc: The number of arguments passed to the program
 * @argv: Array of strings arguments that were passed to the program
 * Return: 0 if all the arguments are passed are numbers else 1
 */
int main(const int argc, char const *argv[])
{
	int x;
	int y;
	int z = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		z += atoi(argv[x]);
	}

	printf("%d\n", z);
	return (0);
}
