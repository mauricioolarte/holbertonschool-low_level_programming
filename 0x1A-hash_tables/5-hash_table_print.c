#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
#define ACTIVE 1
/**
 *hash_table_print - this is for include a value in hash table
 *@ht: is address hast table
 *Return: 0 is fail or 1 is succes
 */

void hash_table_print(const hash_table_t *ht)
{
	int flag = 0;
	unsigned long int i;
	hash_node_t *head;


	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{

		if (ht->array[i] != NULL)
		{
			head = malloc(sizeof(hash_node_t));
			if (head == NULL)
				return;
			head = ht->array[i];
			while (head)
			{
				if (flag == ACTIVE)
					printf(", ");
				printf("\'%s\': ", head->key);
				printf("\'%s\'", head->value);
				head = head->next;
			}
			free(head);
			flag = ACTIVE;
		}
	}
	printf("}\n");
		return;
}
