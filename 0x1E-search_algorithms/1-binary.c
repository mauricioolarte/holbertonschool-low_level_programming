#include <stdio.h>
#include <stdlib.h>

/**
 *print_array - print intevale of array.
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
*linear_search - function that searches for a value in an array of integers
*@array:  is a pointer to the first element of the array to search in
*@size: is the number of elements in array
*@value: is the value to search for
*Return: return the first index where value is located
*/

int binary_search(int *array, size_t size, int value)
{
	unsigned int l_index = 0, r_index = (size - 1);
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
		else if (array[m] > value )
		{
			r_index = m - 1;
		}
		else
			return (m);
	}
	return (-1);
}
