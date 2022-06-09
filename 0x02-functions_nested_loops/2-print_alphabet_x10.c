#include "main.h"

/**
 * print_alphabet_x10 - Function prototype
 * Description: Prints the letters of the alphabet in lowercase 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{

	char x = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}

		x = 'a';

		_putchar('\n');
	}

}
