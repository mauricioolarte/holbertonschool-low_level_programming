#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
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
