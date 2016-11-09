#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: result or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *result;

	i = j = k = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	result = malloc(sizeof(*s1 + *s2 - 1));
	while (s1[i] != '\0')
	{
		result[k] = s1[i];
		i++;
		k++;
	}
	while (s2[j] != '\0')
	{
		result[k] = s2[j];
		j++;
		k++;
	}
	result[k] = '\0';
	return (result);
}
