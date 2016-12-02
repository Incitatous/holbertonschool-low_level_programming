#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_listint - prints a listint_t list
 * @head: node
 * @index: node index
 * Return: head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int myIndex;

	myIndex = 0;
	if (!head)
		return (NULL);
	while (myIndex < index)
	{
		myIndex++;
		head = head->next;
	}
	return (head);
}
