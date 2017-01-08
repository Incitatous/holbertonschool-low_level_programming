#include "lists.h"
/**
 * get_dnodeint_at_index - gets a node
 * @head: node
 * @index: node index
 * Return: head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int myIndex;

	myIndex = 0;
	if (!head)
		return (NULL);
	while (myIndex < index)
	{
		myIndex++;
		if (!head)
			return (NULL);
		head = head->next;
	}
	return (head);
}
