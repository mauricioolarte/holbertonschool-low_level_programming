#include "holberton.h"
/**
*reverse_array - reverse array.
*@a: array
*@n: n elements array a.
*/

void reverse_array(int *a, int n)
{
	int b[1000], i, j;

	for (i = 0; i < n; i++)
	{
		b[n - i] = a[i];
	}
	for (j = 0; j < n; j++)
	{
		a[j] = b[j];
	}
}
