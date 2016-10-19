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
	unsigned long count, l, o, k;

	l = 1;
	o = 2;
	printf("1, 2");
	for (count = 0 ; count < 48; count++)
	{
		{
			k = o + l;
			l = o;
			o = k;
				if (count != 48)
					printf(", ");
			printf("%lu", k);
		}
	}
	printf("\n");
	return (0);
}
