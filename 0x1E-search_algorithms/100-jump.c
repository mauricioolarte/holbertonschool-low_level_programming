#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 *jump_search - function that searches for a value in a sorted array of integer
 *@array: s a pointer to the first element of the array to search in
 *@size: is the number of elment in the array
 *@value: is the value to search for
 *Return: index of search or -1 if not found value.
 */

int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size);
	unsigned int r_idx = 0, l_idx = 0;

	if (array == NULL)
		return (-1);

	while (l_idx < (unsigned int)size && array[l_idx] < value)
	{

		r_idx = l_idx;
		l_idx = jump + l_idx;
		printf("Value checked array[%i] = [%i]\n", r_idx, array[r_idx]);
	}

	printf("Value found between indexes [%i] and [%i]\n", r_idx, l_idx);

	while (array[r_idx] < value)
	{
		printf("Value checked array[%i] = [%i]\n", r_idx, array[r_idx]);
		r_idx = r_idx + 1;
		if (r_idx > l_idx || r_idx >= size - 1)
		{

			break;
		}
	}

	if (array[r_idx] == value)
	{
		printf("Value checked array[%i] = [%i]\n", r_idx, array[r_idx]);
		return (r_idx);
	}
	return (-1);


}
