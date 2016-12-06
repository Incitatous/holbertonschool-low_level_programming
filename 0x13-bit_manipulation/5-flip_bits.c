#include "holberton.h"
/**
 * flip_bits - returns the number of bits to flip
 *
 * @n: unsigned long int passed
 * @m: other uli passed
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int len, i;

	i = 0;
	len = sizeof(unsigned long int) * 8 - 1;
	while (len > 0)
	{
		if ((n & 1) != (m & 1))
			i++;
		n >>= 1;
		m >>= 1;
		len--;
	}
	return (i);
}
