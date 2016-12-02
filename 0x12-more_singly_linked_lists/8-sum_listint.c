#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - adds the int of the nodes
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
