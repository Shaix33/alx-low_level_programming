#include <stdio.h>

/**
 * main - Program entry point
 * Description: Prints the letters of the alphabet lowercase except q and e
 * Return: 0
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
			putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
