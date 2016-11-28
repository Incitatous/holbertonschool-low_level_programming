#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints a list_t list
 * @h: pointer to struct
 * Return: length
 */
size_t print_list(const list_t *h)
{
	size_t  length;

	length = 0;
	while (h != NULL)
	{
		++length;
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (length);
}
