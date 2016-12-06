#include "holberton.h"
/**
 * get_bit - gets a bit at a specified index
 *
 * @n: unsigned long int passed
 * @index: SE
 * Return: res or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int res;

	res = 0;
	if (index > sizeof(unsigned int) * 8)
		return (-1);
	res = (n >> index) & 1;
	return (res);
}
