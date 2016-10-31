#include "holberton.h"

/**
 * _memset - fills memory with constant byte
 * @s: memory area
 * @n: number of bytes
 * @b: constant byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
