#include <stdio.h>
/**
 * main - Entry point
 * description - prints all possible different combinations of 3 digits
 * Return: void
 */
int main(void)
{
	int c, d, e;

	for (c = '0'; c < '9'; c++)
	{
		for (d = c + 1; d <= '9'; d++)
		{
			for (e = d + 1; e <= '9'; e++)
			{
				if ((c != d) && d != e)
				{
					putchar(c);
					putchar(d);
					putchar(e);

					if (c == '7' && d == '8' && e == '9')
						continue;
					putchar(44);
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
