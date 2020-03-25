#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *delete_nodeint_at_index - delete a node in index.
 *@head: is adres of a head of linked list.
 *@index: is a index of node to delete.
 *Return: 1 if succesful.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = *head;
	listint_t *next;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
		temp = temp->next;
	if (temp == NULL || temp->next == NULL)
		return (1);
	next = temp->next->next;
	free(temp->next);
	temp->next = next;
	return (1);
}
