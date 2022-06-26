#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry point
 * Description: Prints the minimum number of coins to make change for an amount
 * of money
 * @argc: The number of arguments passed to the program
 * @argv: Array of strings arguments that were passed to the program
 * Return: 0 Success 1 Error
 */
int main(const int argc, char const *argv[])
{
	int x;
	int y = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);

	while (x > 0)
	{
		if (x >= 25)
			x -= 25;
		else if (x >= 10)
			x -= 10;
		else if (x >= 5)
			x -= 5;
		else if (x >= 2)
			x -= 2;
		else if (x >= 1)
			x -= 1;
		y += 1;
	}

	printf("%d\n", y);
	return (0);
}
