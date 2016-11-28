#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * list_len - lists the length
 * @h: pointer to struct
 * Return: length
 */
size_t list_len(const list_t *h)
{
	size_t  length;

	length = 0;
	while (h != NULL)
	{
		++length;
		h = h->next;
	}
	return (length);
}
