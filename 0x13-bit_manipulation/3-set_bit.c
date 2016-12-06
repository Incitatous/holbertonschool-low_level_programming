#include "holberton.h"
/**
 * set_bit - sets a bit to 1 at a specified index
 *
 * @n: unsigned long int passed
 * @index: SE
 * Return: res or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned int) * 8)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
