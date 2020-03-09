#include <stdio.h>
#include "dog.h"
/**
 *init_dog - is a dog structure.
 *@d: name of structure.
 *@name: is name of dog.
 *@age: is age of dog.
 *@owner: is a name of owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d = NULL)
		return(NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
