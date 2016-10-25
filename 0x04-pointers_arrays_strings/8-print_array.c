#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints an array
 * @a: pointer to string
 * @n: number of elements in the array
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
			if (i < n - 1)
				printf(", ");
		i++;
	}
	printf("\n");
}
