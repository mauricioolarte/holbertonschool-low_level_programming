#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, unsigned char *key,  char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	new_node->key = key;
	new_node->value;
	ht->array[key_index(key,ht->size)] = new_node;
	return 1;

}
