#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a node at the beginning of the list
 * @head: linked list
 * @n: int passed
 * Return: length
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newElement;

	newElement = malloc(sizeof(listint_t));

	if (newElement == NULL)
		return (NULL);
	newElement->n = n;
	newElement->next = *head;
	*head = newElement;

	return (newElement);
}
