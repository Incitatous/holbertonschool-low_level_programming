/**
* print_most_numbers - Prints numbers
* Description: This function prints /
* numbers from 0 to 9 except 2 & 4
* Return: Returns 0
*/
#include "holberton.h"
void print_most_numbers(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		if (c != '2' && c != '4')
			_putchar(c);
		c++;
	}
	_putchar('\n');
}
