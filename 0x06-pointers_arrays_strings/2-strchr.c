#include "holberton.h"

/**
 * _strchr - locates char in a str
 * @s: pointer to string
 * @c: char
 * Return: first occurence of c in str
 */
char *_strchr(char *s, char c)
{
	int i;
	char *temp;

	i = 0;
	while (s[i] > 0)
	{
		if (s[i] == c)
		{
			temp = &s[i];
			return (temp);
		}
		else if  (s[i + 1] == c)
			return (s + i + 1);
		i++;
	}
	return (s + i + 1);
}
