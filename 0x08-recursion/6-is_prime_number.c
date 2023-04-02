#include "main.h"
/**
 * is_prime_number - checks if number is a prime number
 * @n: number to be evaluated
 * Return: 1 if number is prime number 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime_find(n, n - 1));
	}
}
/**
 * prime_find - checks if number is a prime number
 * @n: number to be evaluated
 * @x: iterator
 * Return: 1 if n is prime 0 if not
 */
int prime_find(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}
	if (n % x == 0 && x > 0)
	{
		return (0);
	}
	return (prime_find(n, x - 1));
}
