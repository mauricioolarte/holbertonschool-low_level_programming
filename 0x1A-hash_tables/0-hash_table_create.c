#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 **hash_table_create - this create a hash table.
 *@size: is the size of a array.
 *Return: address of a hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *new;

	if (size > 0)
	{
		new = malloc(sizeof(hash_table_t));
		new->size = size;
		new->array = (hash_node_t **)(malloc(sizeof(hash_node_t *) * size));
		if (new == NULL)
			return (NULL);
	}
	else
		return (NULL);
	return (new);
}
