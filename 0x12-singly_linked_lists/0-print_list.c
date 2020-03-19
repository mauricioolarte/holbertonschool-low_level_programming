#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *size_t print_list - print all the elements of a linked list.
 *@h: is a linked list.
 *Return: size of linked list.
 */

size_t print_list(const list_t *h)
{
	long unsigned int countnod;
	if (h == 0)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] (nil)\n", h->len);
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		countnod++;
	}
	return(countnod);
}
