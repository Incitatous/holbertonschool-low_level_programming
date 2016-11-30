#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - prints a listint_t list
 * @h: pointer to struct
 * Return: length
 */
size_t print_listint(const listint_t *h)
{
	size_t  length;

	length = 0;
	while (h != NULL)
	{
		++length;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (length);
}
