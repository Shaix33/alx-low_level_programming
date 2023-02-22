#include "main.h"
/**
 * main - Entry point
 * description - prints _putchar followed by a new line
 * Return: void
 */
int main(void)
{
	char str[] = "_putchar";
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
	return (0);
}
