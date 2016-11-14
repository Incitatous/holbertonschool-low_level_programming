#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 *
 * @b: size
 * Return:  if fail, 98
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *test;

	test = malloc(b);
	if (test == NULL)
		exit(98);
	return (test);
}
