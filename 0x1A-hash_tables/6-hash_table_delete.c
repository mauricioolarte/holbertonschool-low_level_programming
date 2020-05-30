#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int i;
/* free linked list*/

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			temp = malloc(sizeof(hash_node_t));
			if (temp == NULL)
				return;
			while(ht->array[i])
			{
				temp = ht->array[i]->next;
				free(ht->array[i]);
				ht->array[i] = temp;
			}
			free(temp);
		}
	}

	free(ht);
}
