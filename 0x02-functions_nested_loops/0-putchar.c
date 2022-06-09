#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char i[9] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar(i[x]);
	}
	_putchar('\n');
	return (0);
}

