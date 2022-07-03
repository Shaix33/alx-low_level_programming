#include <stdio.h>

/**
 * main - Program entry point
 * Description: Prints numbers 1 to 100 replacing multiples of 3 and 5 
 *
 * Return: void
 */

int main(void)
{
	int x = 1;

	for (; x < 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz ");
		else if ( x % 3 == 0)
			printf("Fizz ");
		else if ( x % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", x);
	}
	printf("Buzz\n");

	return (0);
}
