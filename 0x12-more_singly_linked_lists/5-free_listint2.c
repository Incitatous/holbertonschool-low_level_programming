#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: linked list
 * Return: No return
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *store;

	tmp = *head;
	while (tmp->next != NULL)
	{
		store = tmp;
		tmp = store->next;
		free(store);
	}
	*head = NULL;
	free(tmp);
}
