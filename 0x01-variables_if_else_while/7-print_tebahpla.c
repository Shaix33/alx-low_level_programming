#include <stdio.h>
#include <time.h>

/**
 * main - Program entry point
 * Description: Prints lowercase letters of the alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}

	putchar('\n');
	return (0);
}
