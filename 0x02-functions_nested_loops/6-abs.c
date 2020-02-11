#include "_putchar.h"
#include <stdio.h>
/**
 *_abs - this function calculate the absolute valor of a number.
 *
 * @n: is a integer.
 *
 * Return: absolute valor of a number.
 */

int _abs(int n)
{
	if (n > 0)
	{
		printf("%d\n", n);
	}
	else if (n == 0)
	{
		printf("%d\n", n);
	}
	else
	{
		n = n * (-1);
		printf("%d\n", n);
	}
}
