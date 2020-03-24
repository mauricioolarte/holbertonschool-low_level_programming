#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_listint - free memori.
 *@head: is adress of begining of linked list.
 */
void free_listint2(listint_t **head)
{

		free(**head);

}
