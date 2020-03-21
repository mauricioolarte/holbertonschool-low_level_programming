#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
*add_node_end - add node and the end.
*@head: is adress od head of linked list.
*@str: is a string.
*Return: pointer.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	int stringlen = 0;
	list_t *last = *head;
	list_t *new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str  = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node->str);
		free(new_node);
		return (new_node);
	}
	while (new_node->str[stringlen] != '\0')
		stringlen++;
	new_node->len = stringlen;
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
