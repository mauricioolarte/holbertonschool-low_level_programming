#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *pop_listint - delete a head.
 *@head: adress head.
 *Return: val int head.
 */

int pop_listint(listint_t **head)
{
	int returdat = 0;
	listint_t *new_node = NULL;

	if (*head == NULL)
		return (0);
	new_node = (*head)->next;
	returdat = (*head)->n;
	free(*head);
	*head = new_node;

	return (returdat);
}
