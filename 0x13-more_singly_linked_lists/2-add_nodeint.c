#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint - add node in front of linked list.
 *@head: is address of head of linked list.
 *@n: is number.
 *Return: return adress of head.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* 1. allocate node */
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* 2. put in the data  */
	new_node->n  = n;

	/* 3. Make next of new node as head */
	new_node->next = (*head);

	/* 4. move the head to point to the new node */
	(*head) = new_node;

	return (new_node);
}
