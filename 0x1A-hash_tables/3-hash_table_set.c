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
	hash_node_t *new_node = NULL;
	hash_node_t *temp = NULL;
	unsigned long int index = 0;
	char *key_1 = NULL;
	char *value_1 = NULL;

	key_1 = malloc(sizeof(char) * strlen(key));
	value_1 = malloc(sizeof(char) * strlen(value));
	strcpy(key_1, key);
	strcpy(value_1, value);
	if (key == '\0')
		return (0);
	if (key != NULL && ht != NULL)
		index = key_index((const unsigned char *) key_1, ht->size);
	else
		return (0);
	/*initilize hash_node_t*/
	new_node = malloc(sizeof(hash_node_t));
	new_node->key = key_1;
	new_node->value = value_1;
	new_node->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		if (strcmp(key_1, ht->array[index]->key) == 0)
			ht->array[index]->value = value_1;
		else
		{
			temp = malloc(sizeof(hash_node_t));
			temp = ht->array[index];
			ht->array[index] = new_node;
			new_node = temp;
			ht->array[index]->next = new_node;
			free(temp);
		}
	}
	return (1);
}
