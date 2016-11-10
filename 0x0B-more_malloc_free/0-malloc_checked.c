#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked: allocates memory
 *
 * @b: size
 * Return:  if fail, 98
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *test;

	test = malloc(sizeof(b));
	if (test == NULL)
		exit (98);
	return (test);
}
