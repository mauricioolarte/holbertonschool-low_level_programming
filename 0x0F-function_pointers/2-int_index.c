#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *int_index - print a array.
 *@array: is a array.
 *@size: is a size of array.
 *@cmp: is function.
 *Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	while (cmp(array[i]) != 1 && i < size)
		i++;
	if (i == (size))
		return (-1);
	return (i);
}
