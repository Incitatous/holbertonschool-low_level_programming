#include "search_algos.h"
/**
 * binary_search - Binary search for sorted arrays
 *
 * @array: SE
 * @size: SE
 * @value: SE
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, middle, i;

	left = 0;
	right = size - 1;
	if (!array)
		return (-1);
	while (left <= right)
	{
		i = left;
		printf("Searching in array: ");
		while (i < right)
		{
			printf("%d, ", array[i]);
			i++;
		}
		printf("%d\n", array[i]);
		middle = (right + left) / 2;
		if (array[middle] == value)
			return (middle);
		if (array[middle] < value)
			left = middle + 1;
		else
			right = middle;
	}
	return (-1);
}
