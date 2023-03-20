#include <stdio.h>
/**
 * main - Entry point
 * description - prints the name of the file it was compiled from
 * Return: always 0 (Success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
