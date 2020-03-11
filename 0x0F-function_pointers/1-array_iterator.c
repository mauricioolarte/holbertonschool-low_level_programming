#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - print a array.
 *@array: is a array.
 *@size: is a size of array.
 *@action: is function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size <= 0 || array == NULL)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
	action(array[i]);
}
