#include "lists.h"
/**
 * sum_dlistint - adds the int of the nodes
 * @head: node
 * Return: head
 */
int sum_dlistint(dlistint_t *head)
{
	int mySum;

	mySum = 0;
	while (head)
	{
		mySum += head->n;
		head = head->next;
	}
	return (mySum);
}
