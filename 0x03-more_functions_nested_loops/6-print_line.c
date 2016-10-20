#include "holberton.h"
/**
* print_line - This is a function that prints a string
* Description: This function prints /
* a straight line in the terminal
* Return: Returns 0
*/
void print_line(int n)
{
	int i;

	i = 0;
	while (i <= n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
