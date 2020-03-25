#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_nodeint_at_index - print all of number int in a linked list.
 *@head: is pointer to head of linked list.
 *@idx: is integer.
 *@n: data.
 *Return: quantity of nodes.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp;
	listint_t *new_node = (listint_t *)(malloc(sizeof(listint_t)));

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = (*head);
		(*head) = new_node;
		return (new_node);
	}
	for (i = 0; i < idx; i++)
	{
		temp = *head;
		*head = (*head)->next;
	}
	new_node->next = *head;
	(*head)->next = temp;
	return (new_node);
}
