#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a node at the end of the list
 * @head: linked list
 * @n: int passed
 * Return: store
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newElement;
	listint_t *store;

	newElement = malloc(sizeof(listint_t));
	if (newElement == NULL)
		return (NULL);
	newElement->n = n;
	newElement->next = NULL;
	store = *head;
	if (*head == NULL)
	{
		*head = newElement;
		return (newElement);
	}
	else
	{
		while (store->next != NULL)
			store = store->next;
		store->next = newElement;
	}
	return (store);
}
