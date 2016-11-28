#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_node - adds a node at the beginning of the list
 * @head: linked list
 * @str: string
 * Return: length
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newElement;
	int i;

	i = 0;
	newElement = malloc(sizeof(list_t));
	if (newElement == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	newElement->str = strdup(str);
	newElement->len = i;
	newElement->next = *head;
	*head = newElement;

	return (newElement);
}
