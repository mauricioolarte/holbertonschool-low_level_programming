#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_listint2 - free memori.
 *@head: is adress of begining of linked list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;

	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(*head);
	*head = NULL;
}
