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
	list_t *new_node = (list_t *) malloc(sizeof(list_t));
	list_t *last = *head;

	new_node->str  = strdup(str);
	while (new_node->str[stringlen] != '\0')
		stringlen++;
	new_node->len = stringlen;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (NULL);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	return (NULL);
}
