#include "holberton.h"
#include <stdlib.h>

/**
 * _strpbrk - gets the length of substr
 * @s: pointer to string
 * @accept: substring
 * Return: first occurence of c in str
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
				return (&s[i]);
			j++;
		}
		i++;
		j = 0;
	}
	return (NULL);
}

