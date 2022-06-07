#include <stdio.h>

/**
 * main - Program entry point
 * Description: Prints the letters of the alphabet in lowercase first
 * followed by uppercase letters
 * Return: 0
 */
int main(void)
{
	char x = 'a';
	char y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}

	putchar('\n');

	return (0);
}
