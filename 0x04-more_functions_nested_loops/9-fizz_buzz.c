#include "main.h"
#include <stdio.h>

/**
 * main - prints Fizz for multiples of 3 Buzz for multiples of 5
 * description - a program that prints Fizz for multiples of 3 and Buzz for 5
 *
 * Return: void
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && (i % 5 != 0))
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && (i % 3 != 0))
		{
			printf("Buzz");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
