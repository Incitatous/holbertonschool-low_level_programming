#include <stdio.h>
/**
* print_to_98 - This is a function that prints a string
* Description: This function prints /
* numbers up to to 98
* @n: holds the value of numbers
* Return: Returns 0
*/
#include "holberton.h"
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("%d\n", 98);
}
