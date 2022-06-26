#include <stdio.h>

/**
 * main - program entry point
 * Description:  Prints the number of arguments passed into it
 * @argc: The number of arguments passed to the program
 * @argv: Array of strings arguments that were passed to the program
 * Return: 0
 */
int main(int argc, char const *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
