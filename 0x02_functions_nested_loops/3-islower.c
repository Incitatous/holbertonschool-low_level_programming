/**
* main - This is a function that prints a string
* Description: This function checks /
* for lower case character
* Return: Returns 0
*/
#include "holberton.h"
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		_putchar('1');
	else
		_putchar('0');
	return (0);
}
