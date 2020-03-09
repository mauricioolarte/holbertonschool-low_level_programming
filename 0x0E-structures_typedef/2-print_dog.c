#include <stdio.h>
#include "dog.h"
/**
*print_dog - print structure of dog.
*@d: is pointer.
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)");
	else
	printf("Name: %s\n", d->name);
/*	if (d->age == '\0')
		printf("Name: (nil)");
		else*/
		printf("Name: %.1f\n", d->age);
	if (d->owner == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", d->owner);
}
