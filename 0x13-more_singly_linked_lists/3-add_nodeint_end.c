#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_nodeint_end - add node at the the end of linked list.
 *@head: is the begining of the linked list.
 *@n: is a integer.
 *Return: adress of new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* 1. allocate node */
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));
	listint_t *last = *head;  /* used in step 5*/

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n  = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (new_node);
}
