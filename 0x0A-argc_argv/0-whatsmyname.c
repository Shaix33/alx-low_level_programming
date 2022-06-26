#include <stdio.h>

/**
 * main - program entry point
 * Description: Prints the name of the program
 * @argc: The number of arguments passed to the program
 * @argv: Array of strings arguments that were passed to the program
 * Return: 0
 */
int main(int argc __attribute__((unused)), char const *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
