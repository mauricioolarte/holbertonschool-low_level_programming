#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_listint - free memori.
 *@head: is adress of begining of linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
