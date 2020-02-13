#include "holberton.h"
/**
 *print_line - Print a straight line whit n spaces.
 *
 *@n: is a integer.
 *
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
		_putchar(95);
		}

	}
	_putchar('\n');
}
