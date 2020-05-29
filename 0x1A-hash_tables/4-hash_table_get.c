#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 *hash_table_get - this is for include a value in hash table
 *@ht: is address hast table
 *@key: key of data
 *Return: 0 is fail or 1 is succes
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head;

	if (strcmp(key, "") == 0)
		return (NULL);
	if (key != NULL && ht != NULL)
		index = key_index((const unsigned char *) key, ht->size);
	else
		return (0);

	if (ht->array[index] == NULL)
		return (NULL);

	head = malloc(sizeof(hash_node_t));
	if (head == NULL)
		return (0);
	head = ht->array[index];
	while (head)
	{
		if (head->key == key)
			return (head->value);
		head = head->next;
	}
	return (NULL);
}
