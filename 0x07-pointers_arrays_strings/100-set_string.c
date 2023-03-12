#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer to a string
 * @to: pointer to new string
 * Return: Always void (Success)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
