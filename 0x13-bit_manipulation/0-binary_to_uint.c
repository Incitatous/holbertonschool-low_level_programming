#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: string
 * Return: Converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, power, res;

	i = res = 0;
	power = 1;
	if (!(b[i] == '0' || b[i] == '1') ||(!b))
		return (0);
	while (b[i] != '\0')
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);
		i++;
	}
	while (i > 0)
	{
		i--;
		if (b[i] == '1')
			res += power;
		power *= 2;
	}
	return (res);
}
