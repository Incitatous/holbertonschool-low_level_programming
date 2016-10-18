/**
* print_sign - This is a function that prints a string
* Description: This function checks /
* for lower case character
* @n: holds the int
* Return: Returns 0
*/
#include "holberton.h"
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
