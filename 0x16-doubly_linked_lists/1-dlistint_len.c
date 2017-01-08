#include "lists.h"
/**
 * dlistint_len - return the number of nodes
 * @h: node
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h)
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
