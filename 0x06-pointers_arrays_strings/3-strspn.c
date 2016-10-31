#include "holberton.h"

/**
 * _strspn - gets the length of substr
 * @s: pointer to string
 * @accept: substring
 * Return: first occurence of c in str
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int result;

	i = 0;
	result = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				result++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			return (result);
		i++;
	}
	return (0);
}
