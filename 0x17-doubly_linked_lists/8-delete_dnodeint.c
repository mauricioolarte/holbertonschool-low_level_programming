#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 **get_dnodeint_at_index - returns the nth node of a linked list.
 *@head: is the head of linked list.
 *@index: is the nth node to return.
*Return: nth node or null
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node_number = 0;

	while (head != NULL)
	{
		if (node_number == index)
			return (head);
		node_number++;
		head = head->next;
	}
	return (NULL);
}
/**
 **delete_dnodeint_at_index - returns the nth node of a linked list.
 *@head: is the head of linked list.
 *@index: is the nth node to return.
*Return: nth node or null
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nodeidx;

	nodeidx = get_dnodeint_at_index(*head, index);
	if (nodeidx == NULL || *head == NULL)
		return (-1);
	if (*head == nodeidx)
		*head = nodeidx->next;
	if (nodeidx->next != NULL)
		nodeidx->next->prev = nodeidx->prev;
	if (nodeidx->prev != NULL)
		nodeidx->prev->next = nodeidx->next;
	free(nodeidx);
	return (1);
}
