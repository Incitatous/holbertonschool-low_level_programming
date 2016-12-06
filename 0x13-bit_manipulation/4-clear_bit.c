#include "holberton.h"
/**
 * clear_bit - sets a bit to 0 at a specified index
 *
 * @n: unsigned long int passed
 * @index: SE
 * Return: res or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned int) * 8)
		return (-1);
	*n = ~*n;
	*n = *n | (1 << index);
	*n = ~*n;
	/*or just *n = *n & (~(0 << index));*/
	return (1);
}
