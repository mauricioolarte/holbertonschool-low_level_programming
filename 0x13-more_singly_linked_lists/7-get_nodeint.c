#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_nodeint_at_index - print all of number int in a linked list.
 *@head: is pointer to head of linked list.
 *@index: is integer.
 *Return: quantity of nodes.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (0);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
