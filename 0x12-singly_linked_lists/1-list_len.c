#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *list_len - print all the elements of a linked list.
 *@h: is a linked list.
 *Return: size of linked list.
 */

size_t list_len(const list_t *h)
{
	unsigned int countnod = 0;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		h = h->next;
		countnod++;
	}
	return (++countnod);
}
