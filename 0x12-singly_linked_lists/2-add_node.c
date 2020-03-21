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
	int leng_nod = 0;
	list_t *new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free (new_node);
		return (NULL);
	}
	new_node->str  = strdup(str);
	while (new_node->str[leng_nod] != '\0')
		leng_nod++;
	new_node->len = leng_nod;
	new_node->next = (*head);
	(*head)    = new_node;
	return (new_node);
}
