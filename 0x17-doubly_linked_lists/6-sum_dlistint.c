#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *sum_dlistint - returns the nth node of a linked list.
 *@head: is the head of linked list.
*Return: sum of data or 0 if empty.
*/
int sum_dlistint(dlistint_t *head)
{
	unsigned int node_datasum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{

		node_datasum += head->n;
		head = head->next;
	}
	return (node_datasum);
}
