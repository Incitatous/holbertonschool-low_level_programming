#include "holberton.h"

/**
 * factorial - returns factorial
 * @s: pointer to string
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
