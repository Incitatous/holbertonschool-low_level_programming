#include "function_pointers.h"

/**
 * int_index - searches integer
 * @array: SE
 * @size: SE
 * @cmp: ptr to function to compare to
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
