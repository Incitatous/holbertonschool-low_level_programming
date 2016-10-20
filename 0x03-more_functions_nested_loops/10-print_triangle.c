#include "holberton.h"
/**
* print_triangle - This is a function that prints a string
* Description: This function prints /
* a diagonal line in the terminal
* @size: size of the triangle
* Return: Returns 0
*/
void print_triangle(int size)
{
	int i, j;

	i = 0;
	j = 1;
	while (i < size && size > 0)
	{
		while (j < size && size > 0)
		{
			if (j < size - i)
				_putchar(' ');
			else
				_putchar('#');
			j++;
		}
		j = 1;
		i++;
		_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
