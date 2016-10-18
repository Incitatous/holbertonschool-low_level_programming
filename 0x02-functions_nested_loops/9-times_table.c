#include "holberton.h"
/**
* times_table - Absolute value
* Description: This function prints /
* time tables
* Return: Returns 0
*/
void times_table(void)
{
	int i, j, k;

	i = 0;
	j = 0;
	while (i <= 9)
	{
		while (j <= 9)
		{
			k = i * j;
			if (k / 10 == 0)
			{
				if (j == 0)
				{
					_putchar(k % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(k % 10 + '0');
				}
			}
			else
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (j == 9)
			{
				_putchar('\n');
			}
			j++;
		}
		i++;
		j = 0;
	}
}
