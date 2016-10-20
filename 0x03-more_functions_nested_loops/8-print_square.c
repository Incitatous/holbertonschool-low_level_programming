#include "holberton.h"
/**
* print_square - This is a function that prints a string
* Description: This function prints /
* a square in the terminal
* @size: holds the size of the square
* Return: Returns 0
*/
void print_square(int size)
{
	int i, j;

	i = j = 0;
	while (i < size && size > 0)
	{
		while (j < size && size > 0)
		{
			_putchar('#');
			j++;
		}
		j = 0;
		i++;
		_putchar('\n');
	}
	if (size == 0)
		_putchar('\n');
}
