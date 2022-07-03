#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program entry point
 * Description: Generates keygen of characters, with the last character being 
 * the difference between the total number of characters generated and 2772
 * Return: 0
 */
int main(void)
{
	int r = 0, c = 0;
	time_t t;

	srand((unsigned int) time(&t));

	while (c < 2772)
	{
		r = rand() % 128;

		if ((c + r) > 2772)
			break;

		c += r;

		printf("%c", r);
	}
	printf("%c\n", (2772 - c));

	return (0);
}
