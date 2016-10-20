/**
* print_numbers - This is a function that prints a string
* Description: This function prints /
* numbers from 0 to 9
* Return: Returns 0
*/
#include "holberton.h"
void print_numbers(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
