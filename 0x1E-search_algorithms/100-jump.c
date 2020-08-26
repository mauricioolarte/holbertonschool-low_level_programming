#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 *jump_search - function that searches for a value in a sorted array of integers.
 *@array: s a pointer to the first element of the array to search in
 *@size: is the number of elment in the array
 *@value: is the value to search for
 *return: index of search or -1 if not found value.
 */

int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size);
	unsigned int r_idx = 0, l_idx = jump;

	while (array[l_idx] < value)
	{
		printf("Value checked array[%i] = [%i]\n", r_idx, array[r_idx]);
		r_idx = l_idx;
		l_idx = jump + l_idx;
		if (l_idx >= size)
		{
			printf("Value checked array[%i] = [%i]\n", r_idx, array[r_idx]);
			break;
		}
	}

	printf("Value found between indexes [%i] and [%i]\n", r_idx, l_idx);

	while (array[r_idx] <= value)
	{
		printf("Value checked array[%i] = [%i]\n", r_idx, array[r_idx]);
		r_idx = r_idx + 1;
		if (r_idx > l_idx || r_idx >= size - 1)
		{

			break;
		}
	}

	if (array[r_idx] == value)
		return r_idx;
	return (-1);


}
