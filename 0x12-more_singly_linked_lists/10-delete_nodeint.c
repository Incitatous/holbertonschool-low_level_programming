#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a node at the nth index
 * @head: node
 * @index: index to insert the node at
 * Return: address of the node or NULL
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *store, *newElement;
	unsigned int myIndex;

	myIndex = 0;
	if (!*head)
		return (-1);
	store = *head;
	if (index == 0 && store->next == NULL)
	{
		*head = NULL;
		free(store);
		return (1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(store);
		return (1);
	}
	while (myIndex < index - 1)
	{
		myIndex++;
		store = store->next;
		if (!store)
			return (-1);
	}
	if (store->next)
	{
		newElement = store->next;
		store->next = newElement->next;
		free(newElement);
	}
	else
	{
		return (-1);
	}
	return (1);
}
