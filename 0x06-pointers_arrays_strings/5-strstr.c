#include "holberton.h"
#include <stdlib.h>

/**
 * _strcmp - copies two strings
 * @s1: first string
 * @s2: second string
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/**
 * _strstr - finds a substr in str
 * @needle: substring
 * @haystack: string
 * Return: first occurence of c in str
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			if (_strcmp(&needle[0], &haystack[i]) == 0)
				return (&haystack[i]);
		}
		i++;
	}
	if (needle[0] == '\0')
		return (&haystack[i]);
	return (NULL);
}
