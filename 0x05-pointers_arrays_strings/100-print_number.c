#include "holberton.h"

/**
 * print_number - check the code for Holberton School students.
 * @n: holds the number
 * Return: Always 0.
 */
void print_number(int n)
{
	long long expo;
	long long temp;
	long long temp2;

	expo = 1;
	temp2 = n;
	if (n < 0)
	{
		temp2 *= -1;
		_putchar('-');
	}
	temp = temp2;
	while ((temp / 10) > 0)
	{
		temp  = temp / 10;
		expo *= 10;
	}
	while (expo > 0)
	{
		_putchar((temp2 / expo) % 10 + '0');
		expo /= 10;
	}
}
