#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - gets a node
 * @head: node
 * Return: head
 */
int sum_listint(listint_t *head)
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
