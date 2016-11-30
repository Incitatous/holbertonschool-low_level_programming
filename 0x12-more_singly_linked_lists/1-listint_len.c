#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - prints a listint_t list
 * @h: pointer to struct
 * Return: length
 */
size_t listint_len(const listint_t *h)
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
