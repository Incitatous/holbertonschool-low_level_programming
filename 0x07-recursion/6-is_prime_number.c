#include "holberton.h"

/**
 * check - looks for square root
 * @i: checker
 * @n: number passed
 * Return: number x to the power y
 */
int check(int i, int n)
{
	if (i < n && n % i != 0)
		return (check(i + 1, n));
	if ((i < n) && (n % i == 0))
		return (0);
	if (i == n)
		return (1);
	else
		return (0);
}

/**
 * _is_prime_number - returns pn
 * @n: number passed
 * Return: number x to the power y
 */
int is_prime_number(int n)
{
	return (check(2, n));
}
