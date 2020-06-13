#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 *_strcpy - copy string.
 *@dest: destiny copy.
 *@src: string to copy:
 *Return: a destiny.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	dest = malloc((strlen(src) + 1) * sizeof(char));
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


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

	key_1 = _strcpy(key_1, key);
	value_1 = _strcpy(value_1, value);
	if (key == '\0')
		return (0);
	if (key != NULL && ht != NULL)
		index = key_index((const unsigned char *) key_1, ht->size);
	else
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = key_1;
	new_node->value = value_1;
	new_node->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		if (strcmp(key_1, ht->array[index]->key) == 0)
			ht->array[index] = new_node;
		else
		{
			temp = malloc(sizeof(hash_node_t));
			temp = ht->array[index];
			ht->array[index] = new_node;
			new_node = temp;
			ht->array[index]->next = new_node;
		}
	}
	return (1);
}
