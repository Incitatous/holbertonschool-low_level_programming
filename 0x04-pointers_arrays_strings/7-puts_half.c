#include "holberton.h"

/**
 * puts_half - prints half a string
 * @str: pointer to string
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i;
	int length_of_the_string;
	int half;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	length_of_the_string = i;
	if (length_of_the_string % 2 == 0)
		half = length_of_the_string / 2;
	else
		half = ((length_of_the_string + 1) / 2);
	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
