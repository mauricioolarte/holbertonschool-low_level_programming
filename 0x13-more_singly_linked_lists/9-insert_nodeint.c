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
	unsigned int j = 0;
	listint_t *temp = *head;
	listint_t *new_node = (listint_t *)(malloc(sizeof(listint_t)));

	if (*head == NULL)
		return (NULL);
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = (*head);
		(*head) = new_node;
		return (new_node);
	}
	for (j = 0; j < idx - 1; j++)
	{
		/*temp = (*head)->next;*/
		*head = (*head)->next;
	}
	if (*head == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = (*head)->next;
	(*head)->next = new_node;
	*head = temp;
	return (new_node);
}
