#include <stdlib.h>
#include <stdio.h>
/**
 *interpolation_search - function that searches for a value in a sorted array\
 of integers using
 *@array: s a pointer to the first element of the array to search in
 *@size:  is the number of elements in array
 *@value: is the value to search for
 *Return: return index or value or -1
 */


int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	size_t pos = low + (((double)(high - low) / (array[high] - array[low])
				    ) * (value - array[low]));

	if (!((value >= array[low]) && (value <= array[high])))
		printf("Value checked array[%i] is out of range\n", (int)pos);
	while ((array[high] != array[low]) && (value >= array[low]) && (
		       value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])
				     ) * (value - array[low]));

		printf("Value checked array[%i] = [%i]\n", (int)pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}

	if (value == array[low])
		return (low);
	return (-1);


}
