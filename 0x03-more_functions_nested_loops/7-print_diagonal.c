#include "holberton.h"
/**
* print_diagonal - This is a function that prints a string
* Description: This function prints /
* a diagonal line in the terminal
* @n: length of the triangle
* Return: Returns 0
*/
void print_diagonal(int n)
{
	int i, j;

	i = 0;
	while (i < n && n > 0)
	{
		while (j < i && n > 0)
		{
			_putchar(' ');
			j++;
		}
		j = 0;
		i++;
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
