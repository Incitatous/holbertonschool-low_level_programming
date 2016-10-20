/**
* more_numbers - This is a function that prints a string
* Description: This function prints /
* the numbers 1 to 14, 10 times
* Return: Returns 0
*/
#include "holberton.h"
void more_numbers(void)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (i <= 10)
	{
		while (c <= 14)
		{
			if (c > 9)
				_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
			c++;
		}
		c = 0;
		i++;
		_putchar('\n');
	}
}
