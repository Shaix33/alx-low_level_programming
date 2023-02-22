#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet x10 in lowercase
 * description - a function that prints the alphabet x10 in lowercase
 * Return: void
 */
void print_alphabet_x10(void)
{
	int c, x;

	for (c = 0; c < 10; c++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
