#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_node_end - adds a node at the end of the list
 * @head: linked list
 * @str: string
 * Return: length
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newElement;
	list_t *store;
	int i;

	i = 0;
	newElement = malloc(sizeof(list_t));
	if (newElement == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	newElement->str = strdup(str);
	newElement->len = i;
	newElement->next = NULL;
	store = *head;
	if (*head == NULL)
	{
		return (newElement);
	}
	else
	{
		while (store != NULL)
		{
			store = store->next;
		}
		store->next = newElement;
		return (store);
	}
}
