#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *reverse_listint - is list to reverse.
 *@head: is a head of list.
 *Return: last node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (next);
}
