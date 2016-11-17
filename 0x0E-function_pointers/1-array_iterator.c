#include "function_pointers.h"

/**
 * array_iterator - executes functioni
 * @array: SE
 * @size: SE
 * @action: ptr to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
