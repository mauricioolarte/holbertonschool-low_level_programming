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
*dlistint_len - print all the nodes of h.
*@h: is a double linked list head.
*Return: number of nodes.
*/
size_t dlistint_len(const dlistint_t *h)
{
	int number_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		number_nodes++;
	}
	return (number_nodes);
}

/**
 **insert_dnodeint_at_index - returns the nth node of a linked list.
 *@h: is the head of linked list.
 *@idx: is the nth node to return.
 *@n: is a data.
*Return: nth node or null
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *nodeidx;
	unsigned int countnodes;

	countnodes = dlistint_len(*h);
	if (*h == NULL)
	{
		add_dnodeint(h, n);
		return (*h);
	}
	if (idx == countnodes)
	{
		add_dnodeint_end(h, n);
		return (*h);
	}
	nodeidx = get_dnodeint_at_index(*h, idx);
	if (nodeidx == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = nodeidx->prev;
	nodeidx->prev = new;
	new->next = nodeidx;
	if (new->prev != NULL)
		new->prev->next = new;
	else
		(*h) = new;
	return (new);
}
