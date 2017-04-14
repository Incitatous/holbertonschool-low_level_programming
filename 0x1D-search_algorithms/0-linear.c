#include "search_algos.h"
/**
 * linear_search - Linear search algorithm
 *
 * @array: SE
 * @size: SE
 * @value: SE
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	i = 0;
	if (!array)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
