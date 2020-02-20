#include "holberton.h"
/**
*reverse_array - reverse array.
*@a: array
*@n: n elements array a.
*/

void reverse_array(int *a, int n)
{
	int b, i;

	for (i = 0; i < (n / 2); i++)
	{
		b = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = b;
	}
}
