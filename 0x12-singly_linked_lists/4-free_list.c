#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *free_list - free nodes.
 *@head: is node.
 */

void free_list(list_t *head)
{
	list_t *temp;


	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
	free(head);
}
