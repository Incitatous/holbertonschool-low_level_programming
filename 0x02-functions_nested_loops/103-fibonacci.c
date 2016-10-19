#include "holberton.h"
#include <stdio.h>

/**
* main - main function
* Description: This program adds /
* the natural numbers up to 1024
* Return: Returns 0
*/

int main(void)
{
	int count, l, o, k, i;

	l = 1;
	o = 2;
	i = 2;
	for (count = 0 ; count < 32; count++)
	{
		{
			k = o + l;
			l = o;
			o = k;
			if (k % 2 == 0)
				i += k;
		}
	}
	printf("%d\n", i);
	return (0);
}
