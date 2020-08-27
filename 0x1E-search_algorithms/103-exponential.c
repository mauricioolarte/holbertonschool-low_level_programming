#include <stdio.h>
#include <stdlib.h>
/**
 *print_array - print intevale of array.
 *@array: pointer to array
 *@l: left size of interval
 *@r: right size of interval
 */
void print_array(int *array, int l, int r)
{
	int i = 0;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		if (i == l)
			printf("%i", array[i]);
		else
			printf(", %i", array[i]);
	}
	printf("\n");
}

/**
*binary_search - function that searches for a value in an array of integers
*@array:  is a pointer to the first element of the array to search in
*@l_index: is the number of elements in array
*@r_index: is the number.
*@value: is the value to search for
*Return: return the first index where value is located
*/

int binary_search(int *array, int value, int l_index, int r_index)
{
	/* m is midle of interval. */
	unsigned int m = 0;

	if (array == NULL)
		return (-1);
	while (l_index <= r_index)
	{
		print_array(array, l_index, r_index);
		m = (l_index + r_index) / 2;

		if (array[m] < value)
		{
			l_index = m + 1;
		}
		else if (array[m] > value)
		{
			r_index = m - 1;
		}
		else
			return (m);
	}
	return (-1);
}

/**
*exponential_search - function that searches for a value in an array of integer
*@array:  is a pointer to the first element of the array to search in
*@size: is the number of elements in array
*@value: is the value to search for
*Return: return the first index where value is located
*/



int exponential_search(int *array, int size, int value)
{
	int bound = 1, bound_l = 0, min = 0;

	if (size == 0 || array == NULL)
	{
		return (-1);
	}

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%i] = [%i]\n", bound, array[bound]);
		bound_l = bound;
		bound *= 2;
	}

	printf("Value found between indexes [%i] and [%i]\n", bound_l, bound - 1);
	if (bound - 1 < (int)size)
		min = bound - 1;
	else
		min = (int)size;

	return (binary_search(array, value, (bound / 2), min));
}
