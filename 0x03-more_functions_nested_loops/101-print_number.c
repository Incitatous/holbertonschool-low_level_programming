#include "holberton.h"

/**
 * print_number - check the code for Holberton School students.
 * @n: holds the number
 * Return: Always 0.
 */
void print_number(int n)
{
	int expo;
	int temp;

	expo = 1;
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	temp = n;
	while ((temp / 10) > 0)
	{
		temp  = temp / 10;
		expo *= 10;
	}
	while (expo > 0)
	{
		_putchar((n / expo) % 10 + '0');
		expo /= 10;
	}
}
