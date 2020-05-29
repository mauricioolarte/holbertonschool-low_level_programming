#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 *hash_table_set - this is for include a value in hash table
 *@ht: is address hast table
 *@key: key of data
 *@value: data
 *Return: 0 is fail or 1 is succes
 */
int hash_table_set(hash_table_t *ht, char *key,  char *value)
{
	hash_node_t *new_node;
	hash_node_t *temp;
	unsigned long int index;

	if (key != NULL && ht != NULL)
		index = key_index((const unsigned char *) key, ht->size);
	/*initilize hash_node_t*/
	if (key != NULL)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);
		new_node->key = key;
		new_node->value = value;
	}
	else
		return (0);

	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		temp = malloc(sizeof(hash_node_t));
		if (temp == NULL)
			return (0);
		temp = ht->array[index];
		ht->array[index] = new_node;
		new_node = temp;
		ht->array[index]->next = new_node;
	}
	return (1);

}
