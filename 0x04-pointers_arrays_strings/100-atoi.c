#include "holberton.h"

/**
 * _atoi - converts to int
 *
 * Return: 0 if no int
 */

int _atoi(char *s)
{
	int i;
	int j;
	int k;

	i = 0;
	j = -1;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			j *= -1;
		if (s[i] >= '0' && s[i] <= '9')
			k = k * 10 - (s[i] - '0');
		if ((s[i] >= '0' && s[i] <= '9') && (s[i + 1] < '0' || s[i + 1] > '9'))
			break;
		i++;
	}
	return (k * j);
}
