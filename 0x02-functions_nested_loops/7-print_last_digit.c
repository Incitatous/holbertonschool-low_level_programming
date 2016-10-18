#include "holberton.h"
/**
* print_last_digit - Last digit
* Description: This function prints /
* the last digit of a number
* @i: the input
* Return: Returns 0
*/
int print_last_digit(int i)
{
	int j;
	int k;
	int l;

	j = (i * -10 / 10);
	k = j % 10;
	l = i % 10;
	if (i < 0)
	{
		_putchar(k + '0');
		return (k);
	}
	else
	{
		_putchar (l + '0');
		return (l);
	}
}
