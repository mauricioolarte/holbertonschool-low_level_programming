#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
#include <stdlib.h>
/**
 *key_index- this function calculate the key index of a hash table.
 *@key: key of hash table.
 *@size: size of a hash table.
 *Return: key index.
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_index;

	if (key != NULL && size > 0 && size != '\0')
		key_index = hash_djb2(key) % size;
	return (key_index);

}
