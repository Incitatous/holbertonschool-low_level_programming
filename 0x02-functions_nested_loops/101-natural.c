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
	int n;
	int l;

	l = 0;
	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			l += n;
	}
	printf("%d\n", l);
	return (0);
}
