#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a node at the nth index
 * @head: node
 * @index: index to insert the node at
 * @n: value stored in the node
 * Return: address of the node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *newElement, *store;
	unsigned int myIndex;

	newElement = malloc(sizeof(listint_t));
	newElement->n = n;
	store = *head;
	myIndex = 0;
	if (!newElement)
	{
		free(newElement);
		return (NULL);
	}
	if (index == 0)
	{
		newElement->next = *head;
		*head = newElement;
		return (newElement);
	}
	while (myIndex < index - 1)
	{
		myIndex++;
		store = store->next;
		if (!store)
			return (NULL);
	}
	if (store->next)
	{
		newElement->next = store->next;
		store->next = newElement;
	}
	else
	{
		newElement->next = NULL;
		store->next = newElement;
	}
	return (newElement);
}
