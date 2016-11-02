#include "holberton.h"

/**
 * check - looks for square root
 * @i: checker
 * @n: number passed
 * Return: number x to the power y
 */
int check(int i, int n)
{
	if ((i * i) == n)
		return (i);
	if ((i * i) > n)
		return (-1);
	/*if ((i * i) < n)*/
	return (check(i + 1, n));
}

/**
 * _sqrt_recursion - returns square
 * @n: number passed
 * Return: number x to the power y
 */
int _sqrt_recursion(int n)
{
	return (check(1, n));
}
