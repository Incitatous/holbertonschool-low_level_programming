#include "lists.h"
/**
 * print_dlistint - prints a dlistint
 * @h: node
 * Return: length
 */
size_t print_dlistint(const dlistint_t *h)
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
