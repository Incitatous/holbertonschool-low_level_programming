#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of the list
 * @head: linked list
 * @n: int passed
 * Return: store
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newElement;
	dlistint_t *store;

	newElement = malloc(sizeof(dlistint_t));
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
