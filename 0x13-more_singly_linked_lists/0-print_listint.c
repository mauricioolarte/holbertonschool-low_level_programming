#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
*print_number - print a integer.
 *@number: is a integer.
 */
void print_number(int number)
{
	printf("%i\n", number);
}

/**
 *print_listint - print all of number int in a linked list.
 *@h: is pointer to head of linked list.
 *Return: quantity of nodes.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int countnode = 0;
	int num;

	if (h == NULL)
		return (0);
	while (h)
	{
		num = h->n;
		print_number(num);
		++countnode;
		h = h->next;
	}
	return (countnode);
}
