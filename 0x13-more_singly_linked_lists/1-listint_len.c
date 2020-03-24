#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *listint_len - print  number of nodes linked list.
 *@h: is pointer to head of linked list.
 *Return: quantity of nodes.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int countnode = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		++countnode;
		h = h->next;
	}
	return (countnode);
}
