#include <stdio.h>
/**
*print_array - this print a array.
*@a: array.
*@n: size of array.
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", *(a + i));
	}
	printf("%c\n", *(a + n));
}
