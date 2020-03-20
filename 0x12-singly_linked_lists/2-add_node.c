#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 *add_node - insert new node to linked list.
 *@str: is string.
 *@head: is adress.
 *Return: adress of new element.
 */
list_t *add_node(list_t **head, const char *str)
{
		list_t *new_node = (list_t *) malloc(sizeof(list_t));

		if (list_t *new_node == NULL)
			return (NULL);
		new_node->str  = strdup(str);
		new_node->next = (*head);
		(*head)    = new_node;
		return ((list_t *) malloc(sizeof(list_t)));
}
