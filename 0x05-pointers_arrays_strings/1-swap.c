#include <stdio.h>
/**
 *swap_int - this function swap the value of two integer.
 *@a: interger.
 *@b: integer.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
