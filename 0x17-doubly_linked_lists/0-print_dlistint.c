#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*print_dlistint - print all the nodes of h.
*@h: is a double linked list head.
*Return: number of nodes.
*/
size_t print_dlistint(const dlistint_t *h)
{
	int number_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number_nodes++;
	}
	return (number_nodes);
}
