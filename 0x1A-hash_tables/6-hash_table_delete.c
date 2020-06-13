#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{

	unsigned long int i;
/* free linked list*/
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			free(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}
