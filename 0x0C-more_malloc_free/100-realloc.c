#include <stdlib.h>
/**
 **_realloc - this function create a array.
*@old_size: size of array.
*@new_size: is a character.
*@ptr: string.
*Return: ptr.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size > new_size)
	{
		free(ptr);
		ptr = malloc(new_size);
	}
	return (ptr);
}
