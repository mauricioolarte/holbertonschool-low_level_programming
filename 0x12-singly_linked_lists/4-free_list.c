#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *free_list - free nodes.
 *@head: is node.
 */

void free_list(list_t *head)
{

	while (head->next != NULL)
	{
		free(head->str);
		free(head->next);
		free(head);
		head = head->next;
	}
	free(head->str);
	free(head->next);
	free(head);
}
