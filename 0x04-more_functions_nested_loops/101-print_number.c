#include "holberton.h"
/**
 *print_number - print a number whit _putchar.
 *
 *@n: is a integer.
 *
 */
void print_number(int n)
{
	int i, d, k = 1, p = 1, j, larg;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	larg = n;

	while (larg / 10 > 0)
	{
		larg = larg / 10;
		k++;
	}

	for (i = k; i > 0; i--)
	{
		if (k != 1)
		{
		for (j = 2; j <= i; j++)
		{
			p = p * 10;
		}
		}

		d = n / p;
		_putchar(d + '0');
		n = n - p * d;
		p = 1;

	}
}
