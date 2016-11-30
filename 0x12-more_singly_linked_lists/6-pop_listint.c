#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - Erases the first value of the linked list
 * @head: linked list
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *newElement;
	int store;

	newElement = malloc(sizeof(listint_t));
	if (newElement == NULL)
		return (0);
	store = (*head)->n;
	*head = (*head)->next;
	free(newElement);
	return (store);
}
