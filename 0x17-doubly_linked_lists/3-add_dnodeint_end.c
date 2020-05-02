#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
**add_dnodeint_end - insert a node at the end of linkend list.
*@head: is the beginig of the linkend list.
*@n: is a data.
*Return: null if fail, temp is succes.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new;
	dlistint_t *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	new->prev = temp;
	return (temp);
}
