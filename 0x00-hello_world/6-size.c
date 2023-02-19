#include <stdio.h>
/**
 * main - program entry point
 * description - a program that prints out the size of various types
 * Return: void
 */
int main(void)
{
	printf("Size of char: %2d byte(s)\n", sizeof(char));
	printf("Size of int: %2d byte(s)\n", sizeof(int));
	printf("Size of long int: %2d byte(s)\n", sizeof(long int));
	printf("Size of long long int: %2d byte(s)\n", sizeof(long long int));
	printf("Size of float: %2d byte(s)\n", sizeof(float));

	return (0);
}