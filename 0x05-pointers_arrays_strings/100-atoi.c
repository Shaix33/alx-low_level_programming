#include "main.h"

/**
 * _atoi - Fucntion prototype
 * Description: Converts a string to an integer.
 * @s: The string to be converted
 * Return: The integer value of the string
 */
int _atoi(char *s)
{
	unsigned int count = 0;
	unsigned int size = 0;
	unsigned int oi = 0;
	unsigned int pn = 1;
	unsigned int m = 1;
	unsigned int i;

	while (*(s + count) != '\0')
	{
		if (size <= 0 || (*(s + count) >= '0' && *(s + count) <= '9'))
		{
			if (*(s + count) == '-')
				pn *= -1;

			if (*(s + count) >= '0' && *(s + count) <= '9')
			{
				if (size > 0)
					m *= 10;
				size++;
			}
			count++;
		}
		else
			break;
	}

	for (i = count - size; i < count; i++)
	{
		oi += (*(s + i) - 48) * m;
		m /= 10;
	}

	return (oi * pn);
}
