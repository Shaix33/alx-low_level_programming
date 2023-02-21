#include <stdio.h>
/**
 * main - Entry points
 * description - prints the alphabet except q and e
 * Return: void
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
