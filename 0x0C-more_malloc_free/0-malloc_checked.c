#include <stdlib.h>
#include <stdio.h>
/**
**malloc_checked - this check a function that allocates memory.
*@b: integer.
*/
void *malloc_checked(unsigned int b)
{
	 void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit (98);
	}
	return (p);
}
