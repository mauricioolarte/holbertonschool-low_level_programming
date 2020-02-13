#include "holberton.h"
/**
 *print_diagonal - print diagonal line.
 *
 *@n: integer.
 *
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		_putchar(92);
		_putchar('\n');
	for (i = 1; i <= n - 1; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');

	}
	}
	else
	{
	_putchar('\n');
	}

}
