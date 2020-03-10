#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 **new_dog - new structure.
 *@name: name of dog.
 *@age: age of dog.
 *@owner: owner of dog.
 *Return: dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k, n;
	dog_t *dogy;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	dogy = malloc(sizeof(dog_t));
	if (dogy == NULL)
		return (NULL);
	dogy->name = malloc(sizeof(char) * (i + 1));
	if (dogy->name == NULL)
	{
		free(dogy);
	}
	for (k = 0; k < i; k++)
		dogy->name[k] = name[k];
	dogy->owner = malloc(sizeof(char) * (j + 1));
	if (dogy->owner == NULL)
	{
		free(dogy->name);
		free(dogy);
	}
	for (n = 0; n < j; n++)
		dogy->owner[n] = owner[n];
	dogy->age = age;
	return (dogy);
}
