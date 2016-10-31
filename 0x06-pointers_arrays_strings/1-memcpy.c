#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
