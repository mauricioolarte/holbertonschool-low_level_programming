#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *print_list - print all the elements of a linked list.
 *@h: is a linked list.
 *Return: size of linked list.
 */

size_t print_list(const list_t *h)
{
	unsigned int countnod;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		countnod++;
	}
	return (++countnod);
}
