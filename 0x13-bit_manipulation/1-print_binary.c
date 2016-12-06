#include "holberton.h"
/**
 * print_binary - prints binary of an int
 *
 * @n: unsigned long int passed
 */
void print_binary(unsigned long int n)
{
	char checkOne, res;
	signed long int i;

	i =  sizeof(unsigned long int) * 8 - 1;
	checkOne = res = 0;
	if (n == 0)
		_putchar('0');
	while (i >= 0)
	{
		res = ((n >> i) & 1);
		if (checkOne == 1)
			_putchar('0' + res);
		else
		{
			if (res != 0)
			{
				checkOne = 1;
				/*_putchar prints the first 1*/
				_putchar('1');
			}
		}
		i--;
	}
}
