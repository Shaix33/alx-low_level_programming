#include <stdio.h>

/**
 * main - program entry point
 * Description: Prints all arguments it receives
 * @argc: The number of arguments passed
 * @argv: Array of arguments passed to the program
 * Return: 0
 */

int main(const int argc, char const **argv)
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
