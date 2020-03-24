#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *sum_listint - print  number of nodes linked list.
 *@head: is pointer to head of linked list.
 *Return: sum of data of nodes.
 */
int sum_listint(listint_t *head)
{
	int sumdata = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sumdata += head->n;
		head = head->next;
	}
	return (sumdata);
}
