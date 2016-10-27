#include "holberton.h"

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: number of elements
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i;

	i = 0;
	while (a[i] < n)
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(a[i]);
		i--;
	}
	_putchar('\n');
}
