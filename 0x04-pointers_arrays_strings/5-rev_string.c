#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: pointer to string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, j;
	char temp[100];

	i = 0;
	j = i;
	while (s[i] != '\0')
	{
	temp[i] = s[i];
	i++;
	}
	i--;
	while (i >= 0)
	{
		s[j] = temp[i];
		j++;
		i--;
	}
}
