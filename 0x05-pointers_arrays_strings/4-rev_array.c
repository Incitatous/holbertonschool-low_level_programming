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
	int temp;

	i = 0;
	n--;
	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
