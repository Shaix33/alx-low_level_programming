#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * description - A program that determines whether a given value is -||+
 * Return: void
 */
void positive_or_negative(int i)
{
	int n = i;

	/*srand(time(0));
	n = rand() - RAND_MAX / 2;*/
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0 && n != 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	/*return (n);*/
}

